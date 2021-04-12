/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UITableViewCell.h>

@class VideosExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, NSArray, MPUContentSizeLayoutConstraint, IKListItemLockupElement;

@interface VideosExtrasTableViewCell : UITableViewCell {

	VideosExtrasConstrainedArtworkContainerView* _artworkContainer;
	UIView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSArray* _topConstraints;
	NSArray* _bottomConstraints;
	NSLayoutConstraint* _leadingViewConstraint;
	NSLayoutConstraint* _artworkSpacerHeightConstraint;
	NSLayoutConstraint* _textSpacerHeightConstraint;
	NSLayoutConstraint* _artworkWidthConstraint;
	NSLayoutConstraint* _artworkHeightConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	NSLayoutConstraint* _textTrailingConstraint;
	NSLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;
	IKListItemLockupElement* _element;

}

@property (assign,nonatomic) IKListItemLockupElement * element;                                                 //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) VideosExtrasConstrainedArtworkContainerView * artworkContainerView;              //@synthesize artworkContainer=_artworkContainer - In the implementation block
-(IKListItemLockupElement *)element;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setElement:(IKListItemLockupElement *)arg1 ;
-(void)configureForListItemLockupElement:(id)arg1 wide:(BOOL)arg2 ;
-(VideosExtrasConstrainedArtworkContainerView *)artworkContainerView;
@end

