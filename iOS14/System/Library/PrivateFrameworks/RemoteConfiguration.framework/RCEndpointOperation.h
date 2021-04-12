/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <RemoteConfiguration/RCOperation.h>

@protocol OS_dispatch_queue;
@class RCConfigurationSettings, NSDictionary, NSURL, NSObject;

@interface RCEndpointOperation : RCOperation {

	RCConfigurationSettings* _configurationSettings;
	NSDictionary* _changeTagsByRequestKey;
	NSURL* _endpointURL;
	/*^block*/id _configurationCompletionHandler;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSDictionary* _configurationResourcesByRequestKey;

}

@property (nonatomic,retain) NSDictionary * configurationResourcesByRequestKey;              //@synthesize configurationResourcesByRequestKey=_configurationResourcesByRequestKey - In the implementation block
@property (nonatomic,retain) RCConfigurationSettings * configurationSettings;                //@synthesize configurationSettings=_configurationSettings - In the implementation block
@property (nonatomic,retain) NSDictionary * changeTagsByRequestKey;                          //@synthesize changeTagsByRequestKey=_changeTagsByRequestKey - In the implementation block
@property (nonatomic,retain) NSURL * endpointURL;                                            //@synthesize endpointURL=_endpointURL - In the implementation block
@property (nonatomic,copy) id configurationCompletionHandler;                                //@synthesize configurationCompletionHandler=_configurationCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
-(BOOL)validateOperation;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)canRetryWithError:(id)arg1 retryAfter:(id*)arg2 ;
-(unsigned long long)maxRetries;
-(void)resetForRetry;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSURL *)endpointURL;
-(void)setConfigurationCompletionHandler:(id)arg1 ;
-(id)configurationCompletionHandler;
-(RCConfigurationSettings *)configurationSettings;
-(void)setConfigurationSettings:(RCConfigurationSettings *)arg1 ;
-(void)setEndpointURL:(NSURL *)arg1 ;
-(void)_fetchConfigurationWithSettings:(id)arg1 ;
-(NSDictionary *)configurationResourcesByRequestKey;
-(id)requestDataForSettings:(id)arg1 ;
-(void)setConfigurationResourcesByRequestKey:(NSDictionary *)arg1 ;
-(void)_parseEndpointResponse:(id)arg1 configurationSettings:(id)arg2 maxAge:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSDictionary *)changeTagsByRequestKey;
-(id)_configurationErrorForErrorDicts:(id)arg1 ;
-(void)setChangeTagsByRequestKey:(NSDictionary *)arg1 ;
@end

