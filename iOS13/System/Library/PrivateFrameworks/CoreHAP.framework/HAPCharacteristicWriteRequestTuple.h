/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSData, NSNumber;

@interface HAPCharacteristicWriteRequestTuple : HMFObject {

	BOOL _timedWrite;
	BOOL _includeResponseValue;
	HAPCharacteristic* _characteristic;
	id _value;
	NSData* _authorizationData;
	unsigned long long _writeType;
	NSNumber* _enableEvents;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSData * authorizationData;                      //@synthesize authorizationData=_authorizationData - In the implementation block
@property (assign,nonatomic) BOOL timedWrite;                                 //@synthesize timedWrite=_timedWrite - In the implementation block
@property (assign,nonatomic) unsigned long long writeType;                    //@synthesize writeType=_writeType - In the implementation block
@property (assign,nonatomic) BOOL includeResponseValue;                       //@synthesize includeResponseValue=_includeResponseValue - In the implementation block
@property (nonatomic,retain) NSNumber * enableEvents;                         //@synthesize enableEvents=_enableEvents - In the implementation block
+(id)writeRequestTupleForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 timedWrite:(BOOL)arg4 responseValue:(BOOL)arg5 type:(unsigned long long)arg6 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(unsigned long long)writeType;
-(void)setWriteType:(unsigned long long)arg1 ;
-(BOOL)includeResponseValue;
-(NSData *)authorizationData;
-(BOOL)timedWrite;
-(void)setEnableEvents:(NSNumber *)arg1 ;
-(NSNumber *)enableEvents;
-(void)setAuthorizationData:(NSData *)arg1 ;
-(void)setTimedWrite:(BOOL)arg1 ;
-(void)setIncludeResponseValue:(BOOL)arg1 ;
@end

