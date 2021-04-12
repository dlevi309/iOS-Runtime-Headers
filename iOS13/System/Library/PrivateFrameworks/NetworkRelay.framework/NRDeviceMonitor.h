/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/


@protocol OS_dispatch_queue, NRDeviceMonitorDelegate, OS_xpc_object;
#import <NetworkRelay/NetworkRelay-Structs.h>
@class NRDeviceIdentifier, NSObject;

@interface NRDeviceMonitor : NSObject {

	BOOL _didIssueFirstUpdate;
	BOOL _internalIsRegistered;
	BOOL _internalIsEnabled;
	BOOL _internalIsNearby;
	BOOL _internalIsConnected;
	BOOL _internalIsCloudConnected;
	BOOL _internalIsAsleep;
	BOOL _internalIsClassCConnected;
	unsigned char _internalLinkType;
	os_unfair_lock_s _lock;
	NRDeviceIdentifier* _internalDeviceIdentifier;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<NRDeviceMonitorDelegate> _delegate;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NRDeviceIdentifier * internalDeviceIdentifier;              //@synthesize internalDeviceIdentifier=_internalDeviceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL didIssueFirstUpdate;                                   //@synthesize didIssueFirstUpdate=_didIssueFirstUpdate - In the implementation block
@property (assign,nonatomic) BOOL internalIsRegistered;                                  //@synthesize internalIsRegistered=_internalIsRegistered - In the implementation block
@property (assign,nonatomic) BOOL internalIsEnabled;                                     //@synthesize internalIsEnabled=_internalIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL internalIsNearby;                                      //@synthesize internalIsNearby=_internalIsNearby - In the implementation block
@property (assign,nonatomic) BOOL internalIsConnected;                                   //@synthesize internalIsConnected=_internalIsConnected - In the implementation block
@property (assign,nonatomic) BOOL internalIsCloudConnected;                              //@synthesize internalIsCloudConnected=_internalIsCloudConnected - In the implementation block
@property (assign,nonatomic) BOOL internalIsAsleep;                                      //@synthesize internalIsAsleep=_internalIsAsleep - In the implementation block
@property (assign,nonatomic) BOOL internalIsClassCConnected;                             //@synthesize internalIsClassCConnected=_internalIsClassCConnected - In the implementation block
@property (assign,nonatomic) unsigned char internalLinkType;                             //@synthesize internalLinkType=_internalLinkType - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                 //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic,__weak) id<NRDeviceMonitorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;                        //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                      //@synthesize lock=_lock - In the implementation block
@property (nonatomic,readonly) NRDeviceIdentifier * deviceIdentifier; 
@property (nonatomic,readonly) BOOL isRegistered; 
@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isCloudConnected; 
@property (nonatomic,readonly) BOOL isAsleep; 
@property (nonatomic,readonly) unsigned char linkType; 
@property (nonatomic,readonly) BOOL isClassCConnected; 
-(void)dealloc;
-(BOOL)isRegistered;
-(id<NRDeviceMonitorDelegate>)delegate;
-(void)setDelegate:(id<NRDeviceMonitorDelegate>)arg1 ;
-(os_unfair_lock_s)lock;
-(BOOL)start;
-(NSObject*<OS_xpc_object>)connection;
-(BOOL)isEnabled;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(NRDeviceIdentifier *)deviceIdentifier;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(BOOL)isConnected;
-(BOOL)isCloudConnected;
-(BOOL)isNearby;
-(unsigned char)linkType;
-(BOOL)isAsleep;
-(id)initWithDeviceIdentifier:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)setInternalIsRegistered:(BOOL)arg1 ;
-(void)setInternalIsEnabled:(BOOL)arg1 ;
-(void)setInternalIsNearby:(BOOL)arg1 ;
-(void)setInternalIsConnected:(BOOL)arg1 ;
-(void)setInternalIsCloudConnected:(BOOL)arg1 ;
-(void)setInternalIsAsleep:(BOOL)arg1 ;
-(void)setInternalIsClassCConnected:(BOOL)arg1 ;
-(void)setInternalLinkType:(unsigned char)arg1 ;
-(BOOL)isClassCConnected;
-(void)updateStateFromResponse:(id)arg1 ;
-(void)checkInWithRetryCount:(unsigned)arg1 ;
-(NRDeviceIdentifier *)internalDeviceIdentifier;
-(void)setInternalDeviceIdentifier:(NRDeviceIdentifier *)arg1 ;
-(BOOL)didIssueFirstUpdate;
-(void)setDidIssueFirstUpdate:(BOOL)arg1 ;
-(BOOL)internalIsRegistered;
-(BOOL)internalIsEnabled;
-(BOOL)internalIsNearby;
-(BOOL)internalIsConnected;
-(BOOL)internalIsCloudConnected;
-(BOOL)internalIsAsleep;
-(BOOL)internalIsClassCConnected;
-(unsigned char)internalLinkType;
@end

