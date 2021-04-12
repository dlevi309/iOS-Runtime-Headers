/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)getSharedInstance;
+(id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2 ;
+(id)getBuiltinInstance;
+(void)setBuiltinInstanceWithDictionary:(id)arg1 ;
+(BOOL)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)schemaVersion;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(void)setSchemaVersion:(NSNumber *)arg1 ;
-(NSArray *)hapCharacteristics;
-(NSArray *)hapServices;
-(id)btleToServiceType:(id)arg1 ;
-(id)serviceUTIFromType:(id)arg1 ;
-(BOOL)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2 ;
-(id)getDefaultCharacteristicProperties:(id)arg1 ;
-(id)getDefaultServiceProperties:(id)arg1 ;
-(id)generateDictionary;
-(id)characteristicUTIFromType:(id)arg1 ;
-(void)setParsedUUIDs:(NSMutableArray *)arg1 ;
-(BOOL)parseVersion:(id)arg1 ;
-(BOOL)parseMetadata:(id)arg1 ;
-(NSMutableArray *)parsedUUIDs;
-(NSString *)hapBaseUUIDSuffix;
-(id)parseCharacteristicValue:(id)arg1 ;
-(void)setHapCharacteristicNameTypeMap:(NSDictionary *)arg1 ;
-(id)characteristicTypeFromUTI:(id)arg1 ;
-(NSDictionary *)hapCharacteristicMap;
-(id)parseServiceCharacteristics:(id)arg1 ;
-(void)setHapServiceNameTypeMap:(NSDictionary *)arg1 ;
-(id)serviceTypeFromUTI:(id)arg1 ;
-(void)setHapBaseUUIDSuffix:(NSString *)arg1 ;
-(id)parseUnits:(id)arg1 ;
-(void)setHapUnitMap:(NSDictionary *)arg1 ;
-(id)parseProperties:(id)arg1 ;
-(void)setHapPropertyMap:(NSDictionary *)arg1 ;
-(id)parseCharacteristics:(id)arg1 ;
-(void)setHapCharacteristicMap:(NSDictionary *)arg1 ;
-(id)parseServices:(id)arg1 ;
-(void)setHapServiceMap:(NSDictionary *)arg1 ;
-(id)parseCharacteristicServiceTuples:(id)arg1 ;
-(void)setHapSupportsAuthDataSet:(NSSet *)arg1 ;
-(id)hapServiceFromType:(id)arg1 ;
-(NSDictionary *)hapServiceNameTypeMap;
-(id)hapCharacteristicFromType:(id)arg1 ;
-(NSDictionary *)hapCharacteristicNameTypeMap;
-(id)hapUnitFromName:(id)arg1 ;
-(NSDictionary *)hapServiceMap;
-(NSSet *)hapSupportsAuthDataSet;
-(NSDictionary *)hapUnitMap;
-(NSDictionary *)hapPropertyMap;
-(BOOL)updateRawPlist;
-(NSArray *)hapValueUnits;
-(NSArray *)hapProperties;
-(id)generateHAPMetadataTuplesDictionary:(id)arg1 ;
-(BOOL)isStandardHAPService:(id)arg1 ;
-(BOOL)isStandardHAPServiceName:(id)arg1 ;
-(BOOL)isStandardHAPCharacteristic:(id)arg1 ;
-(BOOL)isStandardHAPCharacteristicName:(id)arg1 ;
-(BOOL)isStandardHAPUnitName:(id)arg1 ;
-(BOOL)allowAssociatedService:(id)arg1 ;
-(id)descriptionFromServiceType:(id)arg1 ;
-(id)descriptionFromCharacteristicType:(id)arg1 ;
-(BOOL)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2 ;
-(id)characteristicValueUnitOfType:(id)arg1 ;
-(id)serviceTypeToBTLE:(id)arg1 ;
-(BOOL)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2 ;
-(id)getDefaultCharacteristicMetadata:(id)arg1 ;
-(id)hapCharacteristicFromName:(id)arg1 ;
-(id)hapServiceFromName:(id)arg1 ;
-(NSArray *)hapSupportsAuthDataTuples;
-(id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6 ;
-(NSDictionary *)rawPlist;
@end

