/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMerging.h>

@class NSString, NSNumber, HAPAccessory, NSArray, CBService;

@interface HAPService : HMFObject <HMFMerging> {

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(HAPAccessory *)accessory;
-(void)setAccessory:(HAPAccessory *)arg1 ;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(BOOL)isEqualToService:(id)arg1 ;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(void)setServiceProperties:(unsigned long long)arg1 ;
-(NSArray *)characteristics;
-(unsigned long long)serviceProperties;
-(NSNumber *)instanceID;
-(NSArray *)linkedServices;
-(void)setLinkedServices:(NSArray *)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 parsedCharacteristics:(id)arg3 serviceProperties:(unsigned long long)arg4 linkedServices:(id)arg5 ;
-(BOOL)_updateAndValidateCharacteristics;
-(id)propertiesDescription;
-(BOOL)_validateServiceCharacteristics;
-(BOOL)_updateCharacteristic:(id)arg1 ;
-(BOOL)_validateMandatoryCharacteristics;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 ;
-(id)characteristicsOfType:(id)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(CBService *)cbService;
-(void)setCBService:(id)arg1 ;
@end

