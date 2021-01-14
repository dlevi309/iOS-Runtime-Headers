/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonView.h>

@class _UIContentUnavailableView, NSString;

@interface AMSUIErrorView : AMSUICommonView {

	_UIContentUnavailableView* _backingView;

}

@property (nonatomic,retain) _UIContentUnavailableView * backingView;              //@synthesize backingView=_backingView - In the implementation block
@property (nonatomic,copy) id buttonAction; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(id)buttonAction;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setButtonAction:(id)arg1 ;
-(_UIContentUnavailableView *)backingView;
-(void)_handleButtonTap;
-(void)setBackingView:(_UIContentUnavailableView *)arg1 ;
@end

