/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUSelectableServiceGridViewController.h>

@protocol HUSceneServicePickerViewControllerDelegate;
@class HFActionSetBuilder;

@interface HUSceneServicePickerViewController : HUSelectableServiceGridViewController {

	id<HUSceneServicePickerViewControllerDelegate> _servicePickerDelegate;
	HFActionSetBuilder* _actionSetBuilder;

}

@property (assign,nonatomic,__weak) id<HUSceneServicePickerViewControllerDelegate> servicePickerDelegate;              //@synthesize servicePickerDelegate=_servicePickerDelegate - In the implementation block
@property (nonatomic,readonly) HFActionSetBuilder * actionSetBuilder;                                                  //@synthesize actionSetBuilder=_actionSetBuilder - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(HFActionSetBuilder *)actionSetBuilder;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(id)initWithActionSetBuilder:(id)arg1 servicePickerDelegate:(id)arg2 ;
-(id<HUSceneServicePickerViewControllerDelegate>)servicePickerDelegate;
-(id)_updateActionSetBuilder;
-(BOOL)_canSelectMediaAccessoryItem:(id)arg1 ;
-(void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setServicePickerDelegate:(id<HUSceneServicePickerViewControllerDelegate>)arg1 ;
@end

