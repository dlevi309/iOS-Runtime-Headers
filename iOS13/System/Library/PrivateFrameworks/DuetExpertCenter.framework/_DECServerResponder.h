/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/_DECServerResponder.h>

@protocol _DECServerResponder <_DECServerInterface>
@required
-(void)restoreModels;
-(void)addServer:(id)arg1;
-(void)removeServer:(id)arg1;
-(void)trainExperts;
-(void)saveModels;

@end


@protocol OS_dispatch_queue, _DECRankBuilder;
@class NSObject, NSMutableArray, _DECFeedbackBuilder, _DECBackupHelper, _DECPredictionMap, _DECUpdatePredictionsNotification;

@interface _DECServerResponder : NSObject <_DECServerResponder> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _servers;
	opaque_pthread_rwlock_t _serversRWLock;
	_DECFeedbackBuilder* _feedbackBuilder;
	_DECBackupHelper* _backupHelper;
	_DECPredictionMap* _predictionsAwaitingFeedback;
	_DECUpdatePredictionsNotification* _updateNotification;
	id<_DECRankBuilder> _rankBuilder;

}

@property (nonatomic,retain) id<_DECRankBuilder> rankBuilder;              //@synthesize rankBuilder=_rankBuilder - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_consumers;
-(id)_experts;
-(void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(BOOL)arg5 reply:(/*^block*/id)arg6 ;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_setupFeedbackBuilder;
-(id)_validExperts;
-(void)restoreModels;
-(id)_validConsumers;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(BOOL)arg5 providesFeedback:(BOOL)arg6 reply:(/*^block*/id)arg7 ;
-(void)addServer:(id)arg1 ;
-(void)removeServer:(id)arg1 ;
-(void)trainExperts;
-(void)saveModels;
-(BOOL)is2GBOrLargerDevice;
-(BOOL)feedbackNewerThan:(double)arg1 ;
-(id<_DECRankBuilder>)rankBuilder;
-(void)setRankBuilder:(id<_DECRankBuilder>)arg1 ;
@end

