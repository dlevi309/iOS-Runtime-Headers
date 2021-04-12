/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SCPreferencesRef)prefs;
-(void)setCurrentNetwork:(BOOL)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(void)start;
-(NSString *)ssid;
-(void)setSettings:(NSArray *)arg1 ;
-(NSArray *)settings;
-(void)dealloc;
-(id)initWithSSID:(id)arg1 settings:(id)arg2 ;
-(SCNetworkSetRef)_createNewSetForNetworkNamed:(id)arg1 ;
-(void)_applyProxySettings:(id)arg1 service:(SCNetworkProtocolRef)arg2 ;
-(BOOL)isCurrentNetwork;
-(NSOperationQueue *)keychainQueue;
-(SCNetworkSetRef)_defaultSetRetained;
-(id)initWithNetworkProfile:(id)arg1 settings:(id)arg2 ;
-(void)setPrefs:(SCPreferencesRef)arg1 ;
-(void)setKeychainQueue:(NSOperationQueue *)arg1 ;
@end

