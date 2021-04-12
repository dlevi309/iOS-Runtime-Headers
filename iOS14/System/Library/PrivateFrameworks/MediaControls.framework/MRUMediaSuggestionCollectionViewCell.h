/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MRUArtworkView, NSString, MRUVisualStylingProvider, UIActivityIndicatorView, UILabel;

@interface MRUMediaSuggestionCollectionViewCell : UICollectionViewCell <MRUVisualStylingProviderObserver> {

	BOOL _showActivityIndicator;
	MRUArtworkView* _artworkView;
	NSString* _title;
	NSString* _subtitle;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	UIActivityIndicatorView* _activityView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityView;                  //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) MRUArtworkView * artworkView;                          //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                        //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL showActivityIndicator;                              //@synthesize showActivityIndicator=_showActivityIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(MRUArtworkView *)artworkView;
-(NSString *)subtitle;
-(UIActivityIndicatorView *)activityView;
-(void)setTitle:(NSString *)arg1 ;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(BOOL)showActivityIndicator;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setLayout:(long long)arg1 ;
-(void)updateVisualStyling;
-(void)setShowActivityIndicator:(BOOL)arg1 ;
-(NSString *)title;
-(long long)layout;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
-(void)updateVisiblity;
@end

