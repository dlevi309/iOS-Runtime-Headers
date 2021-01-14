/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class UIColor;

@interface JFXOverlayEffectDebugViewRect : NSObject {

	BOOL _ignoreTransform;
	double _borderWidth;
	UIColor* _borderColor;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL ignoreTransform;               //@synthesize ignoreTransform=_ignoreTransform - In the implementation block
-(UIColor *)borderColor;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(double)borderWidth;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)ignoreTransform;
-(void)setIgnoreTransform:(BOOL)arg1 ;
@end

