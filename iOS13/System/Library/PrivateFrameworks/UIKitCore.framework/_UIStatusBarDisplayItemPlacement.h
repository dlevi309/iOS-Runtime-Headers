/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(_UIStatusBarIdentifier *)identifier;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEnabled;
-(id)requiringAnyPlacements:(id)arg1 ;
-(id)excludingPlacements:(id)arg1 ;
-(id)requiringAllPlacements:(id)arg1 ;
-(id)excludingAllPlacementsInRegions:(id)arg1 exceptPlacements:(id)arg2 ;
-(NSHashTable *)excludedPlacements;
-(NSHashTable *)allRequiredPlacements;
-(NSHashTable *)anyRequiredPlacements;
-(id)disabledPlacement;
-(id)excludingAllPlacementsInRegions:(id)arg1 ;
-(id)withItemInfo:(id)arg1 ;
-(NSSet *)excludedRegionIdentifiers;
-(NSHashTable *)includedPlacements;
-(NSDictionary *)itemInfo;
@end

