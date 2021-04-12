/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <libobjc.A.dylib/NSObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NEIKEv2PacketTunnelProvider, NSObject, NWInterface, NSString;

@interface NEIKEv2MOBIKE : NSObject <NSObject> {

	BOOL _mobikeInProgress;
	BOOL _mobikePending;
	BOOL _mobikeReasserting;
	BOOL _mobikeEarlyDisconnect;
	NEIKEv2PacketTunnelProvider* _tunnelProvider;
	NSObject*<OS_dispatch_source> _mobikeWaitTimer;
	NSObject*<OS_dispatch_queue> _mobikeQueue;
	NWInterface* _mobikeInterface;
	NWInterface* _mobikeTransportInterface;
	long long _mobikePathStatus;
	unsigned long long _mobikeTries;
	NSString* _mobikeServer;

}

@property (__weak) NEIKEv2PacketTunnelProvider * tunnelProvider;               //@synthesize tunnelProvider=_tunnelProvider - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> mobikeWaitTimer;              //@synthesize mobikeWaitTimer=_mobikeWaitTimer - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> mobikeQueue;                   //@synthesize mobikeQueue=_mobikeQueue - In the implementation block
@property (retain) NWInterface * mobikeInterface;                              //@synthesize mobikeInterface=_mobikeInterface - In the implementation block
@property (retain) NWInterface * mobikeTransportInterface;                     //@synthesize mobikeTransportInterface=_mobikeTransportInterface - In the implementation block
@property (assign) long long mobikePathStatus;                                 //@synthesize mobikePathStatus=_mobikePathStatus - In the implementation block
@property (assign) unsigned long long mobikeTries;                             //@synthesize mobikeTries=_mobikeTries - In the implementation block
@property (retain) NSString * mobikeServer;                                    //@synthesize mobikeServer=_mobikeServer - In the implementation block
@property (assign) BOOL mobikeInProgress;                                      //@synthesize mobikeInProgress=_mobikeInProgress - In the implementation block
@property (assign) BOOL mobikePending;                                         //@synthesize mobikePending=_mobikePending - In the implementation block
@property (assign) BOOL mobikeReasserting;                                     //@synthesize mobikeReasserting=_mobikeReasserting - In the implementation block
@property (assign) BOOL mobikeEarlyDisconnect;                                 //@synthesize mobikeEarlyDisconnect=_mobikeEarlyDisconnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithQueue:(id)arg1 tunnelProvider:(id)arg2 ;
-(void)initiateMOBIKE:(unsigned long long)arg1 pathStatus:(long long)arg2 serverAddress:(id)arg3 earlyDisconnect:(BOOL)arg4 ;
-(NSObject*<OS_dispatch_source>)mobikeWaitTimer;
-(void)mobikeStopWaitTimer;
-(BOOL)mobikeReasserting;
-(NSObject*<OS_dispatch_queue>)mobikeQueue;
-(void)mobikeReassert;
-(void)mobikeStartWaitTimer;
-(void)setMobikeWaitTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)mobikeDisconnect;
-(void)setMobikeInterface:(NWInterface *)arg1 ;
-(void)setMobikeServer:(NSString *)arg1 ;
-(void)setMobikePending:(BOOL)arg1 ;
-(void)setMobikePathStatus:(long long)arg1 ;
-(void)setMobikeReasserting:(BOOL)arg1 ;
-(NEIKEv2PacketTunnelProvider *)tunnelProvider;
-(void)setMobikeInProgress:(BOOL)arg1 ;
-(unsigned long long)mobikeTries;
-(NWInterface *)mobikeInterface;
-(NWInterface *)mobikeTransportInterface;
-(void)setMobikeTries:(unsigned long long)arg1 ;
-(void)setMobikeTransportInterface:(NWInterface *)arg1 ;
-(BOOL)mobikeEarlyDisconnect;
-(void)setMobikeEarlyDisconnect:(BOOL)arg1 ;
-(BOOL)mobikePending;
-(NSString *)mobikeServer;
-(BOOL)startMOBIKE:(id)arg1 ;
-(long long)mobikePathStatus;
-(BOOL)mobikeReadyCheck:(unsigned long long)arg1 pathStatus:(long long)arg2 mobikeServer:(id)arg3 ;
-(BOOL)mobikeInProgress;
-(void)setTunnelProvider:(NEIKEv2PacketTunnelProvider *)arg1 ;
-(void)setMobikeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
