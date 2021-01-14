/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableOBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class NSString;

@interface HUAnnounceSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> delegate;
	unsigned long long _step;

}

@property (nonatomic,readonly) unsigned long long step;                                              //@synthesize step=_step - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)step;
-(id)initWithHome:(id)arg1 step:(unsigned long long)arg2 ;
-(void)continuePressed:(id)arg1 ;
@end

