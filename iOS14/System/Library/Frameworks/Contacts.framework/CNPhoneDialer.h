/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNPhoneDialer : NSObject
+(id)URLWithPhoneNumber:(id)arg1 ;
+(id)sanitizePhoneNumber:(id)arg1 ;
+(BOOL)sendMessage:(id)arg1 error:(id*)arg2 ;
+(id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2 ;
+(id)messageWithAdditionalParameters:(id)arg1 ;
+(id)cancelMessageWithDialMessageID:(id)arg1 ;
+(void)loadIdentityServices;
+(id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
+(id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
+(BOOL)cancelDialMessage:(id)arg1 error:(id*)arg2 ;
@end

