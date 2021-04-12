/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSyncMessageHandler.h>

@class HDSyncSession, HDSyncAnchorMap, NSMutableArray, NSError;

@interface HDDaemonSyncMessageHandler : NSObject <HDSyncMessageHandler> {

	Class _syncEntityClass;
	HDSyncAnchorRange _anchorRange;
	HDSyncSession* _session;
	HDSyncAnchorMap* _requiredAnchorMap;
	BOOL _done;
	long long _nextSequence;
	NSMutableArray* _changes;
	long long _accumulatedChangeSetSize;
	long long _lastAnchor;
	long long _currentAnchor;
	long long _sendChangesStatus;
	NSError* _sendChangesError;

}

@property (nonatomic,readonly) long long currentAnchor;                      //@synthesize currentAnchor=_currentAnchor - In the implementation block
@property (nonatomic,readonly) long long sendChangesStatus;                  //@synthesize sendChangesStatus=_sendChangesStatus - In the implementation block
@property (nonatomic,copy,readonly) NSError * sendChangesError;              //@synthesize sendChangesError=_sendChangesError - In the implementation block
+(long long)_sendChanges:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(long long)currentAnchor;
-(void)dealloc;
-(BOOL)sendCodableChange:(id)arg1 resultAnchor:(long long)arg2 sequence:(long long)arg3 done:(BOOL)arg4 error:(id*)arg5 ;
-(id)initWithSyncEntityClass:(Class)arg1 anchorRange:(HDSyncAnchorRange)arg2 session:(id)arg3 requiredAnchorMap:(id)arg4 ;
-(long long)sendChangesStatus;
-(NSError *)sendChangesError;
-(BOOL)_sendChangesWithError:(id*)arg1 ;
@end
