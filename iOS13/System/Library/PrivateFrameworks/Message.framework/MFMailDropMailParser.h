/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@interface MFMailDropMailParser : NSObject
+(void)parseURL:(id)arg1 intoMetadata:(id)arg2 ;
+(id)parseExpiration:(double)arg1 ;
+(BOOL)_domainIsWhitelisted:(id)arg1 ;
+(void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2 ;
+(void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2 ;
+(id)_parseURLQuery:(id)arg1 ;
+(id)parseHeaderValue:(id)arg1 forField:(id)arg2 ;
@end

