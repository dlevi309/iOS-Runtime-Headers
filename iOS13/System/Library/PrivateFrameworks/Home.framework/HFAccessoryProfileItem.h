/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFAccessoryProfileVendor.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>
#import <libobjc.A.dylib/HFItemBuilderItem.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>

@protocol HFCharacteristicValueSource;
@class HMAccessoryProfile, HMAccessory, NSString, NSSet, HMHome;

@interface HFAccessoryProfileItem : HFItem <HFAccessoryProfileVendor, HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem> {

	id<HFCharacteristicValueSource> _valueSource;
	HMAccessoryProfile* _profile;

}

@property (nonatomic,readonly) HMAccessory * accessory; 
@property (nonatomic,readonly) HMAccessoryProfile * profile;                             //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(HMAccessoryProfile *)profile;
-(NSSet *)services;
-(HMAccessory *)accessory;
-(id)accessories;
-(id)profiles;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithProfile:(id)arg1 valueSource:(id)arg2 ;
@end

