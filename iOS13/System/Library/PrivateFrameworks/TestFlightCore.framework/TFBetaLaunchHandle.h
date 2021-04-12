/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@protocol TFBetaLaunchHandleActivationDelegate;
@class BSProcessHandle, NSString;

@interface TFBetaLaunchHandle : NSObject <SBSRemoteAlertHandleObserver> {

	id<TFBetaLaunchHandleActivationDelegate> _activationDelegate;
	BSProcessHandle* _processHandle;
	NSString* _logKey;

}

@property (nonatomic,readonly) BSProcessHandle * processHandle;                                               //@synthesize processHandle=_processHandle - In the implementation block
@property (nonatomic,copy,readonly) NSString * logKey;                                                        //@synthesize logKey=_logKey - In the implementation block
@property (assign,nonatomic,__weak) id<TFBetaLaunchHandleActivationDelegate> activationDelegate;              //@synthesize activationDelegate=_activationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BSProcessHandle *)processHandle;
-(void)activateIfNeeded;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(NSString *)logKey;
-(BOOL)_remoteAlertShouldActivateForLaunchInfo:(id)arg1 ;
-(void)_activateRemoteAlertWithLaunchInfo:(id)arg1 ;
-(id<TFBetaLaunchHandleActivationDelegate>)activationDelegate;
-(void)_updatedLaunchInfoForActivation:(id)arg1 ;
-(id)initWithProcessHandle:(id)arg1 ;
-(void)activateForTestingWithLaunchInfo:(id)arg1 ;
-(void)setActivationDelegate:(id<TFBetaLaunchHandleActivationDelegate>)arg1 ;
@end

