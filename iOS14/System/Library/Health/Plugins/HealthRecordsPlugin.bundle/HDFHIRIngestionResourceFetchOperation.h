/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@protocol OS_dispatch_group;
@class HDFHIRResourceSchema, NSURL, NSData, NSError, NSObject, HDFHIRCredentialedSession;

@interface HDFHIRIngestionResourceFetchOperation : HDClinicalIngestionPerAccountOperation {

	long long _queryMode;
	HDFHIRResourceSchema* _resourceSchema;
	/*^block*/id _fetchResultsHandler;
	NSURL* _fullRequestURL;
	NSURL* _effectiveRequestURL;
	NSData* _fetchedData;
	NSError* _fetchError;
	NSObject*<OS_dispatch_group> _fetchGroup;
	HDFHIRCredentialedSession* _session;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> fetchGroup;              //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,readonly) HDFHIRCredentialedSession * session;                  //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSURL * fullRequestURL;                                   //@synthesize fullRequestURL=_fullRequestURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * effectiveRequestURL;                     //@synthesize effectiveRequestURL=_effectiveRequestURL - In the implementation block
@property (nonatomic,copy,readonly) NSData * fetchedData;                            //@synthesize fetchedData=_fetchedData - In the implementation block
@property (nonatomic,readonly) NSError * fetchError;                                 //@synthesize fetchError=_fetchError - In the implementation block
+(id)_schemaVariableBindingsWithLastFetchDate:(id)arg1 ;
+(id)FHIRDateStringFromDate:(id)arg1 ;
+(id)FHIRDateTimeStringFromDate:(id)arg1 ;
-(NSError *)fetchError;
-(HDFHIRCredentialedSession *)session;
-(void)main;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(long long)_defaultRetryCount;
-(NSURL *)fullRequestURL;
-(void)_performFetchWithURL:(id)arg1 retryCount:(long long)arg2 ;
-(void)_accumulateResponseTimeMetricWithTaskState:(id)arg1 ;
-(void)_handleTaskCompletedWithData:(id)arg1 ;
-(void)_accumulateRequestFailureMetricWithTaskState:(id)arg1 ;
-(void)_handleTaskError:(id)arg1 retryCount:(long long)arg2 ;
-(id)_schemaVariableBindings;
-(id)initWithTask:(id)arg1 account:(id)arg2 nextOperation:(id)arg3 session:(id)arg4 queryMode:(long long)arg5 resourceSchema:(id)arg6 fetchResultsHandler:(/*^block*/id)arg7 ;
-(void)setFullRequestURL:(NSURL *)arg1 ;
-(NSURL *)effectiveRequestURL;
-(NSData *)fetchedData;
@end

