/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/WiFiPeerToPeer
*/

#import <WiFiPeerToPeer/WiFiAwareDatapathXPCDelegate.h>

@protocol OS_dispatch_queue, WiFiAwareDatapathXPC, WiFiAwareDataSessionDelegate;
@class NSXPCConnection, NSObject, NSNumber, WiFiMACAddress, WiFiAwareDiscoveryResult, WiFiAwarePublishDatapathServiceSpecificInfo, NSString, NSData;

@interface WiFiAwareDataSession : NSObject <WiFiAwareDatapathXPCDelegate> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _datapathID;
	WiFiMACAddress* _initiatorDataAddress;
	id<WiFiAwareDatapathXPC> _datapathProxy;
	unsigned _localInterfaceIndex;
	WiFiAwareDiscoveryResult* _discoveryResult;
	long long _serviceType;
	WiFiAwarePublishDatapathServiceSpecificInfo* _serviceSpecificInfo;
	NSString* _passphrase;
	NSData* _pmk;
	id<WiFiAwareDataSessionDelegate> _delegate;

}

@property (nonatomic,readonly) WiFiAwareDiscoveryResult * discoveryResult;                                     //@synthesize discoveryResult=_discoveryResult - In the implementation block
@property (nonatomic,readonly) long long serviceType;                                                          //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) WiFiAwarePublishDatapathServiceSpecificInfo * serviceSpecificInfo;              //@synthesize serviceSpecificInfo=_serviceSpecificInfo - In the implementation block
@property (nonatomic,readonly) NSString * passphrase;                                                          //@synthesize passphrase=_passphrase - In the implementation block
@property (nonatomic,readonly) NSData * pmk;                                                                   //@synthesize pmk=_pmk - In the implementation block
@property (assign,nonatomic,__weak) id<WiFiAwareDataSessionDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WiFiMACAddress * localDataAddress; 
@property (nonatomic,readonly) unsigned localInterfaceIndex;                                                   //@synthesize localInterfaceIndex=_localInterfaceIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConnected;
-(NSData *)pmk;
-(id<WiFiAwareDataSessionDelegate>)delegate;
-(void)start;
-(void)stop;
-(unsigned)localInterfaceIndex;
-(void)reportIssue:(id)arg1 ;
-(void)setDelegate:(id<WiFiAwareDataSessionDelegate>)arg1 ;
-(NSString *)description;
-(WiFiAwareDiscoveryResult *)discoveryResult;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 ;
-(void)resetState;
-(WiFiAwarePublishDatapathServiceSpecificInfo *)serviceSpecificInfo;
-(long long)serviceType;
-(NSString *)passphrase;
-(void)dealloc;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4 pmk:(id)arg5 ;
-(void)datapathStartedWithInstanceID:(unsigned char)arg1 initiatorDataAddress:(id)arg2 localInterfaceIndex:(unsigned)arg3 ;
-(void)datapathFailedToStartWithError:(long long)arg1 ;
-(void)datapathConfirmedForPeerDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 ;
-(void)datapathReceivedControlDataAddress:(id)arg1 serviceSpecificInfo:(id)arg2 onInterfaceIndex:(unsigned)arg3 ;
-(void)datapathTerminatedWithReason:(long long)arg1 ;
-(void)handleError;
-(void)startDatapathSync;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 passphrase:(id)arg4 ;
-(id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 serviceSpecificInfo:(id)arg3 pmk:(id)arg4 ;
-(WiFiMACAddress *)localDataAddress;
@end

