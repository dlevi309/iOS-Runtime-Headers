/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <AudioToolboxCore/AUParameterGroup.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, AUAudioUnit_XH, NSXPCConnection;

@interface AUParameterTree : AUParameterGroup <NSSecureCoding> {

	BOOL __autoCreatedForV2AU;
	BOOL __suppressObserverCallbacks;
	int _numRecorders;
	NSObject*<OS_dispatch_queue> _observationQueue;
	AUObserverController* _observerController;
	NSObject*<OS_dispatch_queue> _valueAccessQueue;
	AUAudioUnit_XH* __auXH;
	AURemoteParameterObserverRef _remoteObserverToken;
	AURemoteParameterObserverRef _remoteRecorderToken;
	NSXPCConnection* _remoteParameterSynchronizerXPCConnection;
	vector<AddressToParameter, std::__1::allocator<AddressToParameter> >* _addrToParamIndex;

}

@property (assign,nonatomic) vector<AddressToParameter addrToParamIndex;                                     //@synthesize addrToParamIndex=_addrToParamIndex - In the implementation block
@property (assign,nonatomic) BOOL _autoCreatedForV2AU;                                                       //@synthesize _autoCreatedForV2AU=__autoCreatedForV2AU - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observationQueue;                                //@synthesize observationQueue=_observationQueue - In the implementation block
@property (assign,nonatomic) AUObserverController* observerController;                                       //@synthesize observerController=_observerController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> valueAccessQueue;                                //@synthesize valueAccessQueue=_valueAccessQueue - In the implementation block
@property (assign,nonatomic,__weak) AUAudioUnit_XH * _auXH;                                                  //@synthesize _auXH=__auXH - In the implementation block
@property (assign,nonatomic) int numRecorders;                                                               //@synthesize numRecorders=_numRecorders - In the implementation block
@property (assign,nonatomic) AURemoteParameterObserverRef remoteObserverToken;                               //@synthesize remoteObserverToken=_remoteObserverToken - In the implementation block
@property (assign,nonatomic) AURemoteParameterObserverRef remoteRecorderToken;                               //@synthesize remoteRecorderToken=_remoteRecorderToken - In the implementation block
@property (assign,nonatomic) BOOL _suppressObserverCallbacks;                                                //@synthesize _suppressObserverCallbacks=__suppressObserverCallbacks - In the implementation block
@property (assign,nonatomic,__weak) NSXPCConnection * remoteParameterSynchronizerXPCConnection;              //@synthesize remoteParameterSynchronizerXPCConnection=_remoteParameterSynchronizerXPCConnection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createParameterWithIdentifier:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned)arg6 unitName:(id)arg7 flags:(unsigned)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10 ;
+(id)createGroupWithIdentifier:(id)arg1 name:(id)arg2 children:(id)arg3 ;
+(id)createGroupTemplate:(id)arg1 ;
+(id)createGroupFromTemplate:(id)arg1 identifier:(id)arg2 name:(id)arg3 addressOffset:(unsigned long long)arg4 ;
+(id)createTreeWithChildren:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)parameterWithAddress:(unsigned long long)arg1 ;
-(id)parameterWithID:(unsigned)arg1 scope:(unsigned)arg2 element:(unsigned)arg3 ;
-(void)remoteSyncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned)arg5 ;
-(void)setRemoteParameterSynchronizerXPCConnection:(NSXPCConnection *)arg1 ;
-(BOOL)_autoCreatedForV2AU;
-(void)set_suppressObserverCallbacks:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)observationQueue;
-(void)_checkInitTreeObservation;
-(void)_init2;
-(id)initWithChildren:(id)arg1 ;
-(vector<AddressToParameter)addrToParamIndex;
-(void)setAddrToParamIndex:(vector<AddressToParameter)arg1 ;
-(void)set_autoCreatedForV2AU:(BOOL)arg1 ;
-(AUObserverController*)observerController;
-(void)setObserverController:(AUObserverController*)arg1 ;
-(NSObject*<OS_dispatch_queue>)valueAccessQueue;
-(AUAudioUnit_XH *)_auXH;
-(void)set_auXH:(AUAudioUnit_XH *)arg1 ;
-(int)numRecorders;
-(void)setNumRecorders:(int)arg1 ;
-(AURemoteParameterObserverRef)remoteObserverToken;
-(void)setRemoteObserverToken:(AURemoteParameterObserverRef)arg1 ;
-(AURemoteParameterObserverRef)remoteRecorderToken;
-(void)setRemoteRecorderToken:(AURemoteParameterObserverRef)arg1 ;
-(BOOL)_suppressObserverCallbacks;
-(NSXPCConnection *)remoteParameterSynchronizerXPCConnection;
@end

