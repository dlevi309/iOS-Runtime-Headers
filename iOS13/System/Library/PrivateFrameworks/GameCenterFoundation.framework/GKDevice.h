/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(id)userAgent;
-(NSString *)buildVersion;
-(NSString *)osVersion;
-(NSString *)udid;
-(BOOL)isGameKitAvailable;
-(void)setEmitter:(GKEventEmitter*<GKLockStatusObserver>)arg1 ;
-(GKEventEmitter*<GKLockStatusObserver>)emitter;
-(void)_initPlatform;
-(void)beginObservingKeyBagStatusWithCallback:(/*function pointer*/void*)arg1 ;
-(id)_platformUDID;
-(void)stopObservingKeyBagStatus;
-(id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2 ;
-(id)processNameHeader;
-(NSString *)gameKitVersion;
-(id)storeUserAgent;
-(id)protocolVersionHeader;
-(id)buildVersionHeader;
-(id)platformBuildVersion;
-(void)addLockStatusObserver:(id)arg1 ;
-(void)removeLockStatusObserver:(id)arg1 ;
-(BOOL)isDevelopmentDevice;
-(BOOL)isFocusDevice;
-(BOOL)isProductType:(unsigned)arg1 ;
@end

