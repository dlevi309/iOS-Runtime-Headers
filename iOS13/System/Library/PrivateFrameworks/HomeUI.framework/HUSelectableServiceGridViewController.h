/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@class HUServiceGridItemManager, HFMutableSetDiff, HFSetDiff, NSString;

@interface HUSelectableServiceGridViewController : HUServiceGridViewController <HUServiceGridItemManagerDelegate> {

	BOOL _allowsEmptySelection;
	BOOL _allowsMultipleSelection;
	HUServiceGridItemManager* _serviceGridItemManager;
	HFMutableSetDiff* _mutableSelectedItems;

}

@property (assign,nonatomic,__weak) HUServiceGridItemManager * serviceGridItemManager;              //@synthesize serviceGridItemManager=_serviceGridItemManager - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * mutableSelectedItems;                               //@synthesize mutableSelectedItems=_mutableSelectedItems - In the implementation block
@property (nonatomic,retain) HFSetDiff * selectedItems; 
@property (assign,nonatomic) BOOL allowsEmptySelection;                                             //@synthesize allowsEmptySelection=_allowsEmptySelection - In the implementation block
@property (assign,nonatomic) BOOL allowsMultipleSelection;                                          //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)defaultItemProviderCreatorWithOptions:(unsigned long long)arg1 ;
+(/*^block*/id)transformationBlockWithOptions:(unsigned long long)arg1 ;
+(id)itemServiceTypesToHide;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)allowsMultipleSelection;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setAllowsMultipleSelection:(BOOL)arg1 ;
-(BOOL)allowsEmptySelection;
-(HFSetDiff *)selectedItems;
-(void)setSelectedItems:(HFSetDiff *)arg1 ;
-(void)setAllowsEmptySelection:(BOOL)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(void)didSelectItem:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2 ;
-(id)initWithServiceGridItemManager:(id)arg1 ;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(void)didChangeSelection;
-(void)didDeselectItem:(id)arg1 ;
-(void)addItemToSelection:(id)arg1 ;
-(void)deleteItemFromSelection:(id)arg1 ;
-(BOOL)_wantsToggleButtonForSection:(unsigned long long)arg1 ;
-(void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2 ;
-(HUServiceGridItemManager *)serviceGridItemManager;
-(void)setServiceGridItemManager:(HUServiceGridItemManager *)arg1 ;
-(HFMutableSetDiff *)mutableSelectedItems;
-(void)_updateToggleStateForSection:(long long)arg1 headerView:(id)arg2 ;
-(void)_setSelected:(BOOL)arg1 forItemsInSection:(long long)arg2 ;
-(void)_deleteItemFromSelection:(id)arg1 ;
-(void)_addItemToSelection:(id)arg1 ;
-(void)_addAllServicesInSectionFromButton:(id)arg1 ;
-(void)_removeAllServicesInSectionFromButton:(id)arg1 ;
-(void)setMutableSelectedItems:(HFMutableSetDiff *)arg1 ;
@end

