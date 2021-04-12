/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUSelectableServiceGridViewController.h>
#import <libobjc.A.dylib/HUServiceGridItemManagerDelegate.h>

@protocol HUAccessorySceneListContentViewControllerDelegate, HFServiceLikeItem;
@class HFItem, HUAccessorySceneListContentItemManager, NSSet, NSString;

@interface HUAccessorySceneListContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {

	BOOL _includeTopMargin;
	BOOL _persistAddedSuggestions;
	id<HUAccessorySceneListContentViewControllerDelegate> _delegate;
	unsigned long long _contentSource;
	unsigned long long _selectionType;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;

}

@property (nonatomic,readonly) HUAccessorySceneListContentItemManager * itemManager; 
@property (nonatomic,readonly) unsigned long long contentSource;                                                 //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) unsigned long long selectionType;                                                 //@synthesize selectionType=_selectionType - In the implementation block
@property (nonatomic,copy,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;                                  //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (assign,nonatomic,__weak) id<HUAccessorySceneListContentViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
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
-(id<HUAccessorySceneListContentViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUAccessorySceneListContentViewControllerDelegate>)arg1 ;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(BOOL)persistAddedSuggestions;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(unsigned long long)selectionType;
-(unsigned long long)contentSource;
-(void)setPersistAddedSuggestions:(BOOL)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(void)didChangeSelection;
-(BOOL)canSelectItem:(id)arg1 indexPath:(id)arg2 ;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(NSSet *)selectedActionSetBuilders;
-(BOOL)includeTopMargin;
-(id)initWithServiceLikeItem:(id)arg1 contentSource:(unsigned long long)arg2 selectionType:(unsigned long long)arg3 ;
-(id)commitChangesToSelectedActionBuilders;
-(void)setIncludeTopMargin:(BOOL)arg1 ;
@end

