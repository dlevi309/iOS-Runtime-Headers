/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController;

@interface HUQuickControlGridViewController : HUQuickControlViewController {

	HUQuickControlCollectionViewController* _collectionViewController;

}

@property (nonatomic,readonly) HUQuickControlCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
+(id)controlItemPredicate;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(HUQuickControlCollectionViewController *)collectionViewController;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(id)hu_preloadContent;
-(void)_subclass_configureQuickControlViewController:(id)arg1 ;
@end

