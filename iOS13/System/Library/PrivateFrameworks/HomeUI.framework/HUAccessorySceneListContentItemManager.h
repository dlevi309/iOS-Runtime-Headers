/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUServiceGridItemManager.h>

@protocol HFServiceLikeItem;
@class HFItem, NSMutableDictionary;

@interface HUAccessorySceneListContentItemManager : HUServiceGridItemManager {

	BOOL _persistAddedSuggestions;
	unsigned long long _contentSource;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	NSMutableDictionary* _committedActionBuildersByActionSetID;

}

@property (nonatomic,readonly) NSMutableDictionary * committedActionBuildersByActionSetID;              //@synthesize committedActionBuildersByActionSetID=_committedActionBuildersByActionSetID - In the implementation block
@property (nonatomic,readonly) unsigned long long contentSource;                                        //@synthesize contentSource=_contentSource - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> serviceLikeItem;                              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (assign,nonatomic) BOOL persistAddedSuggestions;                                              //@synthesize persistAddedSuggestions=_persistAddedSuggestions - In the implementation block
+(id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 ;
+(id)createItemProviderForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3 persistAddedSuggestions:(BOOL)arg4 ;
-(unsigned long long)contentSource;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(BOOL)persistAddedSuggestions;
-(void)setPersistAddedSuggestions:(BOOL)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_transformedUpdateOutcomeForItem:(id)arg1 proposedOutcome:(id)arg2 ;
-(id)suggestionItemProvider;
-(id)initWithDelegate:(id)arg1 contentSource:(unsigned long long)arg2 serviceLikeItem:(id)arg3 ;
-(id)commitSelectionChangesWithSelectedItems:(id)arg1 ;
-(id)actionSetBuilderForItem:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(BOOL)arg3 shouldShowSectionHeaders:(BOOL)arg4 itemProvidersCreator:(/*^block*/id)arg5 ;
-(NSMutableDictionary *)committedActionBuildersByActionSetID;
@end

