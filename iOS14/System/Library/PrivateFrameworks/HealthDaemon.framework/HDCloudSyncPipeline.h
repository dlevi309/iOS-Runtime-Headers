/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, HDCloudSyncCloudState, HDPowerAssertion, HDCloudSyncContext, HDCloudSyncRepository, NSUUID, NSObject, HDAssertion, CKOperationGroup, HDCloudSyncOperationConfiguration, NSProgress;

@interface HDCloudSyncPipeline : NSObject {

	NSMutableArray* _stages;
	NSString* _shortPipelineIdentifier;
	HDCloudSyncCloudState* _cloudState;
	long long _pipelineResult;
	NSString* _analyticsCloudKitIdentifier;
	HDPowerAssertion* _powerAssertion;
	BOOL _continueWhenSyncDisabled;
	long long _status;
	HDCloudSyncContext* _context;
	HDCloudSyncRepository* _repository;
	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _queue;
	HDAssertion* _accessibilityAssertion;
	CKOperationGroup* _operationGroup;
	HDCloudSyncOperationConfiguration* _operationConfiguration;
	NSProgress* _progress;
	/*^block*/id _pipelineCompletionHandler;

}

@property (nonatomic,readonly) long long status;                                                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) HDCloudSyncContext * context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) HDCloudSyncRepository * repository;                                      //@synthesize repository=_repository - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HDAssertion * accessibilityAssertion;                                    //@synthesize accessibilityAssertion=_accessibilityAssertion - In the implementation block
@property (nonatomic,retain) CKOperationGroup * operationGroup;                                         //@synthesize operationGroup=_operationGroup - In the implementation block
@property (nonatomic,readonly) HDCloudSyncOperationConfiguration * operationConfiguration;              //@synthesize operationConfiguration=_operationConfiguration - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                                   //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL continueWhenSyncDisabled;                                             //@synthesize continueWhenSyncDisabled=_continueWhenSyncDisabled - In the implementation block
@property (nonatomic,copy) id pipelineCompletionHandler;                                                //@synthesize pipelineCompletionHandler=_pipelineCompletionHandler - In the implementation block
+(id)operationGroupForContext:(id)arg1 syncCircleIdentifier:(id)arg2 ;
+(BOOL)_allowCellularForContext:(id)arg1 ;
+(long long)_qualityOfServiceForContext:(id)arg1 ;
-(NSProgress *)progress;
-(HDCloudSyncContext *)context;
-(id)description;
-(CKOperationGroup *)operationGroup;
-(HDCloudSyncOperationConfiguration *)operationConfiguration;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)identifier;
-(void)setOperationGroup:(CKOperationGroup *)arg1 ;
-(HDCloudSyncRepository *)repository;
-(long long)status;
-(void)dealloc;
-(HDAssertion *)accessibilityAssertion;
-(id)initForContext:(id)arg1 repository:(id)arg2 accessibilityAssertion:(id)arg3 queue:(id)arg4 ;
-(void)addStage:(id)arg1 ;
-(id)analyticsDictionary;
-(void)_powerAssertionDidTimeout;
-(void)_queue_computeConfigurationWithTaskTree:(id)arg1 ;
-(void)_queue_runStagesWithTaskTree:(id)arg1 ;
-(void)_queue_reportFinalAnalyticsWithTaskTree:(id)arg1 ;
-(id)beginWithTaskTree:(id)arg1 ;
-(void)_queue_computeStageTransferSizes;
-(void)_queue_runStage:(id)arg1 taskTree:(id)arg2 ;
-(id)beginWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)continueWhenSyncDisabled;
-(void)setContinueWhenSyncDisabled:(BOOL)arg1 ;
-(id)pipelineCompletionHandler;
-(void)setPipelineCompletionHandler:(id)arg1 ;
@end

