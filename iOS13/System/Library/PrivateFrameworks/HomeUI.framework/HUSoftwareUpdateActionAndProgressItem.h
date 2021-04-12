/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMHome *)home;
-(NSSet *)accessories;
-(id)initWithHome:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessories:(id)arg1 ;
-(id)_filteredAccessories;
@end

