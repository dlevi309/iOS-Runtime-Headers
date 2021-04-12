/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/LSInternalWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSHashTable, NSObject, NSString;

@interface LSApplicationWorkspaceRemoteObserver : NSObject <LSInternalWorkspaceObserverProtocol, NSSecureCoding> {

	NSUUID* _uuid;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _progressSubscriptionsQueue;
	BOOL _observinglsd;

}

@property (nonatomic,retain) NSUUID * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (getter=isObservinglsd) BOOL observinglsd;                //@synthesize observinglsd=_observinglsd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setObservinglsd:(BOOL)arg1 ;
-(BOOL)isObservinglsd;
-(unsigned long long)currentObserverCount;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)pluginsWillUninstall:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(void)addLocalObserver:(id)arg1 ;
-(void)removeLocalObserver:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(id)localObservers;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(BOOL)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationIconDidChange:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

