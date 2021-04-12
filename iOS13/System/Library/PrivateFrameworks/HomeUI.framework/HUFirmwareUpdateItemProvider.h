/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, HUInstructionsItem, NSSet, HULinkedApplicationItemProvider, NSString;

@interface HUFirmwareUpdateItemProvider : HFItemProvider {

	BOOL _hasProvidedInstructionsItem;
	BOOL _instructionsHidden;
	HMHome* _home;
	/*^block*/id _filter;
	unsigned long long _style;
	HUInstructionsItem* _instructionsItem;
	NSSet* _linkedApplicationItems;
	HULinkedApplicationItemProvider* _linkedApplicationItemProvider;
	NSString* _instructionsTitle;
	NSString* _instructionsDescription;

}

@property (nonatomic,retain) HULinkedApplicationItemProvider * linkedApplicationItemProvider;              //@synthesize linkedApplicationItemProvider=_linkedApplicationItemProvider - In the implementation block
@property (nonatomic,retain) NSSet * linkedApplicationItems;                                               //@synthesize linkedApplicationItems=_linkedApplicationItems - In the implementation block
@property (nonatomic,retain) HUInstructionsItem * instructionsItem;                                        //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedInstructionsItem;                                             //@synthesize hasProvidedInstructionsItem=_hasProvidedInstructionsItem - In the implementation block
@property (nonatomic,retain) NSString * instructionsTitle;                                                 //@synthesize instructionsTitle=_instructionsTitle - In the implementation block
@property (nonatomic,retain) NSString * instructionsDescription;                                           //@synthesize instructionsDescription=_instructionsDescription - In the implementation block
@property (assign,nonatomic) BOOL instructionsHidden;                                                      //@synthesize instructionsHidden=_instructionsHidden - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                              //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id filter;                                                                      //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                   //@synthesize style=_style - In the implementation block
+(BOOL)prefersNonBlockingReloads;
+(/*^block*/id)itemComparator;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)invalidationReasons;
-(HUInstructionsItem *)instructionsItem;
-(void)setInstructionsItem:(HUInstructionsItem *)arg1 ;
-(NSSet *)linkedApplicationItems;
-(void)setLinkedApplicationItems:(NSSet *)arg1 ;
-(void)setLinkedApplicationItemProvider:(HULinkedApplicationItemProvider *)arg1 ;
-(HULinkedApplicationItemProvider *)linkedApplicationItemProvider;
-(id)initWithHome:(id)arg1 style:(unsigned long long)arg2 ;
-(/*^block*/id)_effectiveFilter;
-(id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(long long)arg2 ;
-(BOOL)hasProvidedInstructionsItem;
-(void)setHasProvidedInstructionsItem:(BOOL)arg1 ;
-(NSString *)instructionsTitle;
-(void)setInstructionsTitle:(NSString *)arg1 ;
-(NSString *)instructionsDescription;
-(void)setInstructionsDescription:(NSString *)arg1 ;
-(BOOL)instructionsHidden;
-(void)setInstructionsHidden:(BOOL)arg1 ;
@end

