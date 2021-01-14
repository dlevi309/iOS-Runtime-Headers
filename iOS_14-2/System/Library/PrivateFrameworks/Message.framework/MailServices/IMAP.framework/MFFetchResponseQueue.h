/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
*/

#import <Message/MFBufferedQueue.h>

@class MFLibraryIMAPStore, MFIMAPConnection;

@interface MFFetchResponseQueue : MFBufferedQueue {

	MFLibraryIMAPStore* _store;
	MFIMAPConnection* _connection;
	unsigned long long _numNewUIDs;
	unsigned long long _newMessageCount;
	unsigned long long _highestModSequence;
	unsigned long long _flags;
	BOOL _isSearching;

}
-(BOOL)addItem:(id)arg1 ;
-(id)init;
-(BOOL)handleItems:(id)arg1 ;
-(id)insertMessages:(id)arg1 ;
-(BOOL)shouldAddUID:(unsigned long long)arg1 ;
-(id)messageToSyncFlagsForUID:(unsigned)arg1 ;
@end

