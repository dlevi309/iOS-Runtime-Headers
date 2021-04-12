/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol GKLockStatusObserver;
@class NSString, GKEventEmitter;

@interface GKDevice : NSObject {

	NSString* _udid;
	NSString* _deviceName;
	NSString* _osVersion;
	NSString* _buildVersion;
	NSString* _gameKitVersion;
	BOOL _gameKitAvailable;
	GKEventEmitter*<GKLockStatusObserver> _emitter;

}

@property (nonatomic,retain) GKEventEmitter*<GKLockStatusObserver> emitter;                  //@synthesize emitter=_emitter - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                          //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * udid; 
@property (nonatomic,readonly) NSString * osVersion;                                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                                      //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * gameKitVersion;                                    //@synthesize gameKitVersion=_gameKitVersion - In the implementation block
@property (getter=isGameKitAvailable,nonatomic,readonly) BOOL gameKitAvailable;              //@synthesize gameKitAvailable=_gameKitAvailable - In the implementation block
+(id)currentDevice;
-(NSString *)deviceName;
-(NSString *)udid;
-(id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2 ;
-(void)setEmitter:(GKEventEmitter*<GKLockStatusObserver>)arg1 ;
-(id)init;
-(void)stopObservingKeyBagStatus;
-(void)beginObservingKeyBagStatusWithCallback:(/*function pointer*/void*)arg1 ;
-(NSString *)osVersion;
-(BOOL)isGameKitAvailable;
-(id)_platformUDID;
-(BOOL)isDevelopmentDevice;
-(void)_initPlatform;
-(void)addLockStatusObserver:(id)arg1 ;
-(id)platformBuildVersion;
-(void)removeLockStatusObserver:(id)arg1 ;
-(NSString *)gameKitVersion;
-(id)protocolVersionHeader;
-(NSString *)buildVersion;
-(id)buildVersionHeader;
-(BOOL)isProductType:(unsigned)arg1 ;
-(BOOL)isFocusDevice;
-(id)userAgent;
-(GKEventEmitter*<GKLockStatusObserver>)emitter;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)storeUserAgent;
-(id)processNameHeader;
-(void)dealloc;
@end

