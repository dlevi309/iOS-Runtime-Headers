/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@interface MFMailDropMailParser : NSObject
+(void)parseURL:(id)arg1 intoMetadata:(id)arg2 ;
+(id)parseExpiration:(double)arg1 ;
+(BOOL)_domainIsAllowed:(id)arg1 ;
+(void)_parseWrappedURL:(id)arg1 intoMetadata:(id)arg2 ;
+(void)_parseDirectURL:(id)arg1 intoMetadata:(id)arg2 ;
+(id)_parseURLQuery:(id)arg1 ;
+(id)parseHeaderValue:(id)arg1 forField:(id)arg2 ;
@end

