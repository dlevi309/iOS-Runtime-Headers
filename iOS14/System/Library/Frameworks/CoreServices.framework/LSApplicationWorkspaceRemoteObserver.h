/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)applicationInstallsDidStart:(id)arg1 ;
-(NSUUID *)uuid;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(id)init;
-(void)deviceManagementPolicyDidChange:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localObservers;
-(void)setObservinglsd:(BOOL)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(unsigned long long)currentObserverCount;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(BOOL)messageObserversWithSelector:(SEL)arg1 andApps:(id)arg2 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)removeLocalObserver:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)applicationIconDidChange:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)addLocalObserver:(id)arg1 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(BOOL)isObservinglsd;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)pluginsWillUninstall:(id)arg1 ;
@end

