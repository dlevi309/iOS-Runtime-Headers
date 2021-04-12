/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMHome, NSSet;

@interface HUSoftwareUpdateActionAndProgressItem : HFItem {

	HMHome* _home;
	NSSet* _accessories;

}

@property (nonatomic,readonly) HMHome * home;                    //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSSet * accessories;              //@synthesize accessories=_accessories - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(NSSet *)accessories;
-(id)initWithAccessory:(id)arg1 ;
-(HMHome *)home;
-(id)initWithAccessories:(id)arg1 ;
-(id)_filteredAccessories;
@end

