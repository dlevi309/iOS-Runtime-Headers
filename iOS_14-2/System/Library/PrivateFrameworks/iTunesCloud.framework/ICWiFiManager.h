/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ICWiFiManager : NSObject <ICEnvironmentMonitorObserver> {

	SCPreferencesRef _wifiPreferences;
	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _wiFiEnabled;
	BOOL _wiFiAssociated;

}

@property (assign,getter=isWiFiEnabled,nonatomic) BOOL wiFiEnabled;                    //@synthesize wiFiEnabled=_wiFiEnabled - In the implementation block
@property (assign,getter=isWiFiAssociated,nonatomic) BOOL wiFiAssociated;              //@synthesize wiFiAssociated=_wiFiAssociated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWiFiManager;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)init;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(BOOL)isWiFiAssociated;
-(BOOL)isWiFiEnabled;
-(id)_processIdentifier;
-(void)setWiFiAssociated:(BOOL)arg1 ;
-(BOOL)_getWiFiEnabledFromPrefs;
-(void)setWiFiEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)_getWiFiAssociated;
@end

