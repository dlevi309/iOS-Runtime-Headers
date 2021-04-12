/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>
#import <libobjc.A.dylib/HFActionBuilderFactory.h>
#import <libobjc.A.dylib/HFServiceLikeBuilderCreating.h>
#import <libobjc.A.dylib/HFNamingComponentCreating.h>

@protocol HFCharacteristicValueSource;
@class HMService, NSString, HMHome, NSSet;

@interface HFServiceItem : HFItem <HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFNamingComponentCreating> {

	id<HFCharacteristicValueSource> _valueSource;
	HMService* _service;

}

@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) HMService * service;                                      //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
+(id)supportedServiceTypes;
+(id)serviceItemForService:(id)arg1 valueSource:(id)arg2 ;
+(Class)itemClassForService:(id)arg1 ;
+(id)_serviceTypeToServiceItemClassMap;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(HMService *)service;
-(NSSet *)services;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)controlItemValueSourceForPrimaryService;
-(id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2 ;
-(id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2 ;
-(id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2 ;
-(id)createControlItems;
-(id)servicesToReadForCharacteristicType:(id)arg1 ;
-(id)controlItemValueSourceForServices:(id)arg1 ;
-(BOOL)containsActions;
-(id)currentStateActionBuildersForHome:(id)arg1 ;
-(BOOL)actionsMayRequireDeviceUnlock;
-(id)initWithValueSource:(id)arg1 service:(id)arg2 ;
-(id)_descriptionBuilder;
-(id)_allRepresentedServices;
-(id)_actionableCharacteristics;
-(id)characteristicsToReadForCharacteristicTypes:(id)arg1 controlItems:(id)arg2 ;
-(id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2 ;
-(id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2 ;
@end

