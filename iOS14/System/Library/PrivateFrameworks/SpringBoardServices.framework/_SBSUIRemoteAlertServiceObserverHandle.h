/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)setActivationHandler:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)activationHandler;
-(id)deactivationHandler;
-(void)setDeactivationHandler:(id)arg1 ;
@end

