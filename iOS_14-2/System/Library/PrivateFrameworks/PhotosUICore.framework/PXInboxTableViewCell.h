/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol PXInboxModel;
@class NSAttributedString, PXInboxTableViewCellLayoutCoordinator, UIImageView, PXRoundedCornerOverlayView, PXBadgedThumbnailView, UILabel;

@interface PXInboxTableViewCell : UITableViewCell {

	BOOL _unseen;
	id<PXInboxModel> _model;
	NSAttributedString* _title;
	PXInboxTableViewCellLayoutCoordinator* _layoutCoordinator;
	UIImageView* _placeholderImageView;
	PXRoundedCornerOverlayView* _cornerOverlayView;
	PXBadgedThumbnailView* _thumbnailView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImageView * placeholderImageView;                                     //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * cornerOverlayView;                         //@synthesize cornerOverlayView=_cornerOverlayView - In the implementation block
@property (nonatomic,retain) PXBadgedThumbnailView * thumbnailView;                                  //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) id<PXInboxModel> model;                                                   //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSAttributedString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * subtitle; 
@property (assign,getter=isUnseen,nonatomic) BOOL unseen;                                            //@synthesize unseen=_unseen - In the implementation block
@property (nonatomic,retain) PXInboxTableViewCellLayoutCoordinator * layoutCoordinator;              //@synthesize layoutCoordinator=_layoutCoordinator - In the implementation block
+(id)unseenHighlightColor;
+(id)thumbnailBadgeImageForTintColor:(id)arg1 ;
+(id)placeholderEmptyImage;
+(void)preloadResources;
-(UILabel *)titleLabel;
-(void)_updateTitle;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id<PXInboxModel>)model;
-(BOOL)isUnseen;
-(PXInboxTableViewCellLayoutCoordinator *)layoutCoordinator;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(NSAttributedString *)subtitle;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(void)prepareForReuse;
-(void)setLayoutCoordinator:(PXInboxTableViewCellLayoutCoordinator *)arg1 ;
-(PXRoundedCornerOverlayView *)cornerOverlayView;
-(void)setCornerOverlayView:(PXRoundedCornerOverlayView *)arg1 ;
-(PXBadgedThumbnailView *)thumbnailView;
-(void)setThumbnailView:(PXBadgedThumbnailView *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)setModel:(id<PXInboxModel>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)_updateTitleLabel;
-(UIImageView *)placeholderImageView;
-(void)setSubtitle:(NSAttributedString *)arg1 ;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(NSAttributedString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setUnseen:(BOOL)arg1 ;
@end

