/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HFActionSetValueSourceDelegate.h>
#import <libobjc.A.dylib/HUServiceActionControlsViewControllerDelegate.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>
#import <libobjc.A.dylib/HUContainedServiceGridViewControllerDelegate.h>

@class HFActionSetBuilder, NSSet, HUContainedServicesGridViewController, NSString;

@interface HUSceneActionGridViewController : HUServiceGridViewController <HFActionSetValueSourceDelegate, HUServiceActionControlsViewControllerDelegate, HUServiceGridItemManagerDelegate, HUContainedServiceGridViewControllerDelegate> {

	HFActionSetBuilder* _actionSetBuilder;
	NSSet* _blacklistedServices;
	NSSet* _whitelistedServices;
	HUContainedServicesGridViewController* _presentedServiceGroupDetailsViewController;

}

@property (assign,nonatomic,__weak) HUContainedServicesGridViewController * presentedServiceGroupDetailsViewController;              //@synthesize presentedServiceGroupDetailsViewController=_presentedServiceGroupDetailsViewController - In the implementation block
@property (nonatomic,readonly) HFActionSetBuilder * actionSetBuilder;                                                                //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
@property (nonatomic,copy) NSSet * blacklistedServices;                                                                              //@synthesize blacklistedServices=_blacklistedServices - In the implementation block
@property (nonatomic,copy) NSSet * whitelistedServices;                                                                              //@synthesize whitelistedServices=_whitelistedServices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)initWithActionSetBuilder:(id)arg1 ;
-(HFActionSetBuilder *)actionSetBuilder;
-(void)actionSetValueSource:(id)arg1 didUpdateValuesForActionBuilders:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)hasDetailsActionForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(id)detailsViewControllerForContainedServiceGridViewController:(id)arg1 item:(id)arg2 ;
-(void)_removeActionsInServiceActionItem:(id)arg1 ;
-(void)setWhitelistedServices:(NSSet *)arg1 ;
-(void)setBlacklistedServices:(NSSet *)arg1 ;
-(NSSet *)blacklistedServices;
-(NSSet *)whitelistedServices;
-(HUContainedServicesGridViewController *)presentedServiceGroupDetailsViewController;
-(void)setPresentedServiceGroupDetailsViewController:(HUContainedServicesGridViewController *)arg1 ;
-(void)serviceActionControlsViewController:(id)arg1 removeServiceActionItem:(id)arg2 ;
@end

