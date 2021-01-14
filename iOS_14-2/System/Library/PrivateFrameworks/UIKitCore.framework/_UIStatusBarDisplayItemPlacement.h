/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarIdentifier, NSHashTable, NSSet, NSDictionary;

@interface _UIStatusBarDisplayItemPlacement : NSObject <_UIStatusBarPrioritized> {

	BOOL _enabled;
	long long _priority;
	_UIStatusBarIdentifier* _identifier;
	NSHashTable* _excludedPlacements;
	NSSet* _excludedRegionIdentifiers;
	NSHashTable* _includedPlacements;
	NSHashTable* _allRequiredPlacements;
	NSHashTable* _anyRequiredPlacements;
	NSDictionary* _itemInfo;

}

@property (assign,nonatomic) long long priority;                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) _UIStatusBarIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * excludedPlacements;                 //@synthesize excludedPlacements=_excludedPlacements - In the implementation block
@property (nonatomic,copy,readonly) NSSet * excludedRegionIdentifiers;                //@synthesize excludedRegionIdentifiers=_excludedRegionIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * includedPlacements;                 //@synthesize includedPlacements=_includedPlacements - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * allRequiredPlacements;              //@synthesize allRequiredPlacements=_allRequiredPlacements - In the implementation block
@property (nonatomic,copy,readonly) NSHashTable * anyRequiredPlacements;              //@synthesize anyRequiredPlacements=_anyRequiredPlacements - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemInfo;                          //@synthesize itemInfo=_itemInfo - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
+(id)placementWithIdentifier:(id)arg1 priority:(long long)arg2 ;
+(id)spacerPlacementWithSize:(CGSize)arg1 priority:(long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSHashTable *)allRequiredPlacements;
-(id)excludingAllPlacementsInRegions:(id)arg1 exceptPlacements:(id)arg2 ;
-(NSHashTable *)anyRequiredPlacements;
-(id)requiringAnyPlacements:(id)arg1 ;
-(NSDictionary *)itemInfo;
-(id)description;
-(id)disabledPlacement;
-(unsigned long long)hash;
-(id)excludingPlacements:(id)arg1 ;
-(NSSet *)excludedRegionIdentifiers;
-(BOOL)isEnabled;
-(_UIStatusBarIdentifier *)identifier;
-(id)excludingAllPlacementsInRegions:(id)arg1 ;
-(id)requiringAllPlacements:(id)arg1 ;
-(id)withItemInfo:(id)arg1 ;
-(NSHashTable *)excludedPlacements;
-(long long)priority;
-(NSHashTable *)includedPlacements;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

