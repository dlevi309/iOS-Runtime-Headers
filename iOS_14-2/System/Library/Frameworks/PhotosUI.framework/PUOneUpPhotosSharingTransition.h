/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUModalTransition.h>
#import <libobjc.A.dylib/PUOneUpAssetTransition.h>

@protocol PUOneUpPhotosSharingTransitionViewControllerPUOneUpAssetTransitionViewController, PUOneUpAssetTransitionViewController, PUOneUpPhotosSharingTransitionDelegate;
@class UIViewController, PUOneUpPhotosSharingTransitionContext, UICollectionViewLayout, NSString;

@interface PUOneUpPhotosSharingTransition : PUModalTransition <PUOneUpAssetTransition> {

	UIViewController*<PUOneUpPhotosSharingTransitionViewController>*<PUOneUpAssetTransitionViewController> _sharingTransitionViewController;
	UIViewController*<PUOneUpAssetTransitionViewController> _presentingViewController;
	PUOneUpPhotosSharingTransitionContext* _oneUpPhotosSharingTransitionContext;
	id<PUOneUpPhotosSharingTransitionDelegate> _delegate;
	UICollectionViewLayout* __transitionLayout;

}

@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;                                                                                    //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PUOneUpPhotosSharingTransitionViewController>*<PUOneUpAssetTransitionViewController> sharingTransitionViewController;              //@synthesize sharingTransitionViewController=_sharingTransitionViewController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PUOneUpAssetTransitionViewController> presentingViewController;                                                                    //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) PUOneUpPhotosSharingTransitionContext * oneUpPhotosSharingTransitionContext;                                                                                //@synthesize oneUpPhotosSharingTransitionContext=_oneUpPhotosSharingTransitionContext - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpPhotosSharingTransitionDelegate> delegate;                                                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PUOneUpPhotosSharingTransitionDelegate>)delegate;
-(void)setOneUpPhotosSharingTransitionContext:(PUOneUpPhotosSharingTransitionContext *)arg1 ;
-(void)animatePresentTransition;
-(void)animateDismissTransition;
-(UIViewController*<PUOneUpAssetTransitionViewController>)presentingViewController;
-(void)_setTransitionLayout:(id)arg1 ;
-(void)setDelegate:(id<PUOneUpPhotosSharingTransitionDelegate>)arg1 ;
-(UICollectionViewLayout *)_transitionLayout;
-(void)setPresentingViewController:(UIViewController*<PUOneUpAssetTransitionViewController>)arg1 ;
-(UIViewController*<PUOneUpPhotosSharingTransitionViewController>*<PUOneUpAssetTransitionViewController>)sharingTransitionViewController;
-(void)setSharingTransitionViewController:(UIViewController*<PUOneUpPhotosSharingTransitionViewController>*<PUOneUpAssetTransitionViewController>)arg1 ;
-(PUOneUpPhotosSharingTransitionContext *)oneUpPhotosSharingTransitionContext;
@end

