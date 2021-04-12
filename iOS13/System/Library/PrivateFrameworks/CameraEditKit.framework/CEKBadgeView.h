/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CEKBadgeViewDelegate;
@class UIColor;

@interface CEKBadgeView : UIView {

	id<CEKBadgeViewDelegate> _delegate;
	double __fillCornerRadius;
	UIColor* __fillColor;
	UIColor* __contentColor;

}

@property (assign,setter=_setFillCornerRadius:,nonatomic) double _fillCornerRadius;              //@synthesize _fillCornerRadius=__fillCornerRadius - In the implementation block
@property (setter=_setFillColor:,nonatomic,retain) UIColor * _fillColor;                         //@synthesize _fillColor=__fillColor - In the implementation block
@property (setter=_setContentColor:,nonatomic,retain) UIColor * _contentColor;                   //@synthesize _contentColor=__contentColor - In the implementation block
@property (assign,nonatomic,__weak) id<CEKBadgeViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(id<CEKBadgeViewDelegate>)delegate;
-(void)setDelegate:(id<CEKBadgeViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)_fillColor;
-(id)_maskImage;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)_contentColor;
-(void)_setFillColor:(id)arg1 ;
-(double)_fillCornerRadius;
-(id)_invertMaskImage:(id)arg1 ;
-(void)_setFillCornerRadius:(double)arg1 ;
-(void)_setContentColor:(id)arg1 ;
@end

