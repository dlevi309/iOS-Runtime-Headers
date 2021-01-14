/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@interface ECEmailAddressParser : NSObject
+(BOOL)validateDomain:(id)arg1 ;
+(BOOL)parseEmailAddressString:(id)arg1 displayName:(id*)arg2 localPart:(id*)arg3 domain:(id*)arg4 groupList:(id*)arg5 ;
+(BOOL)validateDisplayName:(id)arg1 ;
+(BOOL)validateLocalPart:(id)arg1 ;
+(BOOL)parseString:(id)arg1 emailAddressList:(id*)arg2 ;
+(BOOL)_validateString:(id)arg1 withFunction:(/*function pointer*/void*)arg2 ;
@end

