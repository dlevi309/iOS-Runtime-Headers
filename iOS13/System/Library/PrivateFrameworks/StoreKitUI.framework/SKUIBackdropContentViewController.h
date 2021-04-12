/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(void)setBackdropViewPrivateStyle:(long long)arg1 ;
-(long long)backdropViewPrivateStyle;
@end

