/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, NSLayoutConstraint, MPUContentSizeLayoutConstraint, IKLockupElement, UILabel, VideosExtrasConstrainedArtworkContainerView;

@interface VideosExtrasGridCollectionViewCell : UICollectionViewCell {

	UIView* _spacerView;
	NSLayoutConstraint* _artworkContainerWidthConstraint;
	NSLayoutConstraint* _artworkContainerHeightConstraint;
	MPUContentSizeLayoutConstraint* _topLineHeight;
	MPUContentSizeLayoutConstraint* _subtitleLineHeight;
	NSLayoutConstraint* _spacerHeight;
	NSLayoutConstraint* _spacerTop;
	IKLockupElement* _lockupElement;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	VideosExtrasConstrainedArtworkContainerView* _artworkContainer;

}

@property (nonatomic,readonly) VideosExtrasConstrainedArtworkContainerView * artworkContainer;              //@synthesize artworkContainer=_artworkContainer - In the implementation block
@property (assign,nonatomic,__weak) IKLockupElement * lockupElement;                                        //@synthesize lockupElement=_lockupElement - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(IKLockupElement *)lockupElement;
-(void)configureForLockup:(id)arg1 cellStyle:(id)arg2 withSizing:(BOOL)arg3 ;
-(void)configureForLockup:(id)arg1 cellStyle:(id)arg2 ;
-(void)setLockupElement:(IKLockupElement *)arg1 ;
-(VideosExtrasConstrainedArtworkContainerView *)artworkContainer;
@end

