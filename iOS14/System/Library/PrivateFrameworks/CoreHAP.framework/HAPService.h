/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMFMerging.h>

@class NSString, NSNumber, HAPAccessory, NSArray, CBService;

@interface HAPService : HMFObject <NSCopying, HMFMerging> {

	NSString* _type;
	NSNumber* _instanceID;
	HAPAccessory* _accessory;
	NSArray* _characteristics;
	NSArray* _linkedServices;
	unsigned long long _serviceProperties;

}

@property (setter=setCBService:,nonatomic,retain) CBService * cbService; 
@property (nonatomic,retain) NSArray * linkedServices;                                //@synthesize linkedServices=_linkedServices - In the implementation block
@property (assign,nonatomic) unsigned long long serviceProperties;                    //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,copy) NSString * type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                                     //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessory * accessory;                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) NSArray * characteristics;                               //@synthesize characteristics=_characteristics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hap2_mergeServices:(id)arg1 discoveredServices:(id)arg2 mergedServices:(id)arg3 ;
-(NSNumber *)instanceID;
-(BOOL)mergeObject:(id)arg1 ;
-(void)setServiceProperties:(unsigned long long)arg1 ;
-(BOOL)isEqualToService:(id)arg1 ;
-(HAPAccessory *)accessory;
-(void)setType:(NSString *)arg1 ;
-(unsigned long long)serviceProperties;
-(NSArray *)linkedServices;
-(NSString *)description;
-(void)setLinkedServices:(NSArray *)arg1 ;
-(void)setAccessory:(HAPAccessory *)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(NSString *)type;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)propertiesDescription;
-(id)characteristicsOfType:(id)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5 ;
-(BOOL)_updateAndValidateCharacteristics;
-(BOOL)_validateServiceCharacteristics;
-(BOOL)_updateCharacteristic:(id)arg1 ;
-(BOOL)_validateMandatoryCharacteristics;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 ;
-(CBService *)cbService;
-(void)setCBService:(id)arg1 ;
-(BOOL)hap2_mergeWithService:(id)arg1 ;
@end

