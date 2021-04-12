/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol PKServiceDelegate, OS_dispatch_queue, OS_dispatch_source;
@class PKServicePersonality, NSXPCListener, NSMutableDictionary, NSObject, NSArray, NSString;

@interface PKService : NSObject <NSXPCListenerDelegate> {

	BOOL _shared;
	BOOL _isSystemService;
	PKServicePersonality* _solePersonality;
	id<PKServiceDelegate> _delegate;
	NSXPCListener* _serviceListener;
	NSMutableDictionary* _personalities;
	NSObject*<OS_dispatch_queue> __sync;
	NSArray* _subsystems;
	NSObject*<OS_dispatch_source> _terminationTimer;
	NSObject*<OS_dispatch_source> _firstHostRequestTimer;

}

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
+(id)defaultService;
+(void)main;
+(int)_defaultRun:(int)arg1 arguments:(const char**)arg2 ;
-(id)init;
-(void)run;
-(id<PKServiceDelegate>)delegate;
-(void)setDelegate:(id<PKServiceDelegate>)arg1 ;
-(void)checkIn;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)_sync;
-(NSXPCListener *)serviceListener;
-(BOOL)shared;
-(void)setShared:(BOOL)arg1 ;
-(NSArray *)subsystems;
-(void)registerPersonality:(id)arg1 ;
-(void)beganUsingServicePersonality:(id)arg1 ;
-(BOOL)unregisterPersonality:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)firstHostRequestTimer;
-(void)setFirstHostRequestTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setPersonalities:(NSMutableDictionary *)arg1 ;
-(void)set_sync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_prepareToRun;
-(void)checkEnvironment:(id)arg1 ;
-(void)setServiceListener:(NSXPCListener *)arg1 ;
-(void)discoverSubsystems;
-(id)configuredSubsystemList;
-(BOOL)isSystemService;
-(id)discoverSubsystemNamed:(id)arg1 options:(id)arg2 logMissing:(BOOL)arg3 ;
-(BOOL)_processDefaultSubsystemName:(id)arg1 ;
-(void)setSubsystems:(NSArray *)arg1 ;
-(void)mergeSubsystems:(id)arg1 from:(id)arg2 ;
-(void)mergeSubsystemList:(id)arg1 from:(id)arg2 ;
-(void)setIsSystemService:(BOOL)arg1 ;
-(id)personalityNamed:(id)arg1 ;
-(NSMutableDictionary *)personalities;
-(PKServicePersonality *)solePersonality;
-(void)setSolePersonality:(PKServicePersonality *)arg1 ;
-(NSObject*<OS_dispatch_source>)terminationTimer;
-(void)setTerminationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)launchContainingApplicationForPlugInNamed:(id)arg1 ;
-(void)copyAppStoreReceipt:(/*^block*/id)arg1 ;
-(id)defaultsForPlugInNamed:(id)arg1 ;
-(id)plugInPrincipalForPlugInNamed:(id)arg1 ;
-(id)hostPrincipalForPlugInNamed:(id)arg1 ;
-(id)embeddedPrincipalForPlugInNamed:(id)arg1 ;
-(id)connectionForPlugInNamed:(id)arg1 ;
-(id)personalityNamed:(id)arg1 forHostPid:(int)arg2 ;
-(void)scheduleTermination:(double)arg1 ;
-(void)cancelTermination;
@end

