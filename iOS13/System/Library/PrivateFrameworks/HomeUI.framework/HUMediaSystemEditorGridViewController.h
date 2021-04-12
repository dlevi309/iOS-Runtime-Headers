/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFMediaSystemBuilder, HUMediaSystemEditorGridItemManager;

@interface HUMediaSystemEditorGridViewController : HUSelectableServiceGridViewController {

	HFMediaSystemBuilder* _mediaSystemBuilder;

}

@property (nonatomic,retain) HUMediaSystemEditorGridItemManager * itemManager; 
@property (nonatomic,readonly) HFMediaSystemBuilder * mediaSystemBuilder;                                    //@synthesize mediaSystemBuilder=_mediaSystemBuilder - In the implementation block
@property (assign,nonatomic,__weak) id<HUMediaSystemEditorGridViewControllerDelegate> delegate; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)didSelectItem:(id)arg1 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(HFMediaSystemBuilder *)mediaSystemBuilder;
-(void)didDeselectItem:(id)arg1 ;
-(id)initWithMediaSystemBuilder:(id)arg1 ;
-(void)_resetBuilder;
-(id)_accessoryVendorItemForItem:(id)arg1 ;
-(void)addItemToSelection:(id)arg1 ;
-(void)_addItemToMediaSystem:(id)arg1 ;
-(BOOL)_wantsToggleButtonForSection:(unsigned long long)arg1 ;
@end

