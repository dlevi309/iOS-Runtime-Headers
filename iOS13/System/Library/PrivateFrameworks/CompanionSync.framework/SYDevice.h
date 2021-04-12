/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/SYStateLoggable.h>

@class NRDevice, NSUUID, NSString, NSDate, PBCodable;

@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable> {

	NRDevice* _nrDevice;
	NSUUID* _pairingID;
	NSString* _pairingStorePath;
	NSString* _deviceClass;
	NSString* _systemVersion;
	NSString* _systemBuildVersion;
	NSDate* _lastActiveDate;
	BOOL _hasCachedNearby;
	BOOL _cachedIsNearby;
	BOOL _hasCachedConnected;
	BOOL _cachedConnected;
	long long _state;

}

@property (nonatomic,readonly) NRDevice * nrDevice;                               //@synthesize nrDevice=_nrDevice - In the implementation block
@property (assign,nonatomic) long long state;                                     //@synthesize state=_state - In the implementation block
@property (getter=isTargetable,nonatomic,readonly) BOOL targetable; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * pairingStorePath;                  //@synthesize pairingStorePath=_pairingStorePath - In the implementation block
@property (nonatomic,readonly) NSUUID * pairingID;                                //@synthesize pairingID=_pairingID - In the implementation block
@property (nonatomic,readonly) long long deviceCode; 
@property (nonatomic,readonly) NSString * deviceClass;                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                          //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) NSString * systemBuildVersion;                     //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,readonly) NSDate * lastActiveDate;                           //@synthesize lastActiveDate=_lastActiveDate - In the implementation block
@property (nonatomic,readonly) BOOL supportsFileTransferMessageSend; 
@property (assign,nonatomic) BOOL hasCachedNearby;                                //@synthesize hasCachedNearby=_hasCachedNearby - In the implementation block
@property (assign,nonatomic) BOOL cachedIsNearby;                                 //@synthesize cachedIsNearby=_cachedIsNearby - In the implementation block
@property (assign,nonatomic) BOOL hasCachedConnected;                             //@synthesize hasCachedConnected=_hasCachedConnected - In the implementation block
@property (assign,nonatomic) BOOL cachedConnected;                                //@synthesize cachedConnected=_cachedConnected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
+(id)targetableDevice;
+(id)knownDevices;
+(id)deviceForNRDevice:(id)arg1 ;
+(id)deviceForIDSDevice:(id)arg1 ;
+(id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(BOOL)isActive;
-(NSString *)systemVersion;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)deviceClass;
-(BOOL)isPaired;
-(NSUUID *)pairingID;
-(NSString *)systemBuildVersion;
-(NSString *)pairingStorePath;
-(PBCodable *)stateForLogging;
-(BOOL)isTargetable;
-(BOOL)supportsFileTransferMessageSend;
-(id)initWithNRDevice:(id)arg1 ;
-(NRDevice *)nrDevice;
-(void)_updateStateFlagsPostingNotifications:(BOOL)arg1 ;
-(void)_updateCachedStateForProperty:(id)arg1 ;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(long long)deviceCode;
-(id)findMatchingIDSDeviceFromList:(id)arg1 ;
-(NSDate *)lastActiveDate;
-(BOOL)hasCachedNearby;
-(void)setHasCachedNearby:(BOOL)arg1 ;
-(BOOL)cachedIsNearby;
-(void)setCachedIsNearby:(BOOL)arg1 ;
-(BOOL)hasCachedConnected;
-(void)setHasCachedConnected:(BOOL)arg1 ;
-(BOOL)cachedConnected;
-(void)setCachedConnected:(BOOL)arg1 ;
@end

