/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/AVTAvatarTransitionModel.h>

@protocol AVTAvatarRecord;
@class AVTView, AVTImageTransitioningContainerView, UIImage, UIView, NSString;

@interface AVTAvatarListCell : UICollectionViewCell <AVTAvatarTransitionModel> {

	AVTView* _avtView;
	id<AVTAvatarRecord> _avatar;
	AVTImageTransitioningContainerView* _containerView;

}

@property (nonatomic,retain) AVTView * avtView;                                                 //@synthesize avtView=_avtView - In the implementation block
@property (nonatomic,readonly) AVTImageTransitioningContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIView * avtViewContainer; 
@property (nonatomic,retain) id<AVTAvatarRecord> avatar;                                        //@synthesize avatar=_avatar - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)aspectRatio;
-(void)setAspectRatio:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVTImageTransitioningContainerView *)containerView;
-(void)layoutSubviews;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(id<AVTAvatarRecord>)avatar;
-(void)setAvatar:(id<AVTAvatarRecord>)arg1 ;
-(AVTView *)avtView;
-(void)setAvtView:(AVTView *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)downcastWithCellHandler:(/*^block*/id)arg1 listCellHandler:(/*^block*/id)arg2 ;
-(void)setImageViewVisible:(BOOL)arg1 ;
-(void)beginUsingAVTViewFromSession:(id)arg1 ;
-(void)endUsingAVTView;
-(void)transitionStaticViewToFront;
-(id)liveView;
-(void)transitionLiveViewToFront;
-(UIView *)avtViewContainer;
-(void)applyFullAlpha;
-(void)applyBaseAlpha;
@end

