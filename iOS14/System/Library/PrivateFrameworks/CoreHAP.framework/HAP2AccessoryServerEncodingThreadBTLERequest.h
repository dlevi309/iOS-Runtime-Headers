/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPBTLERequest.h>

@interface HAP2AccessoryServerEncodingThreadBTLERequest : HAPBTLERequest {

	unsigned char _threadRequestType;
	long long _writeOptions;
	id _requestedValue;

}

@property (nonatomic,readonly) unsigned char threadRequestType;              //@synthesize threadRequestType=_threadRequestType - In the implementation block
@property (nonatomic,readonly) id requestedValue;                            //@synthesize requestedValue=_requestedValue - In the implementation block
@property (nonatomic,readonly) BOOL expectsResponseBody; 
@property (nonatomic,readonly) long long writeOptions;                       //@synthesize writeOptions=_writeOptions - In the implementation block
+(id)attributeDatabaseRequest;
+(id)readRequestForCharacteristic:(id)arg1 ;
+(id)writeRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id*)arg5 ;
+(id)prepareWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 error:(id*)arg5 ;
+(id)executeWriteRequestForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 error:(id*)arg4 ;
+(id)notificationRequestForCharacteristic:(id)arg1 threadRequestType:(unsigned char)arg2 enforcePDUBodyLength:(BOOL)arg3 ;
-(BOOL)expectsResponseBody;
-(long long)writeOptions;
-(id)requestedValue;
-(unsigned char)threadRequestType;
@end

