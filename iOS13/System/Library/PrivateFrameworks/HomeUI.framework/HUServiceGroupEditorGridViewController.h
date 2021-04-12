/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFServiceGroupBuilder, HUServiceGroupEditorGridItemManager;

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController {

	HFServiceGroupBuilder* _serviceGroupBuilder;

}

@property (nonatomic,retain) HUServiceGroupEditorGridItemManager * itemManager; 
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;                                   //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceGroupEditorGridViewControllerDelegate> delegate; 
-(void)viewDidLoad;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)didSelectItem:(id)arg1 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(id)initWithServiceGroupBuilder:(id)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(id)_serviceVendorItemForItem:(id)arg1 ;
-(void)didDeselectItem:(id)arg1 ;
@end

