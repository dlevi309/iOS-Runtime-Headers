/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSUUID, SBInteractiveScreenshotGestureRootWindow, SBInteractiveScreenshotGestureHostWindow, SBInteractiveScreenshotGestureHostRootViewController, SBInteractiveScreenshotGestureRootViewController;

@interface _SBInteractiveScreenshotGestureSession : NSObject {

	NSUUID* _sessionID;
	SBInteractiveScreenshotGestureRootWindow* _rootWindow;
	SBInteractiveScreenshotGestureHostWindow* _hostWindow;

}

@property (nonatomic,copy,readonly) NSUUID * sessionID;                                                                    //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) SBInteractiveScreenshotGestureHostRootViewController * hostRootViewController; 
@property (nonatomic,readonly) SBInteractiveScreenshotGestureRootViewController * rootViewController; 
@property (nonatomic,retain) SBInteractiveScreenshotGestureRootWindow * rootWindow;                                        //@synthesize rootWindow=_rootWindow - In the implementation block
@property (nonatomic,retain) SBInteractiveScreenshotGestureHostWindow * hostWindow;                                        //@synthesize hostWindow=_hostWindow - In the implementation block
-(NSUUID *)sessionID;
-(SBInteractiveScreenshotGestureRootViewController *)rootViewController;
-(void)setHostWindow:(SBInteractiveScreenshotGestureHostWindow *)arg1 ;
-(SBInteractiveScreenshotGestureHostWindow *)hostWindow;
-(id)initWithSessionID:(id)arg1 ;
-(void)setRootWindow:(SBInteractiveScreenshotGestureRootWindow *)arg1 ;
-(SBInteractiveScreenshotGestureRootWindow *)rootWindow;
-(SBInteractiveScreenshotGestureHostRootViewController *)hostRootViewController;
@end

