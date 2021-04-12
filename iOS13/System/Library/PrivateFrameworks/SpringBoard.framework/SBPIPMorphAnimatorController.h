/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBViewMorphAnimatorObserver.h>

@class NSUUID, SBViewMorphAnimator, SBPIPMorphAnimatorDataSource, PGPictureInPictureViewController, NSString;

@interface SBPIPMorphAnimatorController : NSObject <SBViewMorphAnimatorObserver> {

	NSUUID* _uuid;
	SBViewMorphAnimator* _viewMorphAnimator;
	SBPIPMorphAnimatorDataSource* _viewMorphAnimatorDataSource;
	PGPictureInPictureViewController* _pictureInPictureViewController;
	long long _startedSourceAnimations;
	long long _completedTargetAnimations;

}

@property (assign,nonatomic) long long startedSourceAnimations;                                                     //@synthesize startedSourceAnimations=_startedSourceAnimations - In the implementation block
@property (assign,nonatomic) long long completedTargetAnimations;                                                   //@synthesize completedTargetAnimations=_completedTargetAnimations - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) SBViewMorphAnimator * viewMorphAnimator;                                             //@synthesize viewMorphAnimator=_viewMorphAnimator - In the implementation block
@property (nonatomic,readonly) SBPIPMorphAnimatorDataSource * viewMorphAnimatorDataSource;                          //@synthesize viewMorphAnimatorDataSource=_viewMorphAnimatorDataSource - In the implementation block
@property (assign,nonatomic,__weak) PGPictureInPictureViewController * pictureInPictureViewController;              //@synthesize pictureInPictureViewController=_pictureInPictureViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(NSUUID *)uuid;
-(void)interrupt;
-(PGPictureInPictureViewController *)pictureInPictureViewController;
-(void)_terminate;
-(id)initWithTargetProcessIdentifier:(int)arg1 uuid:(id)arg2 scenePersistenceIdentifier:(id)arg3 ;
-(SBViewMorphAnimator *)viewMorphAnimator;
-(void)didEndSourceAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)didEndTargetAnimations:(unsigned long long)arg1 finished:(BOOL)arg2 continueBlock:(/*^block*/id)arg3 ;
-(void)animatorWasInterrupted:(id)arg1 ;
-(long long)startedSourceAnimations;
-(void)setStartedSourceAnimations:(long long)arg1 ;
-(long long)completedTargetAnimations;
-(void)setCompletedTargetAnimations:(long long)arg1 ;
-(int)targetProcessIdentifier;
-(id)scenePersistenceIdentifier;
-(void)setPictureInPictureViewController:(PGPictureInPictureViewController *)arg1 ;
-(SBPIPMorphAnimatorDataSource *)viewMorphAnimatorDataSource;
@end

