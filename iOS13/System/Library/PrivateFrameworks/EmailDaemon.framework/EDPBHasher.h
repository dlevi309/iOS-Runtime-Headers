/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(SCD_Struct_ED11*)hashedSubject:(id)arg1;

@end

