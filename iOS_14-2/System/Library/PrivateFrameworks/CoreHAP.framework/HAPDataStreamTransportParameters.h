/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HAPDataStreamTransportParameters : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _tcpListeningPort;
	HAPTLVUnsignedNumberValue* _sessionIdentifier;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * tcpListeningPort;               //@synthesize tcpListeningPort=_tcpListeningPort - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(HAPTLVUnsignedNumberValue *)tcpListeningPort;
-(void)setTcpListeningPort:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setSessionIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)sessionIdentifier;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(id)initWithTcpListeningPort:(id)arg1 sessionIdentifier:(id)arg2 ;
@end

