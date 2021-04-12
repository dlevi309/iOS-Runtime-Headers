/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didSelectItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
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

