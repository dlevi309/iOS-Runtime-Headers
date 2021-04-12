/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iOSDiagnostics.framework/iOSDiagnostics
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DSRemoteViewControllerInterface.h>

@protocol DADiagnosticsRemoteDelegate;
@class DADiagnosticResponder;

@interface DADiagnosticsRemoteHostViewController : _UIRemoteViewController <DSRemoteViewControllerInterface> {

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
-(id<DADiagnosticsRemoteDelegate>)delegate;
-(void)setDelegate:(id<DADiagnosticsRemoteDelegate>)arg1 ;
-(id)disconnect;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(DADiagnosticResponder *)responder;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setResponder:(DADiagnosticResponder *)arg1 ;
-(void)setOriginalScreenBrightness:(float)arg1 ;
-(id)_viewServiceInterface;
-(float)originalScreenBrightness;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidFinishWithReason:(unsigned long long)arg1 ;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg1 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
@end

