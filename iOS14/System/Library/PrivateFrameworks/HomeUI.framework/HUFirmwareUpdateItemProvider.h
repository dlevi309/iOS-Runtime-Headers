/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, HUInstructionsItem, NSSet, HFItemProvider;

@interface HUFirmwareUpdateItemProvider : HFItemProvider {

	BOOL _hasProvidedInstructionsItem;
	HMHome* _home;
	/*^block*/id _filter;
	unsigned long long _style;
	HUInstructionsItem* _instructionsItem;
	NSSet* _linkedApplicationItems;
	HFItemProvider* _linkedApplicationItemProvider;

}

@property (nonatomic,retain) HFItemProvider * linkedApplicationItemProvider;              //@synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider - In the implementation block
@property (nonatomic,retain) NSSet * linkedApplicationItems;                              //@synthesize linkedApplicationItems=_linkedApplicationItems - In the implementation block
@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                       //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedInstructionsItem;                            //@synthesize hasProvidedInstructionsItem=_hasProvidedInstructionsItem - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                             //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id filter;                                                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                  //@synthesize style=_style - In the implementation block
+(BOOL)prefersNonBlockingReloads;
+(/*^block*/id)itemComparator;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)init;
-(id)items;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(HMHome *)home;
-(HUInstructionsItem *)instructionsItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(NSSet *)linkedApplicationItems;
-(void)setLinkedApplicationItems:(NSSet *)arg1 ;
-(id)initWithHome:(id)arg1 style:(unsigned long long)arg2 ;
-(void)setLinkedApplicationItemProvider:(HFItemProvider *)arg1 ;
-(HFItemProvider *)linkedApplicationItemProvider;
-(/*^block*/id)_effectiveFilter;
-(id)_localizedDescriptionForAppName:(id)arg1 accessoriesWithFirmwareUpdates:(id)arg2 visibleAccessoryTileDisplayNames:(id)arg3 ;
-(id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2 ;
-(BOOL)hasProvidedInstructionsItem;
-(void)setHasProvidedInstructionsItem:(BOOL)arg1 ;
@end

