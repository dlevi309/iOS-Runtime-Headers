/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CertificateRequestPayload : NEIKEv2Payload {

	unsigned long long _encoding;
	NSData* _certificateData;

}

@property (assign) unsigned long long encoding;              //@synthesize encoding=_encoding - In the implementation block
@property (retain) NSData * certificateData;                 //@synthesize certificateData=_certificateData - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setEncoding:(unsigned long long)arg1 ;
-(NSData *)certificateData;
-(unsigned long long)encoding;
-(id)description;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(void)setCertificateData:(NSData *)arg1 ;
-(unsigned long long)type;
@end

