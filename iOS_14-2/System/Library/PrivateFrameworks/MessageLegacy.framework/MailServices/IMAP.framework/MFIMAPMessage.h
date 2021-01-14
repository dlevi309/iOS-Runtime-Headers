/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <Message/MFMailMessage.h>

@class NSArray;

@interface MFIMAPMessage : MFMailMessage {

	unsigned long long _size;
	NSArray* _customFlags;
	unsigned _uid;
	unsigned long long _uniqueRemoteId;

}
-(void)setUid:(unsigned)arg1 ;
-(unsigned)uid;
-(id)remoteMailboxURL;
-(id)_privacySafeDescription;
-(id)remoteID;
-(id)messageID;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(BOOL)hasTemporaryUid;
-(id)originalMailboxURL;
-(unsigned long long)uniqueRemoteId;
-(void)setUniqueRemoteId:(unsigned long long)arg1 ;
-(BOOL)isPartial;
-(void)setIsPartial:(BOOL)arg1 ;
-(BOOL)isMessageContentsLocallyAvailable;
-(void)setHasTemporaryUid:(BOOL)arg1 ;
-(id)mailboxName;
-(unsigned long long)messageSize;
-(id)initWithFlags:(unsigned long long)arg1 customFlags:(id)arg2 size:(unsigned long long)arg3 uid:(unsigned)arg4 ;
-(long long)compareByNumberWithMessage:(id)arg1 ;
-(id)customFlags;
@end

