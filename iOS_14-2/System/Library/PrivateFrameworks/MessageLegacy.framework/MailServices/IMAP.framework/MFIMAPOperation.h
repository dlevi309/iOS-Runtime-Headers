/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/


@class NSString;

@interface MFIMAPOperation : NSObject {

	unsigned _type : 3;
	unsigned _failureCount : 4;
	unsigned _temporaryUids : 1;
	NSString* _mailboxName;
	SCD_Union_MF11* _opSpecific;

}
+(id)deserializedCopyFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(int)operationType;
-(unsigned char)_magic;
-(unsigned)uid;
-(id)uids;
-(id)flags;
-(id)description;
-(BOOL)isValid;
-(unsigned)failureCount;
-(void)setFailureCount:(unsigned)arg1 ;
-(id)mailboxName;
-(void)dealloc;
-(unsigned)approximateSize;
-(id)flagsToSet;
-(BOOL)usesRealUids;
-(id)flagsToClear;
-(id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 forUIDs:(id)arg3 inMailbox:(id)arg4 ;
-(void)setUsesRealUids:(BOOL)arg1 ;
-(id)initWithMailboxToCreate:(id)arg1 ;
-(id)initWithMailboxToDelete:(id)arg1 ;
-(unsigned)firstTemporaryUid;
-(id)initWithAppendedUid:(unsigned)arg1 approximateSize:(unsigned)arg2 flags:(id)arg3 internalDate:(id)arg4 mailbox:(id)arg5 ;
-(BOOL)isSourceOfTemporaryUid:(unsigned)arg1 ;
-(BOOL)actsOnTemporaryUid:(unsigned)arg1 ;
-(void)expungeTemporaryUid:(unsigned)arg1 ;
-(unsigned)lastTemporaryUid;
-(id)initWithUidsToCopy:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 firstNewUid:(unsigned)arg4 ;
-(void)serializeIntoData:(id)arg1 ;
-(id)internalDate;
-(id)_deserializeOpSpecificValuesFromData:(id)arg1 cursor:(unsigned long long*)arg2 ;
-(id)initWithType:(int)arg1 mailbox:(id)arg2 ;
-(id)sourceUids;
-(id)destinationUids;
-(id)destinationMailbox;
-(unsigned)sourceUidForTemporaryUid:(unsigned)arg1 ;
-(BOOL)getMessageId:(id*)arg1 andInternalDate:(id*)arg2 forDestinationUid:(unsigned)arg3 ;
-(void)setMessageId:(id)arg1 andInternalDate:(id)arg2 forMessageWithSourceUid:(unsigned)arg3 ;
@end

