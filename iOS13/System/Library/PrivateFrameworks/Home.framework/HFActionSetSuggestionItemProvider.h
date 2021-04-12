/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFServiceLikeItem;
@class HMHome, HFItem, NSSet;

@interface HFActionSetSuggestionItemProvider : HFItemProvider {

	BOOL _includeExistingActionSets;
	BOOL _includeCustomActionSets;
	BOOL _persistAddedSuggestions;
	BOOL _hasProvidedStaticSuggestionItems;
	HMHome* _home;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	NSSet* _staticSuggestionItems;
	NSSet* _customSuggestionItems;

}

@property (nonatomic,retain) NSSet * staticSuggestionItems;                         //@synthesize staticSuggestionItems=_staticSuggestionItems - In the implementation block
@property (nonatomic,retain) NSSet * customSuggestionItems;                         //@synthesize customSuggestionItems=_customSuggestionItems - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedStaticSuggestionItems;                 //@synthesize hasProvidedStaticSuggestionItems=_hasProvidedStaticSuggestionItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (assign,nonatomic) BOOL includeExistingActionSets;                        //@synthesize includeExistingActionSets=_includeExistingActionSets - In the implementation block
@property (assign,nonatomic) BOOL includeCustomActionSets;                          //@synthesize includeCustomActionSets=_includeCustomActionSets - In the implementation block
@property (assign,nonatomic) BOOL persistAddedSuggestions;                          //@synthesize persistAddedSuggestions=_persistAddedSuggestions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(void)setServiceLikeItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(BOOL)includeExistingActionSets;
-(BOOL)persistAddedSuggestions;
-(void)setIncludeExistingActionSets:(BOOL)arg1 ;
-(void)setPersistAddedSuggestions:(BOOL)arg1 ;
-(id)_builtInActionSetOfType:(id)arg1 ;
-(void)setStaticSuggestionItems:(NSSet *)arg1 ;
-(NSSet *)staticSuggestionItems;
-(BOOL)hasProvidedStaticSuggestionItems;
-(void)setHasProvidedStaticSuggestionItems:(BOOL)arg1 ;
-(BOOL)includeCustomActionSets;
-(void)setCustomSuggestionItems:(NSSet *)arg1 ;
-(NSSet *)customSuggestionItems;
-(void)setIncludeCustomActionSets:(BOOL)arg1 ;
@end

