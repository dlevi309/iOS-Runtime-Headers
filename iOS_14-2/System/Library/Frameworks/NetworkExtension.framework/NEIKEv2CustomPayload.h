/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload {

	unsigned long long _customType;
	NSData* _customData;

}

@property (assign) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSData * customData;                        //@synthesize customData=_customData - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)customType;
-(NSData *)customData;
-(void)setCustomType:(unsigned long long)arg1 ;
-(void)setCustomData:(NSData *)arg1 ;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(unsigned long long)type;
@end

