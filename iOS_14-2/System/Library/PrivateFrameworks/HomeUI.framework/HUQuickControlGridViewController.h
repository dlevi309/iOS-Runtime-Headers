/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController;

@interface HUQuickControlGridViewController : HUQuickControlViewController {

	HUQuickControlCollectionViewController* _collectionViewController;

}

@property (nonatomic,readonly) HUQuickControlCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
+(id)controlItemPredicate;
-(id)hu_preloadContent;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(HUQuickControlCollectionViewController *)collectionViewController;
-(void)_subclass_configureQuickControlViewController:(id)arg1 ;
@end

