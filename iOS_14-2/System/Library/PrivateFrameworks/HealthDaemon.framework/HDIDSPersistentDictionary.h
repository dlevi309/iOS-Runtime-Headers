/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSURL, HDSQLiteDatabase;

@interface HDIDSPersistentDictionary : NSObject {

	Class _objectClass;
	NSURL* _databaseURL;
	HDSQLiteDatabase* _database;

}
-(void)didReceiveRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4 ;
-(void)_handleError:(id)arg1 format:(id)arg2 ;
-(id)_objectFromData:(id)arg1 ;
-(void)_recordMappingOfRequest:(id)arg1 toResponse:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)_createSchemaWithError:(id*)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 expires:(double)arg3 ;
-(id)_dataFromObject:(id)arg1 ;
-(void)_obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 generateStackshot:(BOOL)arg3 ;
-(void)didReceiveError:(id)arg1 forMessageID:(id)arg2 ;
-(void)enumerateObjectsSortedByExpirationDate:(/*^block*/id)arg1 ;
-(void)didSendRequest:(id)arg1 deviceID:(id)arg2 type:(int)arg3 length:(long long)arg4 ;
-(id)initWithURL:(id)arg1 objectClass:(Class)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)didReceiveResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5 ;
-(void)invalidate;
-(BOOL)_reallyOpenDB;
-(void)_recordMessage:(id)arg1 deviceID:(id)arg2 type:(int)arg3 outgoing:(BOOL)arg4 request:(BOOL)arg5 length:(long long)arg6 ;
-(void)didFinishSending:(id)arg1 ;
-(id)messageIDsForPendingOutgoingMessagesWithType:(int)arg1 deviceID:(id)arg2 ;
-(void)obliterateWithReason:(id)arg1 preserveCopy:(BOOL)arg2 ;
-(void)didCancel:(id)arg1 ;
-(BOOL)_openDB;
-(void)dealloc;
-(void)didSendResponse:(id)arg1 toRequest:(id)arg2 deviceID:(id)arg3 type:(int)arg4 length:(long long)arg5 ;
@end

