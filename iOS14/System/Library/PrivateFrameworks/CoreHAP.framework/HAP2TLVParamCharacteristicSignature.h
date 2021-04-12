/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSData, HAP2TLVCharacteristicPropertiesWrapper, NSString;

@interface HAP2TLVParamCharacteristicSignature : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _instanceID;
	NSData* _characteristicType;
	HAP2TLVCharacteristicPropertiesWrapper* _characteristicProperties;
	NSString* _userDescription;
	NSData* _bluetoothFormat;
	NSData* _validRange;
	NSData* _stepValue;
	NSData* _validValues;
	NSData* _validValuesRange;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * instanceID;                                         //@synthesize instanceID=_instanceID - In the implementation block
@property (nonatomic,retain) NSData * characteristicType;                                                    //@synthesize characteristicType=_characteristicType - In the implementation block
@property (nonatomic,retain) HAP2TLVCharacteristicPropertiesWrapper * characteristicProperties;              //@synthesize characteristicProperties=_characteristicProperties - In the implementation block
@property (nonatomic,retain) NSString * userDescription;                                                     //@synthesize userDescription=_userDescription - In the implementation block
@property (nonatomic,retain) NSData * bluetoothFormat;                                                       //@synthesize bluetoothFormat=_bluetoothFormat - In the implementation block
@property (nonatomic,retain) NSData * validRange;                                                            //@synthesize validRange=_validRange - In the implementation block
@property (nonatomic,retain) NSData * stepValue;                                                             //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) NSData * validValues;                                                           //@synthesize validValues=_validValues - In the implementation block
@property (nonatomic,retain) NSData * validValuesRange;                                                      //@synthesize validValuesRange=_validValuesRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(NSData *)stepValue;
-(HAPTLVUnsignedNumberValue *)instanceID;
-(void)setStepValue:(NSData *)arg1 ;
-(NSData *)characteristicType;
-(id)init;
-(NSData *)validValues;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setInstanceID:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setCharacteristicType:(NSData *)arg1 ;
-(NSData *)validRange;
-(NSString *)userDescription;
-(void)setValidValues:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserDescription:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAP2TLVCharacteristicPropertiesWrapper *)characteristicProperties;
-(void)setCharacteristicProperties:(HAP2TLVCharacteristicPropertiesWrapper *)arg1 ;
-(NSData *)bluetoothFormat;
-(NSData *)validValuesRange;
-(void)setBluetoothFormat:(NSData *)arg1 ;
-(void)setValidRange:(NSData *)arg1 ;
-(void)setValidValuesRange:(NSData *)arg1 ;
-(id)initWithInstanceID:(id)arg1 characteristicType:(id)arg2 characteristicProperties:(id)arg3 userDescription:(id)arg4 bluetoothFormat:(id)arg5 validRange:(id)arg6 stepValue:(id)arg7 validValues:(id)arg8 validValuesRange:(id)arg9 ;
@end

