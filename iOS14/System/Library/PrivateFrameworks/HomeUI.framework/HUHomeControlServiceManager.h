/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class SBSRemoteAlertHandle, NSString;

@interface HUHomeControlServiceManager : NSObject <SBSRemoteAlertHandleObserver> {

	SBSRemoteAlertHandle* _remoteAlertHandle;
	unsigned long long _suspendedServiceClientCount;

}

@property (nonatomic,retain) SBSRemoteAlertHandle * remoteAlertHandle;                    //@synthesize remoteAlertHandle=_remoteAlertHandle - In the implementation block
@property (assign,nonatomic) unsigned long long suspendedServiceClientCount;              //@synthesize suspendedServiceClientCount=_suspendedServiceClientCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)launchServiceWithContext:(id)arg1 ;
-(void)dismissService;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)_launchServiceWithUserInfo:(id)arg1 ;
-(void)_launchViewServiceSuspended;
-(unsigned long long)suspendedServiceClientCount;
-(void)setSuspendedServiceClientCount:(unsigned long long)arg1 ;
-(void)setRemoteAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(SBSRemoteAlertHandle *)remoteAlertHandle;
-(void)launchServiceSuspendedWithUserInfo:(id)arg1 ;
@end

