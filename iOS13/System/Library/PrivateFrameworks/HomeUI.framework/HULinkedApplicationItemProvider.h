/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HULinkedApplicationItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _linkedApplicationItems;

}

@property (nonatomic,retain) NSMutableSet * linkedApplicationItems;              //@synthesize linkedApplicationItems=_linkedApplicationItems - In the implementation block
@property (nonatomic,copy) id filter;                                            //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                    //@synthesize home=_home - In the implementation block
+(BOOL)prefersNonBlockingReloads;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(NSMutableSet *)linkedApplicationItems;
-(id)_generateItemsFromSoftwareLookupResult:(id)arg1 ;
-(void)setLinkedApplicationItems:(NSMutableSet *)arg1 ;
@end

