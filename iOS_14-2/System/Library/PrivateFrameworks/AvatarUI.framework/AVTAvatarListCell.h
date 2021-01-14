/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)transitionStaticViewToFront;
-(void)transitionLiveViewToFront;
-(void)setImage:(UIImage *)arg1 ;
-(id<AVTAvatarRecord>)avatar;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVTView *)avtView;
-(CGSize)aspectRatio;
-(void)prepareForReuse;
-(UIImage *)image;
-(UIView *)avtViewContainer;
-(void)layoutSubviews;
-(id)liveView;
-(AVTImageTransitioningContainerView *)containerView;
-(void)setAvtView:(AVTView *)arg1 ;
-(void)setAvatar:(id<AVTAvatarRecord>)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)applyFullAlpha;
-(void)applyBaseAlpha;
-(void)setAspectRatio:(CGSize)arg1 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(void)downcastWithCellHandler:(/*^block*/id)arg1 listCellHandler:(/*^block*/id)arg2 ;
-(void)setImageViewVisible:(BOOL)arg1 ;
-(void)beginUsingAVTViewFromSession:(id)arg1 ;
-(void)endUsingAVTView;
@end

