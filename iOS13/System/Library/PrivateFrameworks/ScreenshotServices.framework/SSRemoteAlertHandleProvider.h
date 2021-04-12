/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@protocol SSRemoteAlertHandleProviderDelegate;
@class SBSRemoteAlertHandle, NSString;

@interface SSRemoteAlertHandleProvider : NSObject <SBSRemoteAlertHandleObserver> {

	SBSRemoteAlertHandle* _handle;
	id<SSRemoteAlertHandleProviderDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isActive; 
@property (assign,nonatomic,__weak) id<SSRemoteAlertHandleProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<SSRemoteAlertHandleProviderDelegate>)delegate;
-(void)setDelegate:(id<SSRemoteAlertHandleProviderDelegate>)arg1 ;
-(BOOL)isActive;
-(void)activate;
-(void)prepare;
-(void)preheat;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)screenshotServicesAlertHandle;
-(void)_callDelegate:(/*^block*/id)arg1 ;
-(id)_screenshotServicesServiceAlertDefinition;
@end

