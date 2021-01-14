/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HAP2CharacteristicTupleValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HAPCharacteristic, NSData, NSNumber, NSString;

@interface HAPCharacteristicWriteRequestTuple : HMFObject <HAP2CharacteristicTupleValue, NSCopying> {

	BOOL _timedWrite;
	BOOL _includeResponseValue;
	HAPCharacteristic* _characteristic;
	id _value;
	NSData* _authorizationData;
	unsigned long long _writeType;
	NSNumber* _enableEvents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HAPCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSData * authorizationData;                      //@synthesize authorizationData=_authorizationData - In the implementation block
@property (assign,nonatomic) BOOL timedWrite;                                 //@synthesize timedWrite=_timedWrite - In the implementation block
@property (assign,nonatomic) unsigned long long writeType;                    //@synthesize writeType=_writeType - In the implementation block
@property (assign,nonatomic) BOOL includeResponseValue;                       //@synthesize includeResponseValue=_includeResponseValue - In the implementation block
@property (nonatomic,retain) NSNumber * enableEvents;                         //@synthesize enableEvents=_enableEvents - In the implementation block
+(id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(BOOL)arg4 responseValue:(BOOL)arg5 type:(unsigned long long)arg6 ;
-(void)setValue:(id)arg1 ;
-(HAPCharacteristic *)characteristic;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(NSData *)authorizationData;
-(BOOL)includeResponseValue;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(unsigned long long)writeType;
-(void)setWriteType:(unsigned long long)arg1 ;
-(BOOL)timedWrite;
-(void)setEnableEvents:(NSNumber *)arg1 ;
-(NSNumber *)enableEvents;
-(void)setIncludeResponseValue:(BOOL)arg1 ;
-(void)setTimedWrite:(BOOL)arg1 ;
@end

