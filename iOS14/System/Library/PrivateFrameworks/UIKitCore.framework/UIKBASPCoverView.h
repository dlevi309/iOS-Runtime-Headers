/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface UIKBASPCoverView : UIView {

	CAGradientLayer* _gradientLayer;

}

@property (nonatomic,retain) CAGradientLayer * gradientLayer;              //@synthesize gradientLayer=_gradientLayer - In the implementation block
+(id)ASPCoverViewColor;
+(id)ASPCoverView:(BOOL)arg1 withFrame:(CGRect)arg2 isRightToLeft:(BOOL)arg3 withTextWidth:(double)arg4 ;
-(CAGradientLayer *)gradientLayer;
-(void)layoutSubviews;
-(id)initCoverViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 withTextWidth:(double)arg3 ;
-(id)initCoverBackgroundViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end

