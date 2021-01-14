/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/

#import <Message/MFBufferedQueue.h>

@class MFLibraryIMAPStore, MFIMAPConnection, NSString, NSMutableArray, NSArray;

@interface MFBaseSyncResponseQueue : MFBufferedQueue {

	MFLibraryIMAPStore* _store;
	MFIMAPConnection* _connection;
	NSString* _url;
	unsigned long long _currentUID;
	NSMutableArray* _missingUIDs;
	NSArray* _serverMessages;
	BOOL _shouldCompact;
	BOOL _shouldFetch;
	BOOL _isSearching;

}
-(id)init;
-(BOOL)handleItems:(id)arg1 ;
-(unsigned long long)uidForItem:(id)arg1 ;
-(BOOL)shouldSyncFlags;
-(unsigned long long)flagsForItem:(id)arg1 ;
-(id)sequenceIdentifierForItem:(id)arg1 ;
@end

