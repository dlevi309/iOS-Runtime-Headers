/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class UIColor;

@interface JTOverlayDebugRect : NSObject {

	BOOL _ignoreTransform;
	double _borderWidth;
	UIColor* _borderColor;
	CGRect _frame;

}

@property (assign,nonatomic) CGRect frame;                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double borderWidth;                 //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL ignoreTransform;               //@synthesize ignoreTransform=_ignoreTransform - In the implementation block
-(CGRect)frame;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)borderColor;
-(void)setIgnoreTransform:(BOOL)arg1 ;
-(BOOL)ignoreTransform;
@end

