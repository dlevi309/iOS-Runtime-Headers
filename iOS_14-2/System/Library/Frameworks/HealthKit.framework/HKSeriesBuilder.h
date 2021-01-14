/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKSeriesBuilderClientInterface.h>

@protocol OS_dispatch_queue;
@class HKTaskServerProxyProvider, HKRetryableOperation, NSUUID, HKSeriesBuilderConfiguration, HKHealthStore, NSObject, NSString;

@interface HKSeriesBuilder : NSObject <_HKXPCExportable, HKSeriesBuilderClientInterface> {

	Ai _state;
	HKTaskServerProxyProvider* _proxyProvider;
	HKRetryableOperation* _retryableOperation;
	NSUUID* _identifier;
	HKSeriesBuilderConfiguration* _configuration;
	HKHealthStore* _store;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                        //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,retain) HKRetryableOperation * retryableOperation;                        //@synthesize retryableOperation=_retryableOperation - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) HKSeriesBuilderConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) HKHealthStore * store;                                          //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> resourceQueue;                     //@synthesize resourceQueue=_resourceQueue - In the implementation block
@property (assign) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskServerIdentifier;
+(void)configureClientInterface:(id)arg1 ;
+(id)serverInterface;
+(id)clientInterface;
+(void)configureServerInterface:(id)arg1 ;
-(void)connectionInvalidated;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)_initWithHealthStore:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 ;
-(id)init;
-(HKHealthStore *)store;
-(id)exportedInterface;
-(void)discard;
-(id)remoteInterface;
-(NSString *)description;
-(HKSeriesBuilderConfiguration *)configuration;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(HKRetryableOperation *)retryableOperation;
-(void)_resourceQueue_discardWithHandler:(/*^block*/id)arg1 ;
-(void)setRetryableOperation:(HKRetryableOperation *)arg1 ;
-(void)clientRemote_didChangeToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resourceQueue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(NSUUID *)identifier;
-(void)freezeBuilderWithCompletion:(/*^block*/id)arg1 ;
-(void)recoverWithCompletion:(/*^block*/id)arg1 ;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
@end

