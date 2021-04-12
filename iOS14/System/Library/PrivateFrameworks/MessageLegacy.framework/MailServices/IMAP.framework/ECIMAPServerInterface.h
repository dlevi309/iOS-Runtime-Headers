/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/


@protocol ECIMAPServerInterface <NSObject>
@property (nonatomic,readonly) BOOL hasValidConnection; 
@required
-(BOOL)hasValidConnection;
-(BOOL)expunge;
-(BOOL)storeGmailLabels:(id)arg1 state:(BOOL)arg2 forUIDs:(id)arg3;
-(BOOL)storeFlagChange:(id)arg1 forUIDs:(id)arg2;
-(BOOL)moveUIDs:(id)arg1 toMailboxNamed:(id)arg2 copyInfo:(id*)arg3 error:(id*)arg4;
-(BOOL)copyUIDs:(id)arg1 toMailboxNamed:(id)arg2 copyInfo:(id*)arg3 error:(id*)arg4;
-(BOOL)expungeUIDs:(id)arg1;
-(BOOL)appendData:(id)arg1 toMailboxNamed:(id)arg2 flags:(id)arg3 dateReceived:(id)arg4 appendInfo:(id*)arg5 error:(id*)arg6;

@end

