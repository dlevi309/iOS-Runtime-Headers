/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NEIKEv2ConfigurationMessage;

@interface NEIKEv2ConfigPayload : NEIKEv2Payload {

	NEIKEv2ConfigurationMessage* _configuration;

}

@property (retain) NEIKEv2ConfigurationMessage * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)copyTypeDescription;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)description;
-(NEIKEv2ConfigurationMessage *)configuration;
-(BOOL)hasRequiredFields;
-(BOOL)generatePayloadData;
-(BOOL)parsePayloadData;
-(id)createConfigAttributeFromData:(id)arg1 attributeName:(id)arg2 attributeLen:(unsigned short)arg3 attributeType:(unsigned long long)arg4 customType:(unsigned long long)arg5 ;
-(unsigned long long)type;
-(void)setConfiguration:(NEIKEv2ConfigurationMessage *)arg1 ;
@end

