/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSSet *)services;
-(void)waitUntilComplete;
-(void)setServices:(NSSet *)arg1 ;
-(id<DKExtensionRegistry>)registry;
-(void)setRegistry:(id<DKExtensionRegistry>)arg1 ;
-(NSObject*<OS_dispatch_queue>)discoveryQueue;
-(void)setDiscoveryQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSCondition *)discoveryLock;
-(void)setDiscoveryLock:(NSCondition *)arg1 ;
-(void)_beginExtensionDiscovery;
-(id)initWithExtensionRegistry:(id)arg1 services:(id)arg2 bundleIdentifier:(id)arg3 ;
-(void)setDiscoveryComplete:(BOOL)arg1 ;
-(void)_registerExtensions:(id)arg1 error:(id)arg2 ;
-(BOOL)discoveryComplete;
@end

