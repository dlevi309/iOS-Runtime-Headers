/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class MPAVRoute, NSString, MRUVisualStylingProvider, MPRouteLabel, MPUMarqueeView, UILabel;

@interface MRUNowPlayingLabelView : UIView <MRUVisualStylingProviderObserver> {

	BOOL _showPlaceholderText;
	BOOL _marqueeEnabled;
	MPAVRoute* _route;
	NSString* _title;
	NSString* _subtitle;
	NSString* _placeholderText;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	long long _context;
	MPRouteLabel* _routeLabel;
	MPUMarqueeView* _titleMarqueeView;
	MPUMarqueeView* _subtitleMarqueeView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _placeholderLabel;

}

@property (nonatomic,retain) MPRouteLabel * routeLabel;                                //@synthesize routeLabel=_routeLabel - In the implementation block
@property (nonatomic,retain) MPUMarqueeView * titleMarqueeView;                        //@synthesize titleMarqueeView=_titleMarqueeView - In the implementation block
@property (nonatomic,retain) MPUMarqueeView * subtitleMarqueeView;                     //@synthesize subtitleMarqueeView=_subtitleMarqueeView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                  //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                               //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,retain) MPAVRoute * route;                                        //@synthesize route=_route - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * placeholderText;                                 //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;               //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                         //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long context;                                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholderText;                                 //@synthesize showPlaceholderText=_showPlaceholderText - In the implementation block
@property (assign,getter=isMarqueeEnabled,nonatomic) BOOL marqueeEnabled;              //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)titleLabel;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(MPAVRoute *)route;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(NSString *)placeholderText;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(long long)context;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isMarqueeEnabled;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(void)setRouteLabel:(MPRouteLabel *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)updateVisibility;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(UILabel *)placeholderLabel;
-(void)setLayout:(long long)arg1 ;
-(MPRouteLabel *)routeLabel;
-(void)updateVisualStyling;
-(NSString *)title;
-(long long)layout;
-(void)setContext:(long long)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(BOOL)showPlaceholderText;
-(void)setShowPlaceholderText:(BOOL)arg1 ;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(void)updateContentSizeCategory;
-(void)updateMarquee;
-(MPUMarqueeView *)titleMarqueeView;
-(void)setTitleMarqueeView:(MPUMarqueeView *)arg1 ;
-(MPUMarqueeView *)subtitleMarqueeView;
-(void)setSubtitleMarqueeView:(MPUMarqueeView *)arg1 ;
@end

