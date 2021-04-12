/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@protocol OS_dispatch_queue;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSString, NSObject, _SYSharedServiceDB, NSArray, NSDate;

@interface NMSWindowData : NSObject {

	NSString* _path;
	CFStringRef _loggingFacility;
	NSObject*<OS_dispatch_queue> _syncQ;
	sqlite3Ref _db;
	_SYSharedServiceDB* _sharedDB;
	sqlite3_stmtRef _addMessageInFlight;
	sqlite3_stmtRef _getMessageLength;
	sqlite3_stmtRef _removeMessageInFlight;
	sqlite3_stmtRef _getNextExpireDate;
	sqlite3_stmtRef _getExpiredMessageIDs;
	sqlite3_stmtRef _getBytesInFlight;
	sqlite3_stmtRef _getCountInFlight;
	sqlite3_stmtRef _pushPendingMessage;
	sqlite3_stmtRef _getPendingMessage;
	sqlite3_stmtRef _popPendingMessage;
	sqlite3_stmtRef _countPendingMessages;

}

@property (nonatomic,readonly) NSArray * expiredMessageIDs; 
@property (nonatomic,readonly) unsigned long long lengthOfAllMessagesInFlight; 
@property (nonatomic,readonly) unsigned long long countOfAllMessagesInFlight; 
@property (nonatomic,readonly) NSDate * dateOfNextMessageExpiry; 
@property (nonatomic,readonly) unsigned long long countOfPendingMessages; 
-(void)_withDB:(/*^block*/id)arg1 ;
-(id)init;
-(sqlite3Ref)dbRef;
-(BOOL)_openDBForceRecreate:(BOOL)arg1 ;
-(void)_prepareStatements;
-(void)removeAllMessages;
-(int)_getSchemaVersion;
-(void)dealloc;
-(id)initWithPath:(id)arg1 logFacility:(CFStringRef)arg2 ;
-(void)_ensureSchema;
-(BOOL)_syncTransaction:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithSharedDBForServiceName:(id)arg1 ;
-(void)addMessageWithID:(id)arg1 ofLength:(unsigned long long)arg2 timeoutTime:(double)arg3 ;
-(unsigned long long)removeAndReturnLengthOfMessageWithID:(id)arg1 ;
-(unsigned long long)removeAndReturnLengthOfMessagesWithIDs:(id)arg1 ;
-(NSArray *)expiredMessageIDs;
-(unsigned long long)lengthOfAllMessagesInFlight;
-(unsigned long long)countOfAllMessagesInFlight;
-(NSDate *)dateOfNextMessageExpiry;
-(void)pushPendingMessageData:(id)arg1 timeToLive:(double)arg2 ;
-(id)popPendingMessage;
-(unsigned long long)countOfPendingMessages;
@end

