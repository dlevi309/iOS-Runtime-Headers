/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/CLSClientDelegate.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking> {

	os_unfair_recursive_lock_s _lock;
	NSXPCConnection* _serverConnection;
	NSXPCListenerEndpoint* _endpoint;
	BOOL _connectionBorked;
	BOOL _interrupted;
	int _progressdAvailableToken;
	int _devModeChangedToken;
	NSString* _overrideBundleIdentifier;
	/*^block*/id _onInterupt;
	/*^block*/id _onConnect;

}

@property (nonatomic,copy) NSString * overrideBundleIdentifier;              //@synthesize overrideBundleIdentifier=_overrideBundleIdentifier - In the implementation block
@property (nonatomic,copy) id onInterupt;                                    //@synthesize onInterupt=_onInterupt - In the implementation block
@property (nonatomic,copy) id onConnect;                                     //@synthesize onConnect=_onConnect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)classKitEnvironment;
+(BOOL)isInDevelopmentEnvironment;
+(id)instanceForEndpoint:(id)arg1 ;
+(BOOL)isClassKitEnabled;
+(BOOL)isAllowedToMakeXPCCalls;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)lock;
-(void)unlock;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)connect;
-(void)connectionInterrupted:(id)arg1 ;
-(id)serverConnection;
-(void)_registerForDarwinNotifications;
-(void)setOnInterupt:(id)arg1 ;
-(void)setOnConnect:(id)arg1 ;
-(id)dataServer:(/*^block*/id)arg1 ;
-(id)syncDataServer:(/*^block*/id)arg1 ;
-(NSString *)overrideBundleIdentifier;
-(id)utilityServer:(/*^block*/id)arg1 ;
-(id)syncUtilityServer:(/*^block*/id)arg1 ;
-(void)devModeChanged;
-(BOOL)isBorked;
-(void)connectionBorked:(id)arg1 ;
-(void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)syncServer:(/*^block*/id)arg1 ;
-(id)server:(/*^block*/id)arg1 ;
-(void)listAppsWithCompletion:(/*^block*/id)arg1 ;
-(void)setOverrideBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountChanged;
-(void)setOverrideBundleIdentifier:(NSString *)arg1 ;
-(id)onInterupt;
-(id)onConnect;
@end

