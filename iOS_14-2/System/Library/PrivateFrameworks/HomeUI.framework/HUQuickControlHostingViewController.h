/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) UIView*<HUQuickControlInteractiveView> view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HUQuickControlViewProfile *)profile;
-(void)viewDidLoad;
-(void)loadView;
-(UIViewController *)contraption;
-(id)initWithViewController:(id)arg1 profile:(id)arg2 ;
@end

