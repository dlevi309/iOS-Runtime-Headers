/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol HDSyncMessageHandler;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDProfile, HDSQLiteDatabase, HDDataProvenanceCache, HDEntityEncoder, HDSyncSession, NSArray;

@interface _HDDataEntitySyncMessageBuilder : NSObject {

	HDProfile* _profile;
	HDSQLiteDatabase* _database;
	Class _entityClass;
	HDDataProvenanceCache* _provenanceCache;
	HDEntityEncoder* _entityEncoder;
	id<HDSyncMessageHandler> _messageHandler;
	long long _currentEncodedBytes;
	BOOL _hasSentObject;
	BOOL _didSendFinal;
	long long _maxEncodedBytesPerMessage;
	long long _lastSyncAnchor;
	HDSyncSession* _syncSession;

}

@property (nonatomic,readonly) long long maxEncodedBytesPerMessage;              //@synthesize maxEncodedBytesPerMessage=_maxEncodedBytesPerMessage - In the implementation block
@property (nonatomic,readonly) long long currentEncodedBytes;                    //@synthesize currentEncodedBytes=_currentEncodedBytes - In the implementation block
@property (nonatomic,readonly) long long lastSyncAnchor;                         //@synthesize lastSyncAnchor=_lastSyncAnchor - In the implementation block
@property (nonatomic,readonly) NSArray * orderedProperties; 
@property (nonatomic,readonly) HDSyncSession * syncSession;                      //@synthesize syncSession=_syncSession - In the implementation block
-(HDSyncSession *)syncSession;
-(NSArray *)orderedProperties;
-(id)initWithProfile:(id)arg1 database:(id)arg2 entityClass:(Class)arg3 bytesPerMessage:(long long)arg4 syncSession:(id)arg5 messageHandler:(id)arg6 ;
-(long long)addEntity:(id)arg1 properties:(id)arg2 row:(HDSQLiteRowRef)arg3 anchor:(long long)arg4 index:(unsigned long long)arg5 error:(id*)arg6 ;
-(BOOL)finishAndFlush:(BOOL)arg1 error:(id*)arg2 ;
-(id)_provenanceForID:(id)arg1 error:(id*)arg2 ;
-(BOOL)_sendCurrentCollectionWithAnchor:(long long)arg1 final:(BOOL)arg2 error:(id*)arg3 ;
-(long long)maxEncodedBytesPerMessage;
-(long long)currentEncodedBytes;
-(long long)lastSyncAnchor;
@end

