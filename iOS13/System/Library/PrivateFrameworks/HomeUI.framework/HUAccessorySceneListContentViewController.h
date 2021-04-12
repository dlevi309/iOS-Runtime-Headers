/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUSelectableServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@protocol HFServiceLikeItem;
@class HFItem, HUAccessorySceneListContentItemManager, NSSet, NSString;

@interface HUAccessorySceneListContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {

	BOOL _includeTopMargin;
	BOOL _persistAddedSuggestions;
	unsigned long long _contentSource;
	unsigned long long _selectionType;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;

}

@property (nonatomic,readonly) HUAccessorySceneListContentItemManager * itemManager; 
@property (nonatomic,readonly) unsigned long long contentSource;                                                 //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) unsigned long long selectionType;                                                 //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;                                  //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUAccessorySceneListContentViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL includeTopMargin;                                                              //@synthesize includeTopMargin=_includeTopMargin - In the implementation block
@property (assign,nonatomic) BOOL persistAddedSuggestions;                                                       //@synthesize persistAddedSuggestions=_persistAddedSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * selectedActionSetBuilders; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(unsigned long long)selectionType;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(unsigned long long)contentSource;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(BOOL)persistAddedSuggestions;
-(void)setPersistAddedSuggestions:(BOOL)arg1 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(void)didChangeSelection;
-(NSSet *)selectedActionSetBuilders;
-(BOOL)includeTopMargin;
-(id)initWithServiceLikeItem:(id)arg1 contentSource:(unsigned long long)arg2 selectionType:(unsigned long long)arg3 ;
-(id)commitChangesToSelectedActionBuilders;
-(void)setIncludeTopMargin:(BOOL)arg1 ;
@end

