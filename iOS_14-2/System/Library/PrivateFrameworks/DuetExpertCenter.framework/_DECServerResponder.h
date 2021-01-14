/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/_DECServerResponder.h>

@protocol _DECServerResponder <_DECServerInterface>
@required
-(void)removeServer:(id)arg1;
-(void)addServer:(id)arg1;
-(void)trainExperts;
-(void)restoreModels;
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
-(void)removeServer:(id)arg1 ;
-(void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_setupFeedbackBuilder;
-(id)init;
-(void)addServer:(id)arg1 ;
-(void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(BOOL)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)is2GBOrLargerDevice;
-(void)trainExperts;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(id)_experts;
-(void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)setRankBuilder:(id<_DECRankBuilder>)arg1 ;
-(void)restoreModels;
-(id)_consumers;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(id)_validExperts;
-(id<_DECRankBuilder>)rankBuilder;
-(void)saveModels;
-(id)_validConsumers;
-(void)dealloc;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(BOOL)arg5 providesFeedback:(BOOL)arg6 reply:(/*^block*/id)arg7 ;
@end

