/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIActionSliderDelegate.h>

@protocol TPSlidingButtonDelegateProtocol;
@class _UIActionSlider, UIButton, UIImageView, NSString;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate> {

	int _type;
	_UIActionSlider* _acceptButton;
	UIButton* _sideButtonRight;
	id<TPSlidingButtonDelegateProtocol> _delegate;
	UIImageView* _dialImageView;

}

@property (retain) UIImageView * dialImageView;                               //@synthesize dialImageView=_dialImageView - In the implementation block
@property (retain) _UIActionSlider * acceptButton;                            //@synthesize acceptButton=_acceptButton - In the implementation block
@property (retain) UIButton * sideButtonRight;                                //@synthesize sideButtonRight=_sideButtonRight - In the implementation block
@property (assign) int type;                                                  //@synthesize type=_type - In the implementation block
@property (assign) id<TPSlidingButtonDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(id<TPSlidingButtonDelegateProtocol>)delegate;
-(void)setType:(int)arg1 ;
-(void)setDelegate:(id<TPSlidingButtonDelegateProtocol>)arg1 ;
-(void)layoutSubviews;
-(void)actionSliderDidCompleteSlide:(id)arg1 ;
-(void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2 ;
-(int)type;
-(_UIActionSlider *)acceptButton;
-(void)setAcceptButton:(_UIActionSlider *)arg1 ;
-(void)dealloc;
-(UIButton *)sideButtonRight;
-(UIImageView *)dialImageView;
-(id)initWithSlidingButtonType:(int)arg1 ;
-(void)setSideButtonRight:(UIButton *)arg1 ;
-(void)setDialImageView:(UIImageView *)arg1 ;
@end

