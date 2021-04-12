/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(id)initCoverViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 withTextWidth:(double)arg3 ;
-(id)initCoverBackgroundViewWithFrame:(CGRect)arg1 isRightToLeft:(BOOL)arg2 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end

