/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKitCore/UIRootWindowScenePresentationBinder.h>

@class UIRootSceneWindow, NSMutableArray, UIWindowScene;

@interface SBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {

	UIRootSceneWindow* _rootWindow;
	NSMutableArray* _disconnectionAssertions;
	UIWindowScene* _disconnectedFromScene;

}

@property (nonatomic,readonly) UIRootSceneWindow * rootWindow;              //@synthesize rootWindow=_rootWindow - In the implementation block
+(id)sharedInstance;
-(id)init;
-(UIRootSceneWindow *)rootWindow;
-(void)_reconnectToRenderServer;
-(void)_disconnectFromRenderServer;
-(id)assertDisconnectionFromRenderServerForReason:(id)arg1 ;
@end

