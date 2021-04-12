/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)preheat;
-(id)init;
-(id<SSRemoteAlertHandleProviderDelegate>)delegate;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(BOOL)isActive;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)activate;
-(void)setDelegate:(id<SSRemoteAlertHandleProviderDelegate>)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)invalidate;
-(void)prepare;
-(id)screenshotServicesAlertHandle;
-(void)_callDelegate:(/*^block*/id)arg1 ;
-(id)_screenshotServicesServiceAlertDefinition;
@end

