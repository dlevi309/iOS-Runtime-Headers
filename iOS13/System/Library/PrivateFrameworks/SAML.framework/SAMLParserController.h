/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/


@class NSData;

@interface SAMLParserController : NSObject {

	NSData* _schemaData;

}

@property (nonatomic,retain) NSData * schemaData;              //@synthesize schemaData=_schemaData - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(id)schema;
-(id)parseCachedResponse:(id)arg1 error:(id*)arg2 ;
-(NSData *)schemaData;
-(id)dataFromString:(id)arg1 error:(id*)arg2 ;
-(id)newAttributeQuery:(id)arg1 error:(id*)arg2 ;
-(id)newAuthNRequest:(id)arg1 error:(id*)arg2 ;
-(id)newAuthZQuery:(id)arg1 channelId:(id)arg2 error:(id*)arg3 ;
-(id)newLogoutRequest:(id*)arg1 ;
-(id)parseResponse:(id)arg1 error:(id*)arg2 ;
-(void)setSchemaData:(NSData *)arg1 ;
@end

