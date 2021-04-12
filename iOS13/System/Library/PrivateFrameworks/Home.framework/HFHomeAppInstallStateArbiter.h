/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSHashTable, NAFuture, NSURL, NSString;

@interface HFHomeAppInstallStateArbiter : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSHashTable* _observers;
	NAFuture* _homeAppInstalledFuture;

}

@property (nonatomic,readonly) NSHashTable * observers;                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NAFuture * homeAppInstalledFuture;              //@synthesize homeAppInstalledFuture=_homeAppInstalledFuture - In the implementation block
@property (nonatomic,copy,readonly) NSURL * homeAppBundleURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(NSHashTable *)observers;
-(BOOL)_fastPath_isHomeAppInstalled;
-(void)setHomeAppInstalledFuture:(NAFuture *)arg1 ;
-(void)_applications:(id)arg1 didInstall:(BOOL)arg2 ;
-(NAFuture *)homeAppInstalledFuture;
-(NSURL *)homeAppBundleURL;
@end

