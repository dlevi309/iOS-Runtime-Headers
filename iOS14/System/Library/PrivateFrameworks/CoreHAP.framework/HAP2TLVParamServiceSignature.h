/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSData, HAP2TLVServicePropertiesWrapper, HAP2TLVParamCharacteristicList, NSString;

@interface HAP2TLVParamServiceSignature : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _instanceID;
	NSData* _serviceType;
	HAP2TLVServicePropertiesWrapper* _properties;
	NSData* _linkedServices;
	HAP2TLVParamCharacteristicList* _characteristicList;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * instanceID;                           //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,retain) NSData * serviceType;                                             //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,retain) HAP2TLVServicePropertiesWrapper * properties;                     //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSData * linkedServices;                                          //@synthesize linkedServices=_linkedServices - In the implementation block
@property (nonatomic,retain) HAP2TLVParamCharacteristicList * characteristicList;              //@synthesize characteristicList=_characteristicList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(HAPTLVUnsignedNumberValue *)instanceID;
-(HAP2TLVServicePropertiesWrapper *)properties;
-(id)init;
-(NSData *)linkedServices;
-(void)setServiceType:(NSData *)arg1 ;
-(NSString *)description;
-(void)setLinkedServices:(NSData *)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setInstanceID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setProperties:(HAP2TLVServicePropertiesWrapper *)arg1 ;
-(NSData *)serviceType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAP2TLVParamCharacteristicList *)characteristicList;
-(void)setCharacteristicList:(HAP2TLVParamCharacteristicList *)arg1 ;
-(id)initWithInstanceID:(id)arg1 serviceType:(id)arg2 properties:(id)arg3 linkedServices:(id)arg4 characteristicList:(id)arg5 ;
@end

