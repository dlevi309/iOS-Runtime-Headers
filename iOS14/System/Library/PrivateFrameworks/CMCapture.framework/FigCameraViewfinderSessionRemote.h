/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/FigCameraViewfinderSession.h>

@protocol FigCameraViewfinderSessionRemoteObject;
@class FigStateMachine;

@interface FigCameraViewfinderSessionRemote : FigCameraViewfinderSession {

	id<FigCameraViewfinderSessionRemoteObject> _remoteViewfinderSession;
	unsigned _state;
	FigStateMachine* _stateMachine;

}
-(void)_serverDied;
-(void)closePreviewStream;
-(void)_setupStateMachine;
-(id)_initWithRemoteViewfinderSession:(id)arg1 delegateStorage:(id)arg2 ;
-(void)_previewStreamDidOpen;
-(void)openPreviewStreamWithOptions:(id)arg1 ;
-(void)dealloc;
-(void)_previewStreamDidCloseWithStatus:(int)arg1 ;
-(void)_clientDisconnectedFromServer;
@end

