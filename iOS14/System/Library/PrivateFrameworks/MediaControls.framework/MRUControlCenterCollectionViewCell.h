/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class MRUNowPlayingHeaderView, MediaControlsMaterialView, UIView;

@interface MRUControlCenterCollectionViewCell : UICollectionViewCell {

	MRUNowPlayingHeaderView* _headerView;
	MediaControlsMaterialView* _materialView;
	UIView* _transformView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) MediaControlsMaterialView * materialView;              //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * transformView;                                //@synthesize transformView=_transformView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingHeaderView * headerView;                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                        //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(MediaControlsMaterialView *)materialView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)transformView;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setMaterialView:(MediaControlsMaterialView *)arg1 ;
-(MRUNowPlayingHeaderView *)headerView;
-(void)setTransformView:(UIView *)arg1 ;
-(void)setTransitionTransform:(CGAffineTransform)arg1 isVisible:(BOOL)arg2 ;
@end

