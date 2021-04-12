/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol PKServiceDelegate, OS_dispatch_queue, OS_dispatch_source;
@class PKServicePersonality, NSXPCListener, NSMutableDictionary, NSObject, NSArray, NSString;

@interface PKService : NSObject <NSXPCListenerDelegate> {

	BOOL _shared;
	BOOL _isSystemService;
	unsigned _extensionPointPlatform;
	PKServicePersonality* _solePersonality;
	id<PKServiceDelegate> _delegate;
	NSXPCListener* _serviceListener;
	NSMutableDictionary* _personalities;
	NSObject*<OS_dispatch_queue> __sync;
	NSArray* _subsystems;
	NSObject*<OS_dispatch_source> _terminationTimer;
	NSObject*<OS_dispatch_source> _firstHostRequestTimer;

}

@property (assign) unsigned extensionPointPlatform;                                  //@synthesize extensionPointPlatform=_extensionPointPlatform - In the implementation block
@property (retain) NSXPCListener * serviceListener;                                  //@synthesize serviceListener=_serviceListener - In the implementation block
@property (retain) NSMutableDictionary * personalities;                              //@synthesize personalities=_personalities - In the implementation block
@property (retain) PKServicePersonality * solePersonality;                           //@synthesize solePersonality=_solePersonality - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> _sync;                               //@synthesize _sync=__sync - In the implementation block
@property (retain) NSArray * subsystems;                                             //@synthesize subsystems=_subsystems - In the implementation block
@property (assign) BOOL shared;                                                      //@synthesize shared=_shared - In the implementation block
@property (assign) BOOL isSystemService;                                             //@synthesize isSystemService=_isSystemService - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> terminationTimer;                   //@synthesize terminationTimer=_terminationTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> firstHostRequestTimer;              //@synthesize firstHostRequestTimer=_firstHostRequestTimer - In the implementation block
@property (retain) id<PKServiceDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)main;
+(int)_defaultRun:(int)arg1 arguments:(const char**)arg2 ;
+(id)defaultService;
-(unsigned)extensionPointPlatform;
-(void)setShared:(BOOL)arg1 ;
-(BOOL)shared;
-(void)checkIn;
-(id)personalityNamed:(id)arg1 ;
-(void)run;
-(id)init;
-(id<PKServiceDelegate>)delegate;
-(BOOL)unregisterPersonality:(id)arg1 ;
-(void)setSolePersonality:(PKServicePersonality *)arg1 ;
-(void)checkEnvironment:(id)arg1 ;
-(void)setIsSystemService:(BOOL)arg1 ;
-(id)defaultsForPlugInNamed:(id)arg1 ;
-(PKServicePersonality *)solePersonality;
-(id)configuredSubsystemList;
-(id)discoverSubsystemNamed:(id)arg1 options:(id)arg2 logMissing:(BOOL)arg3 ;
-(void)beganUsingServicePersonality:(id)arg1 ;
-(void)setSubsystems:(NSArray *)arg1 ;
-(NSXPCListener *)serviceListener;
-(id)connectionForPlugInNamed:(id)arg1 ;
-(void)setDelegate:(id<PKServiceDelegate>)arg1 ;
-(void)cancelTermination;
-(void)mergeSubsystems:(id)arg1 from:(id)arg2 ;
-(NSObject*<OS_dispatch_source>)firstHostRequestTimer;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSMutableDictionary *)personalities;
-(void)setFirstHostRequestTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_prepareToRun;
-(void)setPersonalities:(NSMutableDictionary *)arg1 ;
-(void)setServiceListener:(NSXPCListener *)arg1 ;
-(void)mergeSubsystemList:(id)arg1 from:(id)arg2 ;
-(void)scheduleTermination:(double)arg1 ;
-(void)discoverSubsystems;
-(NSArray *)subsystems;
-(void)setTerminationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setExtensionPointPlatform:(unsigned)arg1 ;
-(BOOL)isSystemService;
-(NSObject*<OS_dispatch_source>)terminationTimer;
-(id)hostPrincipalForPlugInNamed:(id)arg1 ;
-(id)plugInPrincipalForPlugInNamed:(id)arg1 ;
-(BOOL)_processDefaultSubsystemName:(id)arg1 ;
-(void)launchContainingApplicationForPlugInNamed:(id)arg1 ;
-(id)personalityNamed:(id)arg1 forHostPid:(int)arg2 ;
-(id)embeddedPrincipalForPlugInNamed:(id)arg1 ;
-(void)registerPersonality:(id)arg1 ;
-(void)set_sync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)_sync;
-(void)copyAppStoreReceipt:(/*^block*/id)arg1 ;
@end

