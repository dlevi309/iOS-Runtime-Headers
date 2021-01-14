/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HAPTLVUnsignedNumberValue, NSString;

@interface HAPDataStreamTransportInterruptPayload : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _requestToSendIdentifiers;
	HAPTLVUnsignedNumberValue* _dataStreamTransportInterruptSequenceNumber;

}

@property (nonatomic,retain) NSData * requestToSendIdentifiers;                                                   //@synthesize requestToSendIdentifiers=_requestToSendIdentifiers - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * dataStreamTransportInterruptSequenceNumber;              //@synthesize dataStreamTransportInterruptSequenceNumber=_dataStreamTransportInterruptSequenceNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSData *)requestToSendIdentifiers;
-(void)setRequestToSendIdentifiers:(NSData *)arg1 ;
-(void)setDataStreamTransportInterruptSequenceNumber:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)dataStreamTransportInterruptSequenceNumber;
-(id)initWithRequestToSendIdentifiers:(id)arg1 dataStreamTransportInterruptSequenceNumber:(id)arg2 ;
@end

