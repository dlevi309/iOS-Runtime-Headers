/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemCollectionViewController.h>
#import <libobjc.A.dylib/HUQuickControlCollectionViewDelegateLayout.h>
#import <libobjc.A.dylib/HUQuickControlItemUpdating.h>
#import <libobjc.A.dylib/HFAccessoryObserver.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveContentContaining.h>
#import <libobjc.A.dylib/HUQuickControlContentCharacteristicWriting.h>
#import <libobjc.A.dylib/HUQuickControlTouchContinuing.h>

@protocol HUQuickControlContentCharacteristicWritingDelegate, HUQuickControlContentHosting, HULayoutAnchorProviding;
@class HUQuickControlCollectionViewControllerLayoutOptions, NSMapTable, HUQuickControlContentCharacteristicWritingUpdateAdapter, HUQuickControlCollectionViewLayout, HUQuickControlCollectionItemManager, NSString, NSSet;

@interface HUQuickControlCollectionViewController : HUItemCollectionViewController <HUQuickControlCollectionViewDelegateLayout, HUQuickControlItemUpdating, HFAccessoryObserver, HUQuickControlInteractiveContentContaining, HUQuickControlContentCharacteristicWriting, HUQuickControlTouchContinuing> {

	BOOL _userInteractionEnabled;
	BOOL _disableItemUpdatesForOverrideCharacteristicValueChanges;
	id<HUQuickControlContentCharacteristicWritingDelegate> _characteristicWritingDelegate;
	id<HUQuickControlContentHosting> _quickControlHost;
	id<HULayoutAnchorProviding> _preferredFrameLayoutGuide;
	HUQuickControlCollectionViewControllerLayoutOptions* _layoutOptions;
	NSMapTable* _viewControllersKeyedByItem;
	HUQuickControlContentCharacteristicWritingUpdateAdapter* _characteristicWritingAdapter;

}

@property (nonatomic,readonly) NSMapTable * viewControllersKeyedByItem;                                                                //@synthesize viewControllersKeyedByItem=_viewControllersKeyedByItem - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewLayout * collectionViewLayout; 
@property (nonatomic,readonly) HUQuickControlCollectionItemManager * itemManager; 
@property (nonatomic,readonly) HUQuickControlContentCharacteristicWritingUpdateAdapter * characteristicWritingAdapter;                 //@synthesize characteristicWritingAdapter=_characteristicWritingAdapter - In the implementation block
@property (nonatomic,retain) id<HULayoutAnchorProviding> preferredFrameLayoutGuide;                                                    //@synthesize preferredFrameLayoutGuide=_preferredFrameLayoutGuide - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewControllerLayoutOptions * layoutOptions;                                      //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) BOOL disableItemUpdatesForOverrideCharacteristicValueChanges;                                             //@synthesize disableItemUpdatesForOverrideCharacteristicValueChanges=_disableItemUpdatesForOverrideCharacteristicValueChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HUQuickControlContentHosting> quickControlHost;                                                 //@synthesize quickControlHost=_quickControlHost - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                                              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlContentCharacteristicWritingDelegate> characteristicWritingDelegate;              //@synthesize characteristicWritingDelegate=_characteristicWritingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * affectedCharacteristics; 
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id<HULayoutAnchorProviding>)preferredFrameLayoutGuide;
-(void)setPreferredFrameLayoutGuide:(id<HULayoutAnchorProviding>)arg1 ;
-(void)quickControlItemHost:(id)arg1 didUpdateVisibility:(BOOL)arg2 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)overrideValueForCharacteristic:(id)arg1 ;
-(NSSet *)affectedCharacteristics;
-(void)setCharacteristicWritingDelegate:(id<HUQuickControlContentCharacteristicWritingDelegate>)arg1 ;
-(void)setQuickControlHost:(id<HUQuickControlContentHosting>)arg1 ;
-(id<HUQuickControlContentHosting>)quickControlHost;
-(id<HUQuickControlContentCharacteristicWritingDelegate>)characteristicWritingDelegate;
-(id)viewForTouchContinuation;
-(id)_allViewControllers;
-(void)viewLayoutMarginsDidChange;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(HUQuickControlCollectionViewControllerLayoutOptions *)layoutOptions;
-(void)accessoryDidUpdateControllable:(id)arg1 ;
-(void)loadView;
-(void)setLayoutOptions:(HUQuickControlCollectionViewControllerLayoutOptions *)arg1 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithItemManager:(id)arg1 ;
-(void)_reconfigureLayoutOptions;
-(HUQuickControlContentCharacteristicWritingUpdateAdapter *)characteristicWritingAdapter;
-(id)_viewControllerForItem:(id)arg1 ;
-(NSMapTable *)viewControllersKeyedByItem;
-(id)_controlItemsForItem:(id)arg1 ;
-(unsigned long long)_titlePositionForItem:(id)arg1 ;
-(id)_createCellContainerForViewController:(id)arg1 forItem:(id)arg2 ;
-(void)_propagateInteractiveContentStateForChildViewControllers:(id)arg1 ;
-(id)_allContentViewControllers;
-(id)intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2 ;
-(double)heightForSupplementaryViewAtIndexPath:(id)arg1 ;
-(void)setDisableItemUpdatesForOverrideCharacteristicValueChanges:(BOOL)arg1 ;
-(BOOL)disableItemUpdatesForOverrideCharacteristicValueChanges;
@end

