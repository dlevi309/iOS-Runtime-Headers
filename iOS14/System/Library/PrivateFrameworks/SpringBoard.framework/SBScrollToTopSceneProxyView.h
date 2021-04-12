/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isScrollEnabled;
-(id<SBScrollToTopSceneProxyViewDelegate>)delegate;
-(void)setDelegate:(id<SBScrollToTopSceneProxyViewDelegate>)arg1 ;
-(void)_scrollToTopFromTouchAtScreenLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(SBSceneHandle *)sceneHandle;
-(void)setSceneHandle:(SBSceneHandle *)arg1 ;
@end

