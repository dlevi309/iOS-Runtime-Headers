/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@class NSString, MFMailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject {

	NSString* _url;
	long long _mailboxRowid;
	MFMailMessageLibrary* _library;

}
-(void)_loadMailboxRowidIfNecessary:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 URLString:(id)arg2 ;
-(id)knownMessageIDsFromSet:(id)arg1 ;
-(id)messageIDsAddedBeforeDate:(double)arg1 ;
-(void)deleteUIDsNotInArray:(id)arg1 ;
-(unsigned)numberOfMessageIDs;
-(void)deleteAllUIDs;
-(unsigned long long)flagsForUID:(id)arg1 ;
@end

