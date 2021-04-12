/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class HMHome, NSNumber, NSMutableSet;

@interface HUNaturalLightingItemProvider : HFItemProvider {

	HMHome* _home;
	/*^block*/id _lightProfileFilter;
	/*^block*/id _homeKitObjectFilter;
	NSNumber* _defaultSelectedValue;
	NSMutableSet* _naturalLightingItems;

}

@property (nonatomic,retain) NSMutableSet * naturalLightingItems;              //@synthesize naturalLightingItems=_naturalLightingItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id lightProfileFilter;                              //@synthesize lightProfileFilter=_lightProfileFilter - In the implementation block
@property (nonatomic,copy) id homeKitObjectFilter;                             //@synthesize homeKitObjectFilter=_homeKitObjectFilter - In the implementation block
@property (nonatomic,retain) NSNumber * defaultSelectedValue;                  //@synthesize defaultSelectedValue=_defaultSelectedValue - In the implementation block
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(id)invalidationReasons;
-(HMHome *)home;
-(id)homeKitObjectFilter;
-(id)sourceItemForHomeKitObject:(id)arg1 ;
-(NSNumber *)defaultSelectedValue;
-(NSMutableSet *)naturalLightingItems;
-(id)lightProfileFilter;
-(void)setLightProfileFilter:(id)arg1 ;
-(void)setHomeKitObjectFilter:(id)arg1 ;
-(void)setDefaultSelectedValue:(NSNumber *)arg1 ;
-(void)setNaturalLightingItems:(NSMutableSet *)arg1 ;
@end

