/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFIntentDynamicResolverDataSource, INCExtensionProxy;
@class NSString, INCExtensionConnection, NSMutableSet;

@interface WFIntentDynamicResolver : NSObject {

	NSString* _intentKeyPathToResolve;
	unsigned long long _state;
	id<WFIntentDynamicResolverDataSource> _dataSource;
	INCExtensionConnection* _extensionConnection;
	id<INCExtensionProxy> _extensionProxy;
	NSMutableSet* _activeRequests;

}

@property (nonatomic,readonly) INCExtensionConnection * extensionConnection;                         //@synthesize extensionConnection=_extensionConnection - In the implementation block
@property (nonatomic,readonly) id<INCExtensionProxy> extensionProxy;                                 //@synthesize extensionProxy=_extensionProxy - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeRequests;                                          //@synthesize activeRequests=_activeRequests - In the implementation block
@property (nonatomic,copy,readonly) NSString * intentKeyPathToResolve;                               //@synthesize intentKeyPathToResolve=_intentKeyPathToResolve - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,__weak,readonly) id<WFIntentDynamicResolverDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)failWithError:(id)arg1 ;
-(unsigned long long)state;
-(void)endSession;
-(id)intent;
-(id<WFIntentDynamicResolverDataSource>)dataSource;
-(id<INCExtensionProxy>)extensionProxy;
-(NSMutableSet *)activeRequests;
-(void)setActiveRequests:(NSMutableSet *)arg1 ;
-(id)initWithIntentKeyPathToResolve:(id)arg1 dataSource:(id)arg2 ;
-(void)beginSessionWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)resolveWithUserInput:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)populatedSkeletonIntentWithUserInput:(id)arg1 forKeyPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(NSString *)intentKeyPathToResolve;
-(INCExtensionConnection *)extensionConnection;
@end

