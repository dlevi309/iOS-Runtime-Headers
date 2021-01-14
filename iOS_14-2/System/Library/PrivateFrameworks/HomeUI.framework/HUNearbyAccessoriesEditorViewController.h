/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUInstructionsTableViewController.h>

@class HMAccessory, HFAccessoryProfileItem, HUNearbyAccessoriesEditorServiceGridViewController;

@interface HUNearbyAccessoriesEditorViewController : HUInstructionsTableViewController {

	HMAccessory* _primaryAccessory;
	HFAccessoryProfileItem* _accessoryProfileItem;
	HUNearbyAccessoriesEditorServiceGridViewController* _servicesViewController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) HMAccessory * primaryAccessory;                                                           //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,__weak,readonly) HFAccessoryProfileItem * accessoryProfileItem;                                   //@synthesize accessoryProfileItem=_accessoryProfileItem - In the implementation block
@property (nonatomic,retain) HUNearbyAccessoriesEditorServiceGridViewController * servicesViewController;              //@synthesize servicesViewController=_servicesViewController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)hu_preloadContent;
-(id)completionHandler;
-(void)viewDidLoad;
-(void)_displayProgressIndicatorWhileLoading;
-(void)dismissEditor:(id)arg1 ;
-(void)cancelEditing:(id)arg1 ;
-(HUNearbyAccessoriesEditorServiceGridViewController *)servicesViewController;
-(HMAccessory *)primaryAccessory;
-(HFAccessoryProfileItem *)accessoryProfileItem;
-(id)initWithAccessoryProfileSourceItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPrimaryAccessory:(HMAccessory *)arg1 ;
-(void)setServicesViewController:(HUNearbyAccessoriesEditorServiceGridViewController *)arg1 ;
@end

