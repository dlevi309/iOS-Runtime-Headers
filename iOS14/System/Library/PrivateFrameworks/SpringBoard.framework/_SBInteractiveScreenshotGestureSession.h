/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSessionID:(id)arg1 ;
-(SBInteractiveScreenshotGestureRootViewController *)rootViewController;
-(SBInteractiveScreenshotGestureRootWindow *)rootWindow;
-(void)setRootWindow:(SBInteractiveScreenshotGestureRootWindow *)arg1 ;
-(void)setHostWindow:(SBInteractiveScreenshotGestureHostWindow *)arg1 ;
-(SBInteractiveScreenshotGestureHostWindow *)hostWindow;
-(SBInteractiveScreenshotGestureHostRootViewController *)hostRootViewController;
@end

