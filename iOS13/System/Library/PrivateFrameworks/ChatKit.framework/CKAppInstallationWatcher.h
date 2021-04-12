/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)setObservers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)observers;
-(id)_applicationWorkspace;
-(void)fetchAllAppInstallations:(/*^block*/id)arg1 ;
-(void)startListeningForAppBundleIdentifier:(id)arg1 ;
-(void)_loadBundleIdentifiersFromDiskLocked;
-(NSMutableArray *)installations;
-(void)_callDelegateAsynchronouslyWithProgressForAppInstallation:(id)arg1 added:(BOOL)arg2 updated:(BOOL)arg3 ;
-(void)_updateObservingApplicationWorkspaceLocked;
-(void)_saveBundleIdentifiersToDiskLocked;
-(void)setInstallations:(NSMutableArray *)arg1 ;
-(void)_updateAppProgressWithKnownChangedProxiesLocked:(id)arg1 ;
-(NSArray *)inProgressInstallations;
-(BOOL)observingApplicationWorkspace;
-(void)setObservingApplicationWorkspace:(BOOL)arg1 ;
-(void)_updateAppProgressWithKnownChangedProxies:(id)arg1 ;
@end

