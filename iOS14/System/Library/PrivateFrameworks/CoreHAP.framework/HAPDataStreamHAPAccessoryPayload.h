/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, HAPTLVUnsignedNumberValue, NSString;

@interface HAPDataStreamHAPAccessoryPayload : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _payload;
	HAPTLVUnsignedNumberValue* _forceClose;
	HAPTLVUnsignedNumberValue* _accessoryRequestToSend;

}

@property (nonatomic,retain) NSData * payload;                                                //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * forceClose;                          //@synthesize forceClose=_forceClose - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * accessoryRequestToSend;              //@synthesize accessoryRequestToSend=_accessoryRequestToSend - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(void)setPayload:(NSData *)arg1 ;
-(id)init;
-(NSData *)payload;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(HAPTLVUnsignedNumberValue *)accessoryRequestToSend;
-(void)setForceClose:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setAccessoryRequestToSend:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)forceClose;
-(id)initWithPayload:(id)arg1 forceClose:(id)arg2 accessoryRequestToSend:(id)arg3 ;
@end

