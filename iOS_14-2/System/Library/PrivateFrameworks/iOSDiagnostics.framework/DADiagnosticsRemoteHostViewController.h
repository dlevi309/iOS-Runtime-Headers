/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnostics.framework/iOSDiagnostics
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DADiagnosticsRemoteViewControllerInterface.h>

@protocol DADiagnosticsRemoteDelegate;
@class DADiagnosticResponder;

@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DADiagnosticsRemoteViewControllerInterface> {

	float _originalScreenBrightness;
	id<DADiagnosticsRemoteDelegate> _delegate;
	DADiagnosticResponder* _responder;

}

@property (nonatomic,retain) DADiagnosticResponder * responder;                            //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic) float originalScreenBrightness;                               //@synthesize originalScreenBrightness=_originalScreenBrightness - In the implementation block
@property (assign,nonatomic,__weak) id<DADiagnosticsRemoteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)requestDiagnosticsRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id)disconnect;
-(id<DADiagnosticsRemoteDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setResponder:(DADiagnosticResponder *)arg1 ;
-(DADiagnosticResponder *)responder;
-(void)setDelegate:(id<DADiagnosticsRemoteDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setOriginalScreenBrightness:(float)arg1 ;
-(id)_viewServiceInterface;
-(float)originalScreenBrightness;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidFinishWithReason:(unsigned long long)arg1 ;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg1 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
@end

