/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, NSString;

@interface CKAppInstallationWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {

	BOOL _observingApplicationWorkspace;
	NSMutableArray* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _installations;

}

@property (nonatomic,retain) NSMutableArray * observers;                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * installations;                   //@synthesize installations=_installations - In the implementation block
@property (nonatomic,readonly) NSArray * inProgressInstallations; 
@property (assign,nonatomic) BOOL observingApplicationWorkspace;               //@synthesize observingApplicationWorkspace=_observingApplicationWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSMutableArray *)observers;
-(id)init;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_applicationWorkspace;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startListeningForAppBundleIdentifier:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchAllAppInstallations:(/*^block*/id)arg1 ;
-(NSMutableArray *)installations;
-(void)setInstallations:(NSMutableArray *)arg1 ;
-(void)_loadBundleIdentifiersFromDiskLocked;
-(void)_updateObservingApplicationWorkspaceLocked;
-(void)_callDelegateAsynchronouslyWithProgressForAppInstallation:(id)arg1 added:(BOOL)arg2 updated:(BOOL)arg3 ;
-(void)_saveBundleIdentifiersToDiskLocked;
-(void)_updateAppProgressWithKnownChangedProxiesLocked:(id)arg1 ;
-(NSArray *)inProgressInstallations;
-(BOOL)observingApplicationWorkspace;
-(void)setObservingApplicationWorkspace:(BOOL)arg1 ;
-(void)_updateAppProgressWithKnownChangedProxies:(id)arg1 ;
-(void)dealloc;
@end

