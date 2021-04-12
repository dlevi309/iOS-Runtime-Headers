/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class NSString;

@interface _SBSUIRemoteAlertServiceObserverHandle : NSObject <SBSRemoteAlertHandleObserver> {

	/*^block*/id _activationHandler;
	/*^block*/id _deactivationHandler;

}

@property (nonatomic,copy) id activationHandler;                    //@synthesize activationHandler=_activationHandler - In the implementation block
@property (nonatomic,copy) id deactivationHandler;                  //@synthesize deactivationHandler=_deactivationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActivationHandler:(id)arg1 ;
-(id)activationHandler;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(id)arg1 ;
@end

