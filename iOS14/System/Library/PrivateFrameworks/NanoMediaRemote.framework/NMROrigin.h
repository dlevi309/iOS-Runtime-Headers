/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@protocol OS_dispatch_queue;
@class NSObject, MPAVRoute, NSString, NSNumber;

@interface NMROrigin : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MPAVRoute* _route;
	void* _mediaRemoteOrigin;
	unsigned long long _connectionState;
	void* _deviceInfo;
	NSString* _cachedDisplayName;

}

@property (nonatomic,readonly) MPAVRoute * route; 
@property (nonatomic,readonly) void* mediaRemoteOrigin; 
@property (nonatomic,readonly) void* deviceInfo;                                //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSNumber * uniqueIdentifier; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isCompanion; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long connectionState; 
@property (nonatomic,readonly) NSString * deviceIdentifier; 
@property (nonatomic,readonly) long long logicalDeviceCount; 
-(BOOL)isCompanion;
-(BOOL)isLocal;
-(NSString *)deviceIdentifier;
-(void*)deviceInfo;
-(unsigned long long)connectionState;
-(MPAVRoute *)route;
-(id)init;
-(NSNumber *)uniqueIdentifier;
-(id)description;
-(unsigned long long)type;
-(id)initWithRoute:(id)arg1 ;
-(NSString *)displayName;
-(void)dealloc;
-(void)_handleRouteConnectionDidConnectNotification:(id)arg1 ;
-(void)_handleRouteConnectionDidInvalidateNotification:(id)arg1 ;
-(void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1 ;
-(void)_updateConnectionState;
-(id)initWithOrigin:(void*)arg1 deviceInfo:(void*)arg2 ;
-(void*)mediaRemoteOrigin;
-(long long)logicalDeviceCount;
-(void)updateRoute:(id)arg1 ;
-(void)updateOrigin:(void*)arg1 deviceInfo:(void*)arg2 ;
-(id)playerPathWithBundleID:(id)arg1 playerID:(id)arg2 ;
@end

