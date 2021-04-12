/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@protocol OS_dispatch_queue, _DECExpertDelegate;
@class NSXPCConnection, NSObject, _DECBackupHelper, PETGoalConversionEventTracker, PETDistributionEventTracker, PETScalarEventTracker, NSString;

@interface _DECExpert : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	_DECBackupHelper* _backupHelper;
	PETGoalConversionEventTracker* _predictionResultTracker;
	PETDistributionEventTracker* _predictionTimeTracker;
	PETScalarEventTracker* _saveModelTracker;
	PETScalarEventTracker* _restoreModelTracker;
	unsigned long long _category;
	NSString* _identifier;
	id<_DECExpertDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long category;                         //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<_DECExpertDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<_DECExpertDelegate>)delegate;
-(void)setDelegate:(id<_DECExpertDelegate>)arg1 ;
-(NSString *)identifier;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)receiveFeedback:(id)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)trainWithReply:(/*^block*/id)arg1 ;
-(void)saveModelWithByteLimit:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)restoreModelWithReply:(/*^block*/id)arg1 ;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(id)initWithCategory:(unsigned long long)arg1 identifier:(id)arg2 ;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 ;
@end

