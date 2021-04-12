/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSyncMessageHandler.h>

@class HDSyncSession, HDSyncAnchorMap, NSError;

@interface HDDaemonSyncMessageHandler : NSObject <HDSyncMessageHandler> {

	Class _syncEntityClass;
	HDSyncAnchorRange _anchorRange;
	HDSyncSession* _session;
	HDSyncAnchorMap* _requiredAnchorMap;
	long long _nextSequence;
	long long _currentAnchor;
	long long _sendChangesStatus;
	NSError* _sendChangesError;

}

@property (nonatomic,readonly) long long currentAnchor;                      //@synthesize currentAnchor=_currentAnchor - In the implementation block
@property (nonatomic,readonly) long long sendChangesStatus;                  //@synthesize sendChangesStatus=_sendChangesStatus - In the implementation block
@property (nonatomic,copy,readonly) NSError * sendChangesError;              //@synthesize sendChangesError=_sendChangesError - In the implementation block
-(long long)currentAnchor;
-(BOOL)sendCodableObjects:(id)arg1 resultAnchor:(long long)arg2 done:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithSyncEntityClass:(Class)arg1 anchorRange:(HDSyncAnchorRange)arg2 session:(id)arg3 requiredAnchorMap:(id)arg4 ;
-(long long)sendChangesStatus;
-(NSError *)sendChangesError;
-(long long)_sendChanges:(id)arg1 error:(id*)arg2 ;
@end

