/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSData;

@interface NEIKEv2Payload : NSObject {

	BOOL _isInbound;
	NSData* _payloadData;

}

@property (assign) BOOL isInbound;                         //@synthesize isInbound=_isInbound - In the implementation block
@property (readonly) BOOL hasRequiredFields; 
@property (retain) NSData * payloadData;                   //@synthesize payloadData=_payloadData - In the implementation block
@property (readonly) BOOL isValid; 
@property (readonly) unsigned long long type; 
+(id)copyTypeDescription;
+(id)createPayloadWithType:(unsigned long long)arg1 fromData:(id)arg2 ;
-(id)init;
-(NSData *)payloadData;
-(id)copyPayloadData;
-(BOOL)isInbound;
-(BOOL)isValid;
-(void)setPayloadData:(NSData *)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(void)setIsInbound:(BOOL)arg1 ;
-(BOOL)parsePayloadData;
-(unsigned long long)type;
@end

