/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <VoiceShortcuts/VCCompanionSyncSession.h>

@class NSMutableArray, NSDictionary;

@interface VCCompanionSyncOutgoingSession : VCCompanionSyncSession {

	NSMutableArray* _pendingChanges;
	NSDictionary* _metadata;
	NSMutableArray* _sentChanges;
	NSMutableArray* _syncedChanges;

}

@property (nonatomic,copy,readonly) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingChanges;                                       //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sentChanges;                                          //@synthesize sentChanges=_sentChanges - In the implementation block
@property (nonatomic,readonly) NSMutableArray * syncedChanges;                                        //@synthesize syncedChanges=_syncedChanges - In the implementation block
@property (assign,nonatomic,__weak) id<VCCompanionSyncOutgoingSessionDelegate> delegate; 
@property (nonatomic,readonly) double progress; 
+(long long)direction;
-(double)progress;
-(NSDictionary *)metadata;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)syncSession:(id)arg1 successfullySynced:(id)arg2 ;
-(NSMutableArray *)pendingChanges;
-(id)initWithSYSession:(id)arg1 service:(id)arg2 syncDataHandlers:(id)arg3 changeSet:(id)arg4 metadata:(id)arg5 ;
-(NSMutableArray *)sentChanges;
-(NSMutableArray *)syncedChanges;
@end

