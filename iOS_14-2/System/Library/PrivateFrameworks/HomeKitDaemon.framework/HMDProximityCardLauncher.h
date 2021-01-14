/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDAddAccessoryRequestInformation, SBSRemoteAlertHandle, NSString;

@interface HMDProximityCardLauncher : NSObject <SBSRemoteAlertHandleObserver> {

	NSObject*<OS_dispatch_queue> _workQueue;
	HMDAddAccessoryRequestInformation* _internal_pendingAddAccessoryRequestInformation;
	SBSRemoteAlertHandle* _alertHandle;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMDAddAccessoryRequestInformation * internal_pendingAddAccessoryRequestInformation;              //@synthesize internal_pendingAddAccessoryRequestInformation=_internal_pendingAddAccessoryRequestInformation - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertHandle * alertHandle;                                                              //@synthesize alertHandle=_alertHandle - In the implementation block
@property (nonatomic,readonly) HMDAddAccessoryRequestInformation * pendingAddAccessoryRequestInformation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proximityCardServiceBundleIdentifier;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)dealloc;
-(SBSRemoteAlertHandle *)alertHandle;
-(void)handleNfcProxCardPayload:(id)arg1 ;
-(void)_handleNfcProxCardPayload:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInternal_pendingAddAccessoryRequestInformation:(HMDAddAccessoryRequestInformation *)arg1 ;
-(HMDAddAccessoryRequestInformation *)internal_pendingAddAccessoryRequestInformation;
-(void)setAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(void)clearPendingAddAccessoryRequestInformation;
-(HMDAddAccessoryRequestInformation *)pendingAddAccessoryRequestInformation;
@end

