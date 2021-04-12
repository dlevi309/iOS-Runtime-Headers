/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>

@protocol HFCharacteristicValueSource;
@class HFDiscoveredAccessory, NSString, HMHome, NSSet;

@interface HFDiscoveredAccessoryItem : HFItem <HFServiceLikeItem> {

	id<HFCharacteristicValueSource> _valueSource;
	HFDiscoveredAccessory* _discoveredAccessory;

}

@property (nonatomic,readonly) HFDiscoveredAccessory * discoveredAccessory;              //@synthesize discoveredAccessory=_discoveredAccessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(NSSet *)services;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithDiscoveredAccessory:(id)arg1 ;
-(HFDiscoveredAccessory *)discoveredAccessory;
-(id)initWithDiscoveredAccessory:(id)arg1 valueSource:(id)arg2 ;
@end

