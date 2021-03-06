/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData, NEIKEv2SPI;

@interface NEIKEv2NotifyPayload : NEIKEv2Payload {

	unsigned long long _notifyType;
	NSData* _data;
	NEIKEv2SPI* _spi;

}

@property (readonly) BOOL isError; 
@property (readonly) BOOL isPrivateError; 
@property (assign) unsigned long long notifyType;              //@synthesize notifyType=_notifyType - In the implementation block
@property (retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (retain) NEIKEv2SPI * spi;                           //@synthesize spi=_spi - In the implementation block
+(id)copyTypeDescription;
+(id)createNotifyPayloadType:(unsigned long long)arg1 spi:(id)arg2 ;
+(id)createNotifyPayloadType:(unsigned long long)arg1 ;
+(id)createNotifyPayloadType:(unsigned long long)arg1 data:(id)arg2 ;
-(NEIKEv2SPI *)spi;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setSpi:(NEIKEv2SPI *)arg1 ;
-(id)copyError;
-(id)copyTypeDescription;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)notifyType;
-(id)copyAdditionalAddress;
-(void)setNotifyType:(unsigned long long)arg1 ;
-(BOOL)isError;
-(id)description;
-(BOOL)isPrivateError;
-(NSData *)data;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(id)copyServerRedirectNonce;
-(id)copyServerRedirectEndpoint;
-(unsigned long long)type;
@end

