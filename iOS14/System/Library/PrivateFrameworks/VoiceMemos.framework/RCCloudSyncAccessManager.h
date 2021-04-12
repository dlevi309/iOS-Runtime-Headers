/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/ACMonitoredAccountStoreDelegateProtocol.h>
#import <libobjc.A.dylib/RCManagedConfigurationHelperDelegate.h>

@protocol RCCloudSyncAccessManagerDelegate;
@class ACMonitoredAccountStore, RCManagedConfigurationHelper, NSString;

@interface RCCloudSyncAccessManager : NSObject <ACMonitoredAccountStoreDelegateProtocol, RCManagedConfigurationHelperDelegate> {

	ACMonitoredAccountStore* _accountStore;
	long long _startMonitoringOnceToken;
	RCManagedConfigurationHelper* _managedConfigurationHelper;
	int _tccNotifyToken;
	id<RCCloudSyncAccessManagerDelegate> _delegate;

}

@property (readonly) ACMonitoredAccountStore * accountStore; 
@property (assign,nonatomic,__weak) id<RCCloudSyncAccessManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL cloudSyncIsAvailable; 
@property (assign,nonatomic) int tccCloudAccess; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<RCCloudSyncAccessManagerDelegate>)delegate;
-(ACMonitoredAccountStore *)accountStore;
-(void)accountWasAdded:(id)arg1 ;
-(void)setDelegate:(id<RCCloudSyncAccessManagerDelegate>)arg1 ;
-(void)accountWasRemoved:(id)arg1 ;
-(void)_availabilityChanged;
-(BOOL)cloudSyncIsAvailable;
-(void)managedConfigurationUpdated:(BOOL)arg1 ;
-(void)startMonitoringAccountChanges;
-(int)tccCloudAccess;
-(void)setTccCloudAccess:(int)arg1 ;
-(void)dealloc;
@end

