/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSObject, WPClient, NSString, NSData;

@interface SFBluetoothPairingSession : NSObject {

	char _btAddrStr[32];
	BOOL _btConfigured;
	BOOL _btConnecting;
	BTDeviceImplRef _btDevice;
	BOOL _btDisconnected;
	BTPairingAgentImplRef _btPairingAgent;
	BOOL _btPairingAgentStarted;
	BTSessionImplRef _btSession;
	BOOL _btSessionAddedServiceCallback;
	BOOL _btSessionAttaching;
	BOOL _btStarted;
	BOOL _invalidateCalled;
	unsigned _retryCount;
	BOOL _retryOnDetach;
	NSObject*<OS_dispatch_source> _retryTimer;
	double _startTime;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSObject*<OS_os_transaction> _transaction;
	LogCategory* _ucat;
	WPClient* _wpClient;
	BOOL _aggregate;
	BOOL _connectOnly;
	BOOL _disconnectOnly;
	BOOL _guestMode;
	BOOL _softwareVolume;
	BOOL _userNotInContacts;
	unsigned _deviceVersion;
	/*^block*/id _completionHandler;
	NSString* _deviceAddress;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _guestAddress;
	NSData* _guestKey;
	NSString* _name;

}

@property (assign,nonatomic) BOOL aggregate;                                          //@synthesize aggregate=_aggregate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL connectOnly;                                        //@synthesize connectOnly=_connectOnly - In the implementation block
@property (nonatomic,copy) NSString * deviceAddress;                                  //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,readonly) unsigned deviceVersion;                                //@synthesize deviceVersion=_deviceVersion - In the implementation block
@property (assign,nonatomic) BOOL disconnectOnly;                                     //@synthesize disconnectOnly=_disconnectOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) NSString * guestAddress;                                   //@synthesize guestAddress=_guestAddress - In the implementation block
@property (nonatomic,copy) NSData * guestKey;                                         //@synthesize guestKey=_guestKey - In the implementation block
@property (assign,nonatomic) BOOL guestMode;                                          //@synthesize guestMode=_guestMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL softwareVolume;                                   //@synthesize softwareVolume=_softwareVolume - In the implementation block
@property (assign,nonatomic) BOOL userNotInContacts;                                  //@synthesize userNotInContacts=_userNotInContacts - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_activate;
-(NSString *)name;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)activate;
-(int)_btEnsureStarted;
-(void)_btEnsureStopped;
-(void)_completed:(int)arg1 ;
-(BOOL)aggregate;
-(void)setAggregate:(BOOL)arg1 ;
-(NSString *)deviceAddress;
-(void)setDeviceAddress:(NSString *)arg1 ;
-(void)_btDeletePairingAndRetry;
-(BOOL)connectOnly;
-(void)setConnectOnly:(BOOL)arg1 ;
-(unsigned)deviceVersion;
-(BOOL)disconnectOnly;
-(void)setDisconnectOnly:(BOOL)arg1 ;
-(NSString *)guestAddress;
-(void)setGuestAddress:(NSString *)arg1 ;
-(NSData *)guestKey;
-(void)setGuestKey:(NSData *)arg1 ;
-(BOOL)guestMode;
-(void)setGuestMode:(BOOL)arg1 ;
-(BOOL)softwareVolume;
-(BOOL)userNotInContacts;
-(void)setUserNotInContacts:(BOOL)arg1 ;
@end

