/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@protocol DKExtensionRegistry, OS_dispatch_queue;
@class NSString, NSObject, NSCondition, NSSet;

@interface DKExtensionDiscovery : NSObject {

	BOOL _discoveryComplete;
	id<DKExtensionRegistry> _registry;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _discoveryQueue;
	NSCondition* _discoveryLock;
	NSSet* _services;

}

@property (nonatomic,retain) id<DKExtensionRegistry> registry;                         //@synthesize registry=_registry - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> discoveryQueue;              //@synthesize discoveryQueue=_discoveryQueue - In the implementation block
@property (nonatomic,retain) NSCondition * discoveryLock;                              //@synthesize discoveryLock=_discoveryLock - In the implementation block
@property (assign,nonatomic) BOOL discoveryComplete;                                   //@synthesize discoveryComplete=_discoveryComplete - In the implementation block
@property (nonatomic,retain) NSSet * services;                                         //@synthesize services=_services - In the implementation block
+(id)discoveryUsingExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(id)arg3 ;
-(NSSet *)services;
-(NSCondition *)discoveryLock;
-(void)setServices:(NSSet *)arg1 ;
-(void)waitUntilComplete;
-(NSString *)bundleIdentifier;
-(void)_beginExtensionDiscovery;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id<DKExtensionRegistry>)registry;
-(void)setRegistry:(id<DKExtensionRegistry>)arg1 ;
-(void)setDiscoveryLock:(NSCondition *)arg1 ;
-(id)initWithExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)setDiscoveryComplete:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)discoveryQueue;
-(void)_registerExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)discoveryComplete;
-(void)setDiscoveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

