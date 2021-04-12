/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/


@class MFMailMessageStore, NSArray, NSMutableArray;

@interface _MFIMAPAppendMessagesContext : NSObject {

	MFMailMessageStore* store;
	NSArray* messages;
	NSArray* flagsToSet;
	NSArray* customFlagsToSet;
	BOOL someMsgsWentToServer;
	NSMutableArray* msgsAppendedOffline;
	NSMutableArray* missedMessages;
	NSMutableArray* newMessageIDs;
	NSMutableArray* newMessages;
	unsigned unreadCountDelta;
	unsigned destUidNext;

}
@end

