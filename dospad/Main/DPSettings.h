//
//  DPSettings.h
//  dospad
//
//  Created by Chaoji Li on 2020/11/19.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DPScreenScaleMode) {
	DPScreenScaleModeNone,
	DPScreenScaleModeFill,
	DPScreenScaleModeAspectFit4x3,
	// Allow for 16:10, but if 4:3 is better, will use it instead
	DPScreenScaleModeAspectFit16x10,
	DPScreenScaleModeAspectFit16x9
};

NS_ASSUME_NONNULL_BEGIN

@interface DPSettings : NSObject

// If true, treat tap on screen as mouse clicks.
@property (readonly) BOOL tapAsClick;
@property (readonly) BOOL doubleTapAsRightClick;
@property (readonly) float mouseSpeed;
@property (readonly) DPScreenScaleMode screenScaleMode;
@property (readonly) float floatAlpha; // overlay controls
@property (readonly) BOOL showMouseHold;

+ (DPSettings*)shared;


@end

NS_ASSUME_NONNULL_END