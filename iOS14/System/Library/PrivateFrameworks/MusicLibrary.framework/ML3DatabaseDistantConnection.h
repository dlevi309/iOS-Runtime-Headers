/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3DatabaseConnection.h>

@protocol ML3DatabaseDistantConnectionDelegate;
@class MLMediaLibraryService, NSUUID;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {

	MLMediaLibraryService* _mediaLibraryService;
	NSUUID* _currentTransactionID;
	BOOL _connectionOpen;
	id<ML3DatabaseDistantConnectionDelegate> _distantDelegate;

}

@property (assign,nonatomic,__weak) id<ML3DatabaseDistantConnectionDelegate> distantDelegate;              //@synthesize distantDelegate=_distantDelegate - In the implementation block
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(id)openBlobInTable:(id)arg1 column:(id)arg2 row:(long long)arg3 readOnly:(BOOL)arg4 ;
-(id)_internalExecuteQuery:(id)arg1 withParameters:(id)arg2 limitProperty:(id)arg3 limitValue:(long long)arg4 ;
-(BOOL)isOpen;
-(BOOL)close;
-(sqlite3Ref)_sqliteHandle;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 isRetry:(BOOL)arg2 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)registerModule:(id)arg1 ;
-(void)setProfilingLevel:(int)arg1 ;
-(id<ML3DatabaseDistantConnectionDelegate>)distantDelegate;
-(void)_serviceTerminatedTransactionNotification:(id)arg1 ;
-(BOOL)_internalEndTransactionAndCommit:(BOOL)arg1 ;
-(BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)arg1 ;
-(id)currentTransactionID;
-(BOOL)_openWithFlags:(int)arg1 ;
-(BOOL)_internalExecuteUpdate:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setDistantDelegate:(id<ML3DatabaseDistantConnectionDelegate>)arg1 ;
-(BOOL)registerFunctionName:(id)arg1 argumentCount:(int)arg2 functionPointer:(/*function pointer*/void*)arg3 userData:(void*)arg4 ;
-(int)checkpointDatabase;
-(id)initWithDatabasePath:(id)arg1 ;
-(BOOL)shouldCacheStatements;
-(void)dealloc;
@end

