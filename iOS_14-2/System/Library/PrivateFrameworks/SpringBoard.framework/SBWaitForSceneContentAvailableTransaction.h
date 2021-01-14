/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,copy) SBSceneHandle * sceneHandle;              //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(BOOL)_canBeInterrupted;
-(void)_begin;
-(void)_didComplete;
-(SBSceneHandle *)sceneHandle;
-(void)dealloc;
-(void)setSceneHandle:(SBSceneHandle *)arg1 ;
-(id)initWithSceneHandle:(id)arg1 manualListener:(BOOL)arg2 ;
-(void)noteSceneContentIsReady:(BOOL)arg1 ;
-(void)_noteSceneContentReadinessDidChange:(BOOL)arg1 ;
@end

