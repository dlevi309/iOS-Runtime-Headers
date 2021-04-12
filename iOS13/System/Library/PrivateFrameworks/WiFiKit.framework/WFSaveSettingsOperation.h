/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>

@class NSString, NSArray, NSOperationQueue;

@interface WFSaveSettingsOperation : WFOperation {

	BOOL _currentNetwork;
	NSString* _ssid;
	SCPreferencesRef _prefs;
	NSArray* _settings;
	NSOperationQueue* _keychainQueue;

}

@property (nonatomic,copy) NSString * ssid;                                            //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) SCPreferencesRef prefs;                                   //@synthesize prefs=_prefs - In the implementation block
@property (nonatomic,retain) NSArray * settings;                                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSOperationQueue * keychainQueue;                         //@synthesize keychainQueue=_keychainQueue - In the implementation block
@property (assign,getter=isCurrentNetwork,nonatomic) BOOL currentNetwork;              //@synthesize currentNetwork=_currentNetwork - In the implementation block
-(void)dealloc;
-(SCPreferencesRef)prefs;
-(void)start;
-(NSArray *)settings;
-(void)setSettings:(NSArray *)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(void)setCurrentNetwork:(BOOL)arg1 ;
-(void)setPrefs:(SCPreferencesRef)arg1 ;
-(NSOperationQueue *)keychainQueue;
-(void)setKeychainQueue:(NSOperationQueue *)arg1 ;
-(id)initWithSSID:(id)arg1 settings:(id)arg2 ;
-(SCNetworkSetRef)_createNewSetForNetworkNamed:(id)arg1 ;
-(void)_applyProxySettings:(id)arg1 service:(SCNetworkProtocolRef)arg2 ;
-(BOOL)isCurrentNetwork;
-(SCNetworkSetRef)_defaultSetRetained;
-(id)initWithNetworkProfile:(id)arg1 settings:(id)arg2 ;
@end

