/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIRootWindowScenePresentationBinder.h>

@class SBRootSceneWindow, NSMutableArray, UIWindowScene;

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {

	SBRootSceneWindow* _rootWindow;
	NSMutableArray* _disconnectionAssertions;
	UIWindowScene* _disconnectedFromScene;

}

@property (nonatomic,readonly) SBRootSceneWindow * rootWindow;              //@synthesize rootWindow=_rootWindow - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)assertDisconnectionFromRenderServerForReason:(id)arg1 ;
-(void)_disconnectFromRenderServer;
-(SBRootSceneWindow *)rootWindow;
-(void)_reconnectToRenderServer;
@end

