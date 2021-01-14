/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCategory:(unsigned long long)arg1 ;
-(id)init;
-(void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 reply:(/*^block*/id)arg5 ;
-(id<_DECExpertDelegate>)delegate;
-(void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 ;
-(void)receiveFeedback:(id)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)restoreModelWithReply:(/*^block*/id)arg1 ;
-(unsigned long long)category;
-(void)setDelegate:(id<_DECExpertDelegate>)arg1 ;
-(void)trainWithReply:(/*^block*/id)arg1 ;
-(void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)saveModelWithByteLimit:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)identifier;
-(id)initWithCategory:(unsigned long long)arg1 identifier:(id)arg2 ;
@end

