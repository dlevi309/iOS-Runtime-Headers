/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_maskImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CEKBadgeViewDelegate>)delegate;
-(void)_setFillCornerRadius:(double)arg1 ;
-(void)_setContentColor:(id)arg1 ;
-(void)_setFillColor:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<CEKBadgeViewDelegate>)arg1 ;
-(UIColor *)_fillColor;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)_contentColor;
-(double)_fillCornerRadius;
-(id)_invertMaskImage:(id)arg1 ;
@end

