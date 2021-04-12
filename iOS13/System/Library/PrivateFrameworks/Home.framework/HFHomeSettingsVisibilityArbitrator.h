/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString;

@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol> {

	BOOL _homesConfigured;
	int _homeKitPreferencesChangeNotifyToken;
	unsigned long long _visibilityState;
	/*^block*/id _visibilityStateChangeHandler;
	unsigned long long _homeAppInstallState;

}

@property (assign,nonatomic) unsigned long long visibilityState;                   //@synthesize visibilityState=_visibilityState - In the implementation block
@property (assign,nonatomic) BOOL homesConfigured;                                 //@synthesize homesConfigured=_homesConfigured - In the implementation block
@property (assign,nonatomic) unsigned long long homeAppInstallState;               //@synthesize homeAppInstallState=_homeAppInstallState - In the implementation block
@property (assign,nonatomic) int homeKitPreferencesChangeNotifyToken;              //@synthesize homeKitPreferencesChangeNotifyToken=_homeKitPreferencesChangeNotifyToken - In the implementation block
@property (nonatomic,copy) id visibilityStateChangeHandler;                        //@synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2 ;
-(unsigned long long)visibilityState;
-(void)setVisibilityState:(unsigned long long)arg1 ;
-(void)_reloadVisibilityStateIncludingInstallState:(BOOL)arg1 ;
-(void)_queryHomeAppInstallStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_startListeningForManagedConfigurationChanges;
-(int)homeKitPreferencesChangeNotifyToken;
-(id)visibilityStateChangeHandler;
-(void)setHomesConfigured:(BOOL)arg1 ;
-(BOOL)homesConfigured;
-(unsigned long long)homeAppInstallState;
-(void)setHomeAppInstallState:(unsigned long long)arg1 ;
-(void)reloadVisibilityState;
-(void)setVisibilityStateChangeHandler:(id)arg1 ;
-(void)setHomeKitPreferencesChangeNotifyToken:(int)arg1 ;
@end

