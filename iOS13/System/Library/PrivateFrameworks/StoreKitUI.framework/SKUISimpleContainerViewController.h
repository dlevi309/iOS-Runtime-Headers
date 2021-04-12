/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIViewController;

@interface SKUISimpleContainerViewController : UIViewController {

	UIViewController* _contentViewController;

}

@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)loadView;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UIViewController *)contentViewController;
@end

