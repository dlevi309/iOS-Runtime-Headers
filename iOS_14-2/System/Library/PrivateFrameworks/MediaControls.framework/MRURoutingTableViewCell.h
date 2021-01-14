/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/MRURoutingSubtitleControllerDelegate.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MRURoutingTableViewCellDelegate;
@class UIImage, NSString, MRURoutingSubtitleController, MRURoutingAccessoryView, MRUVolumeSlider, MRUVisualStylingProvider, UIImageView, UILabel, MRURoutingSubtitleView, UIView, UITapGestureRecognizer;

@interface MRURoutingTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, UIGestureRecognizerDelegate> {

	BOOL _showOutline;
	BOOL _showVolumeSlider;
	id<MRURoutingTableViewCellDelegate> _delegate;
	UIImage* _iconImage;
	NSString* _title;
	MRURoutingSubtitleController* _subtitleStateController;
	MRURoutingAccessoryView* _routingAccessoryView;
	MRUVolumeSlider* _volumeSlider;
	MRUVisualStylingProvider* _stylingProvider;
	UIImageView* _iconImageView;
	UIImageView* _outlineImageView;
	UILabel* _titleLabel;
	MRURoutingSubtitleView* _subtitleView;
	UIView* _separatorView;
	UITapGestureRecognizer* _expandGestureRecognizer;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) UIImageView * iconImageView;                                           //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * outlineImageView;                                        //@synthesize outlineImageView=_outlineImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) MRURoutingSubtitleView * subtitleView;                                 //@synthesize subtitleView=_subtitleView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                                //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * expandGestureRecognizer;                      //@synthesize expandGestureRecognizer=_expandGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<MRURoutingTableViewCellDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                                   //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) MRURoutingSubtitleController * subtitleStateController;              //@synthesize subtitleStateController=_subtitleStateController - In the implementation block
@property (nonatomic,readonly) MRURoutingAccessoryView * routingAccessoryView;                      //@synthesize routingAccessoryView=_routingAccessoryView - In the implementation block
@property (nonatomic,retain) MRUVolumeSlider * volumeSlider;                                        //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;                            //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) BOOL showOutline;                                                      //@synthesize showOutline=_showOutline - In the implementation block
@property (assign,nonatomic) BOOL showVolumeSlider;                                                 //@synthesize showVolumeSlider=_showVolumeSlider - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                                        //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(UIImageView *)iconImageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIView *)separatorView;
-(id<MRURoutingTableViewCellDelegate>)delegate;
-(UIImage *)iconImage;
-(void)setTitle:(NSString *)arg1 ;
-(void)setVolumeSlider:(MRUVolumeSlider *)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)prepareForReuse;
-(MRURoutingSubtitleView *)subtitleView;
-(void)setSubtitleView:(MRURoutingSubtitleView *)arg1 ;
-(void)setDelegate:(id<MRURoutingTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)didTapToExpand;
-(MRUVolumeSlider *)volumeSlider;
-(UIEdgeInsets)contentEdgeInsets;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)updateVisibility;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)updateVisualStyling;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)routingSubtitleStateController:(id)arg1 didUpdateText:(id)arg2 accessory:(long long)arg3 ;
-(MRURoutingSubtitleController *)subtitleStateController;
-(MRURoutingAccessoryView *)routingAccessoryView;
-(void)setShowVolumeSlider:(BOOL)arg1 ;
-(void)setShowOutline:(BOOL)arg1 ;
-(void)transitionToNextVisibleStateWithDuration:(double)arg1 ;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
-(void)setSubtitleAccessory:(long long)arg1 ;
-(BOOL)showOutline;
-(BOOL)showVolumeSlider;
-(UIImageView *)outlineImageView;
-(void)setOutlineImageView:(UIImageView *)arg1 ;
-(UITapGestureRecognizer *)expandGestureRecognizer;
-(void)setExpandGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

