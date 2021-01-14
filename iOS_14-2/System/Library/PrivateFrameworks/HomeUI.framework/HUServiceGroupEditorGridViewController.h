/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@protocol HUServiceGroupEditorGridViewControllerDelegate;
@class HFServiceGroupBuilder, HUServiceGroupEditorGridItemManager;

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController {

	id<HUServiceGroupEditorGridViewControllerDelegate> _delegate;
	HFServiceGroupBuilder* _serviceGroupBuilder;

}

@property (nonatomic,retain) HUServiceGroupEditorGridItemManager * itemManager; 
@property (nonatomic,readonly) HFServiceGroupBuilder * serviceGroupBuilder;                                   //@synthesize serviceGroupBuilder=_serviceGroupBuilder - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceGroupEditorGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HUServiceGroupEditorGridViewControllerDelegate>)delegate;
-(void)didSelectItem:(id)arg1 ;
-(void)setDelegate:(id<HUServiceGroupEditorGridViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(HFServiceGroupBuilder *)serviceGroupBuilder;
-(id)initWithServiceGroupBuilder:(id)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(id)_serviceVendorItemForItem:(id)arg1 ;
-(void)didDeselectItem:(id)arg1 ;
@end

