/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(int)type;
-(void)setType:(int)arg1 ;
-(id<TPSlidingButtonDelegateProtocol>)delegate;
-(void)setDelegate:(id<TPSlidingButtonDelegateProtocol>)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2 ;
-(void)actionSliderDidCompleteSlide:(id)arg1 ;
-(_UIActionSlider *)acceptButton;
-(UIButton *)sideButtonRight;
-(UIImageView *)dialImageView;
-(id)initWithSlidingButtonType:(int)arg1 ;
-(void)setAcceptButton:(_UIActionSlider *)arg1 ;
-(void)setSideButtonRight:(UIButton *)arg1 ;
-(void)setDialImageView:(UIImageView *)arg1 ;
@end

