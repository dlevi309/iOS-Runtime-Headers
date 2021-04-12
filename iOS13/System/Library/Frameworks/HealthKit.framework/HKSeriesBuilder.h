/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKSeriesBuilderClientInterface.h>

@protocol OS_dispatch_queue;
@class HKTaskServerProxyProvider, NSUUID, HKSeriesBuilderConfiguration, HKHealthStore, NSObject, NSString;

@interface HKSeriesBuilder : NSObject <_HKXPCExportable, HKSeriesBuilderClientInterface> {

	Ai _state;
	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _identifier;
	HKSeriesBuilderConfiguration* _configuration;
	HKHealthStore* _store;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSObject*<OS_dispatch_queue> _resourceQueue;

}

@property (nonatomic,retain) HKTaskServerProxyProvider * proxyProvider;                        //@synthesize proxyProvider=_proxyProvider - In the implementation block
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
+(id)serverInterface;
+(id)clientInterface;
+(void)configureClientInterface:(id)arg1 ;
+(id)taskServerIdentifier;
+(void)configureServerInterface:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSUUID *)identifier;
-(long long)state;
-(id)exportedInterface;
-(HKHealthStore *)store;
-(void)setState:(long long)arg1 ;
-(HKSeriesBuilderConfiguration *)configuration;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)_resourceQueue_addMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)resourceQueue;
-(void)freezeBuilderWithCompletion:(/*^block*/id)arg1 ;
-(void)recoverWithCompletion:(/*^block*/id)arg1 ;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)setProxyProvider:(HKTaskServerProxyProvider *)arg1 ;
-(id)_initWithHealthStore:(id)arg1 identifier:(id)arg2 configuration:(id)arg3 ;
-(void)discard;
-(void)_resourceQueue_discardWithHandler:(/*^block*/id)arg1 ;
-(void)clientRemote_didChangeToState:(long long)arg1 ;
@end

