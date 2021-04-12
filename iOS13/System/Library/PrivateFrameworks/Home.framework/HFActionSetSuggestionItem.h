/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@protocol HFServiceLikeItem;
@class HMHome, HMActionSet, HFItem, NSString;

@interface HFActionSetSuggestionItem : HFItem <HFHomeKitItemProtocol> {

	BOOL _includeExistingActionSets;
	BOOL _persistAddedSuggestions;
	BOOL _hasEverHadValidSuggestion;
	HMHome* _home;
	HMActionSet* _actionSet;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;

}

@property (assign,nonatomic) BOOL hasEverHadValidSuggestion;                        //@synthesize hasEverHadValidSuggestion=_hasEverHadValidSuggestion - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMActionSet * actionSet;                             //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,copy) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (assign,nonatomic) BOOL includeExistingActionSets;                        //@synthesize includeExistingActionSets=_includeExistingActionSets - In the implementation block
@property (assign,nonatomic) BOOL persistAddedSuggestions;                          //@synthesize persistAddedSuggestions=_persistAddedSuggestions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(HMHome *)home;
-(HMActionSet *)actionSet;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)setServiceLikeItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(BOOL)includeExistingActionSets;
-(BOOL)persistAddedSuggestions;
-(void)setHasEverHadValidSuggestion:(BOOL)arg1 ;
-(BOOL)hasEverHadValidSuggestion;
-(id)initWithHome:(id)arg1 actionSet:(id)arg2 ;
-(void)setIncludeExistingActionSets:(BOOL)arg1 ;
-(void)setPersistAddedSuggestions:(BOOL)arg1 ;
@end

