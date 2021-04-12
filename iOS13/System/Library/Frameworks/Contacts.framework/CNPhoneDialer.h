/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@interface CNPhoneDialer : NSObject
+(id)URLWithPhoneNumber:(id)arg1 ;
+(id)sanitizePhoneNumber:(id)arg1 ;
+(id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2 ;
+(BOOL)sendMessage:(id)arg1 error:(id*)arg2 ;
+(id)messageWithAdditionalParameters:(id)arg1 ;
+(id)cancelMessageWithDialMessageID:(id)arg1 ;
+(void)loadIdentityServices;
+(id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
+(id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
+(BOOL)cancelDialMessage:(id)arg1 error:(id*)arg2 ;
@end

