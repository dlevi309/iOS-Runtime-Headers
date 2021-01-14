/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/SBPanSystemGestureRecognizerDelegate.h>

@class SBPanSystemGestureRecognizer, SBAppResizeGestureWorkspaceTransaction, SBMainDisplaySceneLayoutViewController, NSString;

@interface SBMainDisplaySceneLayoutGestureManager : NSObject <BSTransactionObserver, SBPanSystemGestureRecognizerDelegate> {

	SBPanSystemGestureRecognizer* _resizePanSystemGestureRecognizer;
	SBAppResizeGestureWorkspaceTransaction* _resizePanSystemGestureRecognizerWorkspaceTransaction;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;

}

@property (nonatomic,__weak,readonly) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController;              //@synthesize sceneLayoutViewController=_sceneLayoutViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionDidComplete:(id)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)sceneLayoutViewController;
-(id)init;
-(id)initWithSceneLayoutViewController:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)_handleResizePanSystemGestureRecognizer:(id)arg1 ;
-(BOOL)_hasActiveModalFloatingApplication;
-(BOOL)_allowSystemGestureRecognizer:(id)arg1 withSystemGestureType:(unsigned long long)arg2 toReceiveTouchAtLocation:(CGPoint)arg3 ;
-(BOOL)canBeginAppResizeGestureRecognizerAtLocation:(CGPoint)arg1 ;
-(void)_createResizePanSystemGestureRecognizerWorkspaceTransactionForPanSystemGestureRecognizer:(id)arg1 ;
-(BOOL)_hasActiveSystemGestureRecognizerWorkspaceTransaction;
@end

