/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <UIKitCore/UIViewController.h>

@protocol AVTAvatarRecord;
@class AVTView, AVTAvatarPose, AVTViewUpdater, AVTAvatarPhysicsState;

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController {

	BOOL _isLiveTracking;
	id<AVTAvatarRecord> _avatarRecord;
	AVTView* _avtView;
	AVTAvatarPose* _displayedPose;
	AVTViewUpdater* _viewUpdater;

}

@property (assign,nonatomic) BOOL isLiveTracking;                                        //@synthesize isLiveTracking=_isLiveTracking - In the implementation block
@property (nonatomic,retain) id<AVTAvatarRecord> avatarRecord;                           //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,retain) AVTView * avtView;                                          //@synthesize avtView=_avtView - In the implementation block
@property (nonatomic,retain) AVTAvatarPose * displayedPose;                              //@synthesize displayedPose=_displayedPose - In the implementation block
@property (nonatomic,retain) AVTViewUpdater * viewUpdater;                               //@synthesize viewUpdater=_viewUpdater - In the implementation block
@property (nonatomic,readonly) AVTAvatarPose * currentPose; 
@property (nonatomic,readonly) AVTAvatarPhysicsState * currentPhysicsState; 
-(AVTViewUpdater *)viewUpdater;
-(void)setViewUpdater:(AVTViewUpdater *)arg1 ;
-(AVTView *)avtView;
-(id)initWithRecord:(id)arg1 ;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)setAvtView:(AVTView *)arg1 ;
-(void)setAvatarRecord:(id<AVTAvatarRecord>)arg1 ;
-(void)viewDidLoad;
-(AVTAvatarPose *)currentPose;
-(AVTAvatarPose *)displayedPose;
-(void)_updatePose:(id)arg1 fromPose:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)enableFaceTrackingIfNeeded;
-(void)setIsLiveTracking:(BOOL)arg1 ;
-(BOOL)isLiveTracking;
-(void)setDisplayedPose:(AVTAvatarPose *)arg1 ;
-(void)endFaceTracking;
-(AVTAvatarPhysicsState *)currentPhysicsState;
-(void)updatePreviewForRecord:(id)arg1 ;
-(void)beginFaceTrackingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateForPose:(id)arg1 animated:(BOOL)arg2 ;
@end

