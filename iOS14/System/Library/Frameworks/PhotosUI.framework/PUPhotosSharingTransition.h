/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUModalTransition.h>

@protocol PUPhotosSharingTransitionViewController, PUPhotosSharingTransitionDelegate;
@class UIViewController, PUPhotosSharingTransitionContext, UICollectionViewLayout;

@interface PUPhotosSharingTransition : PUModalTransition {

	UIViewController*<PUPhotosSharingTransitionViewController> _sharingTransitionViewController;
	PUPhotosSharingTransitionContext* _photosSharingTransitionContext;
	id<PUPhotosSharingTransitionDelegate> _delegate;
	UICollectionViewLayout* __transitionLayout;

}

@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                 //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (nonatomic,retain) UIViewController*<PUPhotosSharingTransitionViewController> sharingTransitionViewController;              //@synthesize sharingTransitionViewController=_sharingTransitionViewController - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;                                       //@synthesize photosSharingTransitionContext=_photosSharingTransitionContext - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotosSharingTransitionDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
-(id<PUPhotosSharingTransitionDelegate>)delegate;
-(void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1 ;
-(void)animatePresentTransition;
-(void)animateDismissTransition;
-(void)_setTransitionLayout:(id)arg1 ;
-(void)setDelegate:(id<PUPhotosSharingTransitionDelegate>)arg1 ;
-(UICollectionViewLayout *)_transitionLayout;
-(UIViewController*<PUPhotosSharingTransitionViewController>)sharingTransitionViewController;
-(void)setSharingTransitionViewController:(UIViewController*<PUPhotosSharingTransitionViewController>)arg1 ;
-(PUPhotosSharingTransitionContext *)photosSharingTransitionContext;
@end

