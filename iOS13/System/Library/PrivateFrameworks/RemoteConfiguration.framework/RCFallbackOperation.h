/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <RemoteConfiguration/RCOperation.h>

@protocol OS_dispatch_queue;
@class NSString, NSURL, RCConfigurationResource, NSObject;

@interface RCFallbackOperation : RCOperation {

	BOOL _enableExtraLogs;
	NSString* _requestKey;
	NSURL* _fallbackURL;
	RCConfigurationResource* _cachedConfigurationResource;
	unsigned long long _environment;
	/*^block*/id _configurationCompletionHandler;
	NSObject*<OS_dispatch_queue> _completionQueue;
	RCConfigurationResource* _configurationResource;

}

@property (nonatomic,retain) RCConfigurationResource * configurationResource;                    //@synthesize configurationResource=_configurationResource - In the implementation block
@property (nonatomic,retain) NSString * requestKey;                                              //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,retain) NSURL * fallbackURL;                                                //@synthesize fallbackURL=_fallbackURL - In the implementation block
@property (nonatomic,retain) RCConfigurationResource * cachedConfigurationResource;              //@synthesize cachedConfigurationResource=_cachedConfigurationResource - In the implementation block
@property (assign,nonatomic) unsigned long long environment;                                     //@synthesize environment=_environment - In the implementation block
@property (assign,nonatomic) BOOL enableExtraLogs;                                               //@synthesize enableExtraLogs=_enableExtraLogs - In the implementation block
@property (nonatomic,copy) id configurationCompletionHandler;                                    //@synthesize configurationCompletionHandler=_configurationCompletionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                       //@synthesize completionQueue=_completionQueue - In the implementation block
-(unsigned long long)environment;
-(void)setEnvironment:(unsigned long long)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)performOperation;
-(NSString *)requestKey;
-(NSURL *)fallbackURL;
-(BOOL)enableExtraLogs;
-(void)_fetchConfigurationWithURL:(id)arg1 requestKey:(id)arg2 enableExtraLogs:(BOOL)arg3 ;
-(id)configurationCompletionHandler;
-(RCConfigurationResource *)configurationResource;
-(RCConfigurationResource *)cachedConfigurationResource;
-(void)setConfigurationResource:(RCConfigurationResource *)arg1 ;
-(void)_parseFallbackResponse:(id)arg1 fallbackURL:(id)arg2 requestKey:(id)arg3 enableExtraLogs:(BOOL)arg4 maxAge:(id)arg5 etag:(id)arg6 lastModifiedString:(id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setConfigurationCompletionHandler:(id)arg1 ;
-(void)setRequestKey:(NSString *)arg1 ;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setFallbackURL:(NSURL *)arg1 ;
-(void)setCachedConfigurationResource:(RCConfigurationResource *)arg1 ;
-(void)setEnableExtraLogs:(BOOL)arg1 ;
@end

