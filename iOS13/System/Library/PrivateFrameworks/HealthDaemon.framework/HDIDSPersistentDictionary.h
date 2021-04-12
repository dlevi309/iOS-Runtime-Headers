/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSURL, HDSQLiteDatabase;

@interface HDIDSPersistentDictionary : NSObject {

	Class _objectClass;
	NSURL* _databaseURL;
	HDSQLiteDatabase* _database;

}
-(void)dealloc;
-(void)invalidate;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)_openDB;
-(void)didCancel:(id)arg1 ;
-(id)_dataFromObject:(id)arg1 ;
-(id)_objectFromData:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 expires:(double)arg3 ;
-(void)enumerateObjectsSortedByExpirationDate:(/*^block*/id)arg1 ;
-(void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(void)_obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 generateStackshot:(BOOL)arg3 ;
-(BOOL)_reallyOpenDB;
-(BOOL)_createSchemaWithError:(id*)arg1 ;
-(void)_handleError:(id)arg1 format:(id)arg2 ;
-(void)_recordMessage:(id)arg1 deviceID:(id)arg2 type:(int)arg3 outgoing:(BOOL)arg4 request:(BOOL)arg5 length:(long long)arg6 ;
-(void)_recordMappingOfRequest:(id)arg1 toResponse:(id)arg2 ;
-(id)initWithURL:(id)arg1 objectClass:(Class)arg2 ;
-(void)didSendRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4 ;
-(void)didReceiveRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4 ;
-(void)didSendResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5 ;
-(void)didReceiveResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5 ;
-(void)didFinishSending:(id)arg1 ;
-(void)didReceiveError:(id)arg1 forMessageID:(id)arg2 ;
-(id)messageIDsForPendingOutgoingMessagesWithType:(int)arg1 deviceID:(id)arg2 ;
@end

