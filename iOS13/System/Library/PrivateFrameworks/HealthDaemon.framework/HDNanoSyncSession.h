/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSyncSession.h>

@class HDSyncPredicate, HDNanoSyncStore;

@interface HDNanoSyncSession : HDSyncSession {

	unsigned long long _options;
	HDSyncPredicate* _syncPredicate;
	/*^block*/id _completion;
	unsigned long long _messageCount;

}

@property (nonatomic,readonly) HDNanoSyncStore * nanoSyncStore; 
@property (getter=isPullRequest,nonatomic,readonly) BOOL pullRequest; 
@property (getter=isRequestedByRemote,nonatomic,readonly) BOOL requestedByRemote; 
@property (getter=isLastChance,nonatomic,readonly) BOOL lastChance; 
@property (nonatomic,copy,readonly) id completion;                                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) unsigned long long messageCount;                                //@synthesize messageCount=_messageCount - In the implementation block
-(id)completion;
-(unsigned long long)messageCount;
-(long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1 ;
-(id)initWithSyncStore:(id)arg1 options:(unsigned long long)arg2 reason:(id)arg3 delegate:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)isLastChance;
-(void)incrementMessageCount;
-(id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3 ;
-(BOOL)isPullRequest;
-(BOOL)isRequestedByRemote;
-(void)invokeCompletionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)syncPredicate;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)_syncPredicate;
-(HDNanoSyncStore *)nanoSyncStore;
-(id)_intervalForSecondsSinceDaysAgo:(unsigned long long)arg1 ;
@end

