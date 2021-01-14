/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDPBHasher
@required
-(long long)hashedAccountID:(id)arg1;
-(id)hashedMessageHeadersForMessage:(id)arg1;
-(long long)hashedConversationID:(long long)arg1;
-(long long)hashedString:(id)arg1;
-(long long)hashedMailboxID:(id)arg1;
-(long long)hashedContactIDForAddress:(id)arg1;
-(SCD_Struct_ED13*)hashedSubject:(id)arg1;

@end

