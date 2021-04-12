/*
* Generated on Thursday, January 14, 2021 at 2:28:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class TVRViewServiceConfigContext, SBSRemoteAlertHandle, NSString;

@interface TVRViewServiceManager : NSObject <SBSRemoteAlertHandleObserver> {

	TVRViewServiceConfigContext* _viewServiceContext;
	SBSRemoteAlertHandle* _alertHandle;
	NSString* _lastActiveEndpointIdentifier;

}

@property (nonatomic,retain) TVRViewServiceConfigContext * viewServiceContext;              //@synthesize viewServiceContext=_viewServiceContext - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertHandle * alertHandle;                            //@synthesize alertHandle=_alertHandle - In the implementation block
@property (nonatomic,copy) NSString * lastActiveEndpointIdentifier;                         //@synthesize lastActiveEndpointIdentifier=_lastActiveEndpointIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)prewarm;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)dismiss;
-(void)_launchViewServiceSuspended;
-(SBSRemoteAlertHandle *)alertHandle;
-(void)setAlertHandle:(SBSRemoteAlertHandle *)arg1 ;
-(void)presentWithContext:(id)arg1 ;
-(NSString *)lastActiveEndpointIdentifier;
-(void)setLastActiveEndpointIdentifier:(NSString *)arg1 ;
-(id)_actionForSetting:(unsigned long long)arg1 animationBlock:(/*^block*/id)arg2 ;
-(void)_prewarmWithLaunchViewService:(BOOL)arg1 fetchActiveEndpoint:(BOOL)arg2 ;
-(void)_fetchActiveEndpointUID;
-(id)_settingNameForValue:(unsigned long long)arg1 ;
-(TVRViewServiceConfigContext *)viewServiceContext;
-(void)setViewServiceContext:(TVRViewServiceConfigContext *)arg1 ;
@end

