/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDCloudSyncPipelineStage.h>

@class NSSet;

@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage {

	BOOL _removeAllParticipants;
	NSSet* _participantsToRemove;

}

@property (assign,nonatomic) BOOL removeAllParticipants;              //@synthesize removeAllParticipants=_removeAllParticipants - In the implementation block
@property (nonatomic,copy) NSSet * participantsToRemove;              //@synthesize participantsToRemove=_participantsToRemove - In the implementation block
-(void)main;
-(void)setParticipantsToRemove:(NSSet *)arg1 ;
-(void)setRemoveAllParticipants:(BOOL)arg1 ;
-(id)_delegateToOperationForRemoveSharingParticipants:(id)arg1 ;
-(BOOL)removeAllParticipants;
-(NSSet *)participantsToRemove;
@end

