/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSString, HDProfile, HDCloudSyncOperationConfiguration, NSProgress, NSUUID, HDCloudSyncCloudState;

@interface HDCloudSyncOperation : NSObject <NSProgressReporting> {

	os_unfair_lock_s _lock;
	/*^block*/id _onSuccess;
	/*^block*/id _onError;
	double _startTime;
	double _endTime;
	NSString* _shortOperationIdentifier;
	HDProfile* _profile;
	HDCloudSyncOperationConfiguration* _configuration;
	NSProgress* _progress;
	long long _status;
	NSUUID* _identifier;
	HDCloudSyncCloudState* _cloudState;

}

@property (nonatomic,readonly) HDProfile * profile;                                            //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDCloudSyncOperationConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (retain) HDCloudSyncCloudState * cloudState;                                         //@synthesize cloudState=_cloudState - In the implementation block
@property (copy) id onSuccess; 
@property (copy) id onError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)progressCount;
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
+(BOOL)shouldLogAtOperationEnd;
+(/*^block*/id)unitTest_operationHandler;
+(void)unitTest_setOperationHandler:(/*^block*/id)arg1 ;
+(void)unitTest_clearAllOperationHandlers;
-(NSProgress *)progress;
-(id)init;
-(void)start;
-(NSString *)description;
-(HDCloudSyncOperationConfiguration *)configuration;
-(void)main;
-(void)skip;
-(HDProfile *)profile;
-(id)onError;
-(BOOL)finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(NSUUID *)identifier;
-(void)setCloudState:(HDCloudSyncCloudState *)arg1 ;
-(HDCloudSyncCloudState *)cloudState;
-(long long)status;
-(void)setOnError:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)setOnSuccess:(id)arg1 ;
-(id)operationIgnoringErrors;
-(void)delegateToOperation:(id)arg1 ;
-(id)analyticsDictionary;
-(void)updateCompletedProgressCount:(long long)arg1 ;
-(id)operationWithRunCondition:(/*^block*/id)arg1 ;
-(void)chainFromOperation:(id)arg1 transitionHandler:(/*^block*/id)arg2 ;
-(double)_lock_currentDuration;
-(id)initWithPreceedingOperation:(id)arg1 transitionHandler:(/*^block*/id)arg2 ;
-(id)onSuccess;
@end

