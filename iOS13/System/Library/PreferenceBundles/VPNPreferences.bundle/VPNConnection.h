/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <VPNPreferences/VPNPreferences-Structs.h>
@class NSUUID, NSObject, NSArray, NSString, NSNumber, NSMutableArray;

@interface VPNConnection : NSObject {

	BOOL _enabled;
	BOOL _isPrimary;
	BOOL _useRSASecurID;
	BOOL _isProviderAvailable;
	int _session_status;
	NSUUID* _serviceID;
	void* _session;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timerSource;
	unsigned long long _grade;
	NSArray* _sessionIPAddresses;
	NSString* _sessionRemoteAddress;
	NSNumber* _sessionConnectTime;
	NSNumber* _lastStopCause;
	NSMutableArray* _matchDomains;
	NSMutableArray* _subConnections;
	NSString* _accountName;
	NSString* _server;
	id _certificate;
	NSString* _password;
	NSString* _sharedSecret;
	unsigned long long _vpnConnectionType;
	NSString* _displayName;
	long long _onDemandAction;

}

@property (assign) BOOL enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (retain) NSUUID * serviceID;                                     //@synthesize serviceID=_serviceID - In the implementation block
@property (assign) void* session;                                          //@synthesize session=_session - In the implementation block
@property (assign) int session_status;                                     //@synthesize session_status=_session_status - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (assign) unsigned long long grade;                               //@synthesize grade=_grade - In the implementation block
@property (retain) NSArray * sessionIPAddresses;                           //@synthesize sessionIPAddresses=_sessionIPAddresses - In the implementation block
@property (retain) NSString * sessionRemoteAddress;                        //@synthesize sessionRemoteAddress=_sessionRemoteAddress - In the implementation block
@property (retain) NSNumber * sessionConnectTime;                          //@synthesize sessionConnectTime=_sessionConnectTime - In the implementation block
@property (retain) NSNumber * lastStopCause;                               //@synthesize lastStopCause=_lastStopCause - In the implementation block
@property (retain) NSMutableArray * matchDomains;                          //@synthesize matchDomains=_matchDomains - In the implementation block
@property (assign) BOOL isPrimary;                                         //@synthesize isPrimary=_isPrimary - In the implementation block
@property (retain) NSMutableArray * subConnections;                        //@synthesize subConnections=_subConnections - In the implementation block
@property (readonly) NSString * accountName;                               //@synthesize accountName=_accountName - In the implementation block
@property (readonly) NSString * server;                                    //@synthesize server=_server - In the implementation block
@property (retain) id certificate;                                         //@synthesize certificate=_certificate - In the implementation block
@property (assign) BOOL useRSASecurID;                                     //@synthesize useRSASecurID=_useRSASecurID - In the implementation block
@property (retain) NSString * password;                                    //@synthesize password=_password - In the implementation block
@property (retain) NSString * sharedSecret;                                //@synthesize sharedSecret=_sharedSecret - In the implementation block
@property (readonly) unsigned long long vpnConnectionType;                 //@synthesize vpnConnectionType=_vpnConnectionType - In the implementation block
@property (readonly) unsigned long long status; 
@property (readonly) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
@property (assign) long long onDemandAction;                               //@synthesize onDemandAction=_onDemandAction - In the implementation block
@property (assign) BOOL isProviderAvailable;                               //@synthesize isProviderAvailable=_isProviderAvailable - In the implementation block
+(id)statusTextForStatus:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)password;
-(unsigned long long)status;
-(void)setPassword:(NSString *)arg1 ;
-(BOOL)disconnected;
-(void)disconnect;
-(NSString *)displayName;
-(id)certificate;
-(NSString *)server;
-(void*)session;
-(void)setSession:(void*)arg1 ;
-(NSString *)accountName;
-(CFStringRef)vpnType;
-(void)connect;
-(id)remoteAddress;
-(BOOL)connected;
-(unsigned long long)grade;
-(void)setGrade:(unsigned long long)arg1 ;
-(BOOL)isPrimary;
-(void)setIsPrimary:(BOOL)arg1 ;
-(id)statusText;
-(NSUUID *)serviceID;
-(void)setCertificate:(id)arg1 ;
-(id)tunnelType;
-(NSMutableArray *)matchDomains;
-(void)setMatchDomains:(NSMutableArray *)arg1 ;
-(NSString *)sharedSecret;
-(void)setSharedSecret:(NSString *)arg1 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(void)setServiceID:(NSUUID *)arg1 ;
-(void)updateWithOptions:(id)arg1 ;
-(long long)onDemandAction;
-(void)setOnDemandAction:(long long)arg1 ;
-(NSMutableArray *)subConnections;
-(void)setLastStopCause:(NSNumber *)arg1 ;
-(void)setSessionConnectTime:(NSNumber *)arg1 ;
-(void)setSessionIPAddresses:(NSArray *)arg1 ;
-(void)setSessionRemoteAddress:(NSString *)arg1 ;
-(void)setSession_status:(int)arg1 ;
-(NSArray *)sessionIPAddresses;
-(NSString *)sessionRemoteAddress;
-(NSNumber *)sessionConnectTime;
-(id)connectTimeForSubConnection:(unsigned long long)arg1 ;
-(unsigned long long)elapsedTimeSinceStartTime:(id)arg1 ;
-(id)convertTimeToString:(unsigned long long)arg1 ;
-(unsigned long long)vpnConnectionType;
-(int)session_status;
-(BOOL)isProviderAvailable;
-(NSNumber *)lastStopCause;
-(id)initWithServiceID:(id)arg1 options:(id)arg2 ;
-(unsigned long long)subConnectionCount;
-(id)ipAddressesForSubConnection:(unsigned long long)arg1 ;
-(id)remoteAddressForSubConnection:(unsigned long long)arg1 ;
-(id)interfaceTypeForSubConnection:(unsigned long long)arg1 ;
-(id)elapsedTimeLocalizedStringForSubConnection:(unsigned long long)arg1 ;
-(id)_fullOptions;
-(id)vpnTypeLocalizedString;
-(BOOL)notDisconnectedOrDisconnecting;
-(id)alertText;
-(id)elapsedTimeLocalizedString;
-(id)ipAddresses;
-(void)setSubConnections:(NSMutableArray *)arg1 ;
-(BOOL)useRSASecurID;
-(void)setUseRSASecurID:(BOOL)arg1 ;
-(void)setIsProviderAvailable:(BOOL)arg1 ;
@end

