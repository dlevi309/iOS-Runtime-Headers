/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface CAMZoomDialDotsView : UIView {

	double _dotSpacingAngle;
	CALayer* __dotLayer;

}

@property (nonatomic,readonly) CALayer * _dotLayer;               //@synthesize _dotLayer=__dotLayer - In the implementation block
@property (assign,nonatomic) long long dotCount; 
@property (assign,nonatomic) CGPoint dotCenter; 
@property (assign,nonatomic) double dotSpacingAngle;              //@synthesize dotSpacingAngle=_dotSpacingAngle - In the implementation block
+(Class)layerClass;
-(id)initWithDotImage:(id)arg1 ;
-(void)setDotSpacingAngle:(double)arg1 ;
-(void)setDotCount:(long long)arg1 ;
-(double)dotSpacingAngle;
-(void)setDotCenter:(CGPoint)arg1 ;
-(id)_replicatorLayer;
-(CALayer *)_dotLayer;
-(long long)dotCount;
-(CGPoint)dotCenter;
@end

