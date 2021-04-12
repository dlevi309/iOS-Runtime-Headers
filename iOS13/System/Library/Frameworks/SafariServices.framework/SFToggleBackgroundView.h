/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class CAShapeLayer;

@interface SFToggleBackgroundView : UIView {

	CGSize _shapeSize;
	long long _cornerRoundingMode;

}

@property (assign,nonatomic) long long cornerRoundingMode;              //@synthesize cornerRoundingMode=_cornerRoundingMode - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
+(Class)layerClass;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)tintColorDidChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(CAShapeLayer *)shapeLayer;
-(void)_updateShape;
-(void)setCornerRoundingMode:(long long)arg1 ;
-(long long)cornerRoundingMode;
@end

