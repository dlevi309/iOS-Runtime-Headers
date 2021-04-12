/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIScrollToTopView.h>

@protocol SBScrollToTopSceneProxyViewDelegate;
@class SBSceneHandle;

@interface SBScrollToTopSceneProxyView : UIView <_UIScrollToTopView> {

	SBSceneHandle* _sceneHandle;
	id<SBScrollToTopSceneProxyViewDelegate> _delegate;

}

@property (nonatomic,retain) SBSceneHandle * sceneHandle;                                          //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (assign,nonatomic,__weak) id<SBScrollToTopSceneProxyViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBScrollToTopSceneProxyViewDelegate>)delegate;
-(void)setDelegate:(id<SBScrollToTopSceneProxyViewDelegate>)arg1 ;
-(BOOL)isScrollEnabled;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(SBSceneHandle *)sceneHandle;
-(void)setSceneHandle:(SBSceneHandle *)arg1 ;
@end

