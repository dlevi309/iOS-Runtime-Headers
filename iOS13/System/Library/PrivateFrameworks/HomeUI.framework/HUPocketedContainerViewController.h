/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class UIViewController, UIVisualEffectView, NSString;

@interface HUPocketedContainerViewController : UIViewController <HUPreloadableViewController> {

	UIViewController* _contentViewController;
	UIViewController* _pocketViewController;
	UIVisualEffectView* _pocketBackgroundView;

}

@property (nonatomic,retain) UIVisualEffectView * pocketBackgroundView;               //@synthesize pocketBackgroundView=_pocketBackgroundView - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) UIViewController * pocketViewController;                 //@synthesize pocketViewController=_pocketViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(id)hu_preloadContent;
-(id)initWithContentViewController:(id)arg1 pocketViewController:(id)arg2 ;
-(void)_installContentViewController;
-(id)_installPocket;
-(id)_tearDownPocket;
-(UIViewController *)pocketViewController;
-(void)setPocketBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)pocketBackgroundView;
-(void)setPocketViewController:(UIViewController *)arg1 ;
@end

