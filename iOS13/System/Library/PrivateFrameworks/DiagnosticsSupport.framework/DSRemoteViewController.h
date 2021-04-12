/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DSRemoteViewControllerInterface.h>

@protocol DSRemoteViewControllerDelegate;
@class DSResponder;

@interface DSRemoteViewController : _UIRemoteViewController <DSRemoteViewControllerInterface> {

	float _originalScreenBrightness;
	id<DSRemoteViewControllerDelegate> _delegate;
	DSResponder* _responder;

}

@property (nonatomic,retain) DSResponder * responder;                                         //@synthesize responder=_responder - In the implementation block
@property (assign,nonatomic) float originalScreenBrightness;                                  //@synthesize originalScreenBrightness=_originalScreenBrightness - In the implementation block
@property (assign,nonatomic,__weak) id<DSRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<DSRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<DSRemoteViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(DSResponder *)responder;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setResponder:(DSResponder *)arg1 ;
-(id)_stringForReason:(unsigned long long)arg1 ;
-(void)setOriginalScreenBrightness:(float)arg1 ;
-(id)_viewServiceInterface;
-(float)originalScreenBrightness;
-(void)viewServiceDidSuspend;
-(void)viewServiceDidFinishWithReason:(unsigned long long)arg1 ;
-(void)viewServiceDidEnableVolumeHUD:(BOOL)arg1 ;
-(void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(BOOL)arg2 ;
-(void)requiredSerialNumbers:(id)arg1 ;
-(void)selectableSerialNumbers:(id)arg1 ;
-(void)sessionToken:(id)arg1 ;
@end

