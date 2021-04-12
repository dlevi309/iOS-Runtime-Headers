/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransaction.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>

@class SBSceneHandle, NSString;

@interface SBWaitForSceneContentAvailableTransaction : SBTransaction <SBSceneHandleObserver> {

	SBSceneHandle* _sceneHandle;
	BOOL _isContentStateReady;
	BOOL _manualListener;

}

@property (nonatomic,copy,readonly) SBSceneHandle * sceneHandle;              //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(void)_didComplete;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(SBSceneHandle *)sceneHandle;
-(id)initWithSceneHandle:(id)arg1 manualListener:(BOOL)arg2 ;
-(void)noteSceneContentIsReady:(BOOL)arg1 ;
-(void)_noteSceneContentReadinessDidChange:(BOOL)arg1 ;
@end

