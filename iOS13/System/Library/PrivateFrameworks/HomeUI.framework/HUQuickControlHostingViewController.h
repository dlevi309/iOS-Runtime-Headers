/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveViewController.h>

@class HUQuickControlViewProfile, UIViewController, NSString;

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController> {

	HUQuickControlViewProfile* _profile;
	UIViewController* _contraption;

}

@property (nonatomic,readonly) HUQuickControlViewProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) UIViewController * contraption;                           //@synthesize contraption=_contraption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<HUQuickControlInteractiveView> view; 
-(HUQuickControlViewProfile *)profile;
-(void)loadView;
-(void)viewDidLoad;
-(UIViewController *)contraption;
-(id)initWithViewController:(id)arg1 profile:(id)arg2 ;
@end

