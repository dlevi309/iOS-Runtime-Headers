/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController, HFChildServiceControlItem;

@interface HUQuickControlChildServiceGridViewController : HUQuickControlViewController {

	HUQuickControlCollectionViewController* _collectionViewController;

}

@property (nonatomic,readonly) HUQuickControlCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,readonly) HFChildServiceControlItem * controlItem; 
+(id)controlItemPredicate;
-(id)hu_preloadContent;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(HUQuickControlCollectionViewController *)collectionViewController;
-(HFChildServiceControlItem *)controlItem;
-(id)initWithChildServiceControlItem:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(void)_subclass_configureQuickControlViewController:(id)arg1 ;
@end

