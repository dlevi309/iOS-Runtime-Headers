/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EFSQLExpressable;
@class EDMessagePersistence, _EDThreadPersistence_SQLHelper;

@interface _EDThreadPersistence_ThreadScope : NSObject {

	BOOL _didCreateTempScopeView;
	EDMessagePersistence* _messagePersistence;
	long long _threadScopeDatabaseID;
	id<EFSQLExpressable> _threadScopeExpression;
	_EDThreadPersistence_SQLHelper* _sqlHelper;

}

@property (nonatomic,readonly) id<EFSQLExpressable> threadScopeExpression;              //@synthesize threadScopeExpression=_threadScopeExpression - In the implementation block
@property (nonatomic,readonly) _EDThreadPersistence_SQLHelper * sqlHelper;              //@synthesize sqlHelper=_sqlHelper - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;               //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) long long threadScopeDatabaseID;                         //@synthesize threadScopeDatabaseID=_threadScopeDatabaseID - In the implementation block
-(EDMessagePersistence *)messagePersistence;
-(long long)threadScopeDatabaseID;
-(id)initWithCache:(id)arg1 messagePersistence:(id)arg2 threadScopeDatabaseID:(long long)arg3 threadScopeExpression:(id)arg4 ;
-(id)createMessagesWithThreadObjectID:(id)arg1 wrappedMessages:(id)arg2 ;
-(_EDThreadPersistence_SQLHelper *)sqlHelper;
-(void)dropTemporaryView;
-(void)_ensureTempScopeView;
-(id<EFSQLExpressable>)threadScopeExpression;
@end

