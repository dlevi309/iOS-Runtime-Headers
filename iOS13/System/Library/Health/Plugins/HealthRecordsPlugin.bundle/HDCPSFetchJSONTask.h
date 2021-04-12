/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@protocol OS_dispatch_group, NSCopying;
#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
@class NSObject, NSURLRequest, NSURLSession, NSError;

@interface HDCPSFetchJSONTask : NSObject {

	BOOL _resumed;
	atomic_flag _resumedFlag;
	NSObject*<OS_dispatch_group> _group;
	NSURLRequest* _request;
	NSURLSession* _session;
	NSError* _error;
	id<NSCopying> _JSONObject;
	long long _maxRetryCount;
	double _retryInterval;

}

@property (nonatomic,readonly) long long maxRetryCount;                    //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,readonly) double retryInterval;                       //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,copy,readonly) NSURLRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                     //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) id<NSCopying> JSONObject;              //@synthesize JSONObject=_JSONObject - In the implementation block
-(id)init;
-(void)waitUntilFinished;
-(NSError *)error;
-(void)resume;
-(NSURLSession *)session;
-(NSURLRequest *)request;
-(long long)maxRetryCount;
-(id<NSCopying>)JSONObject;
-(double)retryInterval;
-(id)initWithSession:(id)arg1 request:(id)arg2 ;
-(id)initWithSession:(id)arg1 request:(id)arg2 maxRetriesAllowed:(long long)arg3 retryInterval:(double)arg4 ;
-(void)_startTaskWithCompletion:(/*^block*/id)arg1 ;
-(void)_startTaskWithRetryCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorFromResponse:(id)arg1 ;
-(BOOL)_performRetryIfNeededForStatusCode:(long long)arg1 retryCount:(long long)arg2 retryHandler:(/*^block*/id)arg3 ;
@end

