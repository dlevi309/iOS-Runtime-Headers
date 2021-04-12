/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSNumber, NSString, NSDictionary, NSMutableArray, NSSet, NSArray;

@interface HAPMetadata : HMFObject {

	NSNumber* _version;
	NSNumber* _schemaVersion;
	NSString* _hapBaseUUIDSuffix;
	NSDictionary* _rawPlist;
	NSMutableArray* _parsedUUIDs;
	NSDictionary* _hapUnitMap;
	NSDictionary* _hapPropertyMap;
	NSDictionary* _hapCharacteristicMap;
	NSDictionary* _hapServiceMap;
	NSSet* _hapSupportsAuthDataSet;
	NSDictionary* _hapCharacteristicNameTypeMap;
	NSDictionary* _hapServiceNameTypeMap;

}

@property (nonatomic,retain) NSNumber * version;                                       //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSNumber * schemaVersion;                                 //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,retain) NSString * hapBaseUUIDSuffix;                             //@synthesize hapBaseUUIDSuffix=_hapBaseUUIDSuffix - In the implementation block
@property (nonatomic,retain) NSMutableArray * parsedUUIDs;                             //@synthesize parsedUUIDs=_parsedUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * hapUnitMap;                                //@synthesize hapUnitMap=_hapUnitMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapPropertyMap;                            //@synthesize hapPropertyMap=_hapPropertyMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapCharacteristicMap;                      //@synthesize hapCharacteristicMap=_hapCharacteristicMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapServiceMap;                             //@synthesize hapServiceMap=_hapServiceMap - In the implementation block
@property (nonatomic,retain) NSSet * hapSupportsAuthDataSet;                           //@synthesize hapSupportsAuthDataSet=_hapSupportsAuthDataSet - In the implementation block
@property (nonatomic,retain) NSDictionary * hapCharacteristicNameTypeMap;              //@synthesize hapCharacteristicNameTypeMap=_hapCharacteristicNameTypeMap - In the implementation block
@property (nonatomic,retain) NSDictionary * hapServiceNameTypeMap;                     //@synthesize hapServiceNameTypeMap=_hapServiceNameTypeMap - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawPlist;                                //@synthesize rawPlist=_rawPlist - In the implementation block
@property (nonatomic,readonly) NSArray * hapValueUnits; 
@property (nonatomic,readonly) NSArray * hapProperties; 
@property (nonatomic,readonly) NSArray * hapCharacteristics; 
@property (nonatomic,readonly) NSArray * hapServices; 
@property (nonatomic,readonly) NSArray * hapSupportsAuthDataTuples; 
+(id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2 ;
+(id)getSharedInstance;
+(BOOL)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3 ;
+(void)setBuiltinInstanceWithDictionary:(id)arg1 ;
+(id)getBuiltinInstance;
-(NSNumber *)schemaVersion;
-(id)generateDictionary;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)hapUnitFromName:(id)arg1 ;
-(void)setParsedUUIDs:(NSMutableArray *)arg1 ;
-(BOOL)isStandardHAPCharacteristicName:(id)arg1 ;
-(id)descriptionFromServiceType:(id)arg1 ;
-(void)setHapCharacteristicNameTypeMap:(NSDictionary *)arg1 ;
-(NSArray *)hapValueUnits;
-(id)parseUnits:(id)arg1 ;
-(id)characteristicValueUnitOfType:(id)arg1 ;
-(NSArray *)hapProperties;
-(id)parseCharacteristics:(id)arg1 ;
-(void)setHapServiceMap:(NSDictionary *)arg1 ;
-(void)setHapBaseUUIDSuffix:(NSString *)arg1 ;
-(BOOL)isStandardHAPUnitName:(id)arg1 ;
-(id)serviceUTIFromType:(id)arg1 ;
-(id)descriptionFromCharacteristicType:(id)arg1 ;
-(BOOL)parseMetadata:(id)arg1 ;
-(NSDictionary *)rawPlist;
-(NSDictionary *)hapServiceNameTypeMap;
-(void)setSchemaVersion:(NSNumber *)arg1 ;
-(BOOL)isStandardHAPService:(id)arg1 ;
-(BOOL)isStandardHAPServiceName:(id)arg1 ;
-(id)getDefaultCharacteristicMetadata:(id)arg1 ;
-(id)btleToServiceType:(id)arg1 ;
-(BOOL)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2 ;
-(NSArray *)hapServices;
-(void)setHapUnitMap:(NSDictionary *)arg1 ;
-(BOOL)isStandardHAPCharacteristic:(id)arg1 ;
-(NSDictionary *)hapServiceMap;
-(NSDictionary *)hapPropertyMap;
-(id)parseServiceCharacteristics:(id)arg1 ;
-(id)parseServices:(id)arg1 ;
-(BOOL)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2 ;
-(id)hapServiceFromType:(id)arg1 ;
-(id)getDefaultServiceProperties:(id)arg1 ;
-(id)parseProperties:(id)arg1 ;
-(BOOL)updateRawPlist;
-(id)parseCharacteristicServiceTuples:(id)arg1 ;
-(BOOL)allowAssociatedService:(id)arg1 ;
-(BOOL)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2 ;
-(id)hapServiceFromName:(id)arg1 ;
-(NSDictionary *)hapCharacteristicMap;
-(id)parseCharacteristicValue:(id)arg1 ;
-(NSString *)hapBaseUUIDSuffix;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)characteristicUTIFromType:(id)arg1 ;
-(id)generateHAPMetadataTuplesDictionary:(id)arg1 ;
-(NSArray *)hapCharacteristics;
-(id)serviceTypeToBTLE:(id)arg1 ;
-(id)getDefaultCharacteristicProperties:(id)arg1 ;
-(id)serviceTypeFromUTI:(id)arg1 ;
-(id)hapCharacteristicFromName:(id)arg1 ;
-(NSArray *)hapSupportsAuthDataTuples;
-(void)setHapServiceNameTypeMap:(NSDictionary *)arg1 ;
-(id)characteristicTypeFromUTI:(id)arg1 ;
-(id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6 ;
-(NSDictionary *)hapUnitMap;
-(NSDictionary *)hapCharacteristicNameTypeMap;
-(NSMutableArray *)parsedUUIDs;
-(void)setHapPropertyMap:(NSDictionary *)arg1 ;
-(NSNumber *)version;
-(void)setHapSupportsAuthDataSet:(NSSet *)arg1 ;
-(NSSet *)hapSupportsAuthDataSet;
-(id)hapCharacteristicFromType:(id)arg1 ;
-(BOOL)parseVersion:(id)arg1 ;
-(void)setHapCharacteristicMap:(NSDictionary *)arg1 ;
@end

