/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HFActionSetBuilder *)actionSetBuilder;
-(void)_done:(id)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)_cancel:(id)arg1 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(void)_validateDoneButton;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(id)initWithActionSetBuilder:(id)arg1 servicePickerDelegate:(id)arg2 ;
-(id<HUSceneServicePickerViewControllerDelegate>)servicePickerDelegate;
-(id)_updateActionSetBuilder;
-(void)didChangeSelection;
-(BOOL)_canSelectMediaAccessoryItem:(id)arg1 ;
-(void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setServicePickerDelegate:(id<HUSceneServicePickerViewControllerDelegate>)arg1 ;
@end

