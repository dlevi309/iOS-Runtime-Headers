/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <libobjc.A.dylib/WFDialogAlertPresenter.h>

@protocol WFDialogAlertPresenterDelegate, OS_dispatch_source;
@class SBSRemoteAlertHandle, NSObject, NSString;

@interface WFSpringBoardRemoteAlertPresenter : NSObject <SBSRemoteAlertHandleObserver, WFDialogAlertPresenter> {

	id<WFDialogAlertPresenterDelegate> _delegate;
	SBSRemoteAlertHandle* _activeHandle;
	NSObject*<OS_dispatch_source> _deactivateTimer;

}

@property (nonatomic,retain) SBSRemoteAlertHandle * activeHandle;                             //@synthesize activeHandle=_activeHandle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> deactivateTimer;                   //@synthesize deactivateTimer=_deactivateTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WFDialogAlertPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL alertIsActive; 
-(id<WFDialogAlertPresenterDelegate>)delegate;
-(SBSRemoteAlertHandle *)activeHandle;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(BOOL)alertIsActive;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)setDeactivateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setDelegate:(id<WFDialogAlertPresenterDelegate>)arg1 ;
-(void)setActiveHandle:(SBSRemoteAlertHandle *)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)deactivateAlert;
-(NSObject*<OS_dispatch_source>)deactivateTimer;
-(void)activateAlert;
@end

