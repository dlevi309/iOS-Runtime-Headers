/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface SKUIBackdropContentViewController : UIViewController {

	long long _backdropViewPrivateStyle;
	UIViewController* _contentViewController;

}

@property (assign,nonatomic) long long backdropViewPrivateStyle;                    //@synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(void)loadView;
-(void)setBackdropViewPrivateStyle:(long long)arg1 ;
-(long long)backdropViewPrivateStyle;
@end

