/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/


@protocol HAP2AccessoryServerEncoding <NSObject>
@property (nonatomic,readonly) unsigned long long encodingFeatures; 
@required
-(id)responseForRequest:(id)arg1 bodyData:(id)arg2 error:(id*)arg3;
-(unsigned long long)encodingFeatures;
-(id)decodeBodyData:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
-(id)encodeBodyValue:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
-(id)readRequestForAttributeDatabaseWithEncryption:(BOOL)arg1 error:(id*)arg2;
-(id)groupingsForReadRequestsForCharacteristics:(id)arg1;
-(id)readRequestForCharacteristics:(id)arg1 shouldEncrypt:(BOOL)arg2 error:(id*)arg3;
-(id)unpairedIdentifyRequestWithError:(id*)arg1;
-(id)requestToRemovePairing:(id)arg1 characteristic:(id)arg2 error:(id*)arg3;
-(id)requestToAddPairing:(id)arg1 characteristic:(id)arg2 error:(id*)arg3;
-(id)requestToListPairingsWithCharacteristic:(id)arg1 error:(id*)arg2;
-(id)groupingsForWriteRequestsForCharacteristics:(id)arg1;
-(id)writeRequestForCharacteristics:(id)arg1 shouldEncrypt:(BOOL)arg2 error:(id*)arg3;
-(id)prepareWriteRequestForCharacteristics:(id)arg1 ttl:(double)arg2 error:(id*)arg3;
-(id)executeWriteRequestForCharacteristics:(id)arg1 error:(id*)arg2;
-(id)notificationRequestsForCharacteristics:(id)arg1 type:(unsigned long long)arg2 error:(id*)arg3;
-(id)eventsForData:(id)arg1 error:(id*)arg2;

@end

