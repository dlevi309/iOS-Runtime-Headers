/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemGroupItem.h>
#import <libobjc.A.dylib/HFHomeKitItemProtocol.h>

@protocol HFCharacteristicValueSource;
@class HMAccessoryNetworkProtectionGroup, NSSet, NSString;

@interface HFNetworkConfigurationGroupItem : HFItemGroupItem <HFHomeKitItemProtocol> {

	HMAccessoryNetworkProtectionGroup* _group;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (nonatomic,readonly) HMAccessoryNetworkProtectionGroup * group;                //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSSet * profiles; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMAccessoryNetworkProtectionGroup *)group;
-(NSSet *)profiles;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithGroup:(id)arg1 valueSource:(id)arg2 ;
@end

