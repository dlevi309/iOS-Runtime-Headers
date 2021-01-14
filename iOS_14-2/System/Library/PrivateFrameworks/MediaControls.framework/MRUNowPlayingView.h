/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class MRUNowPlayingControlsView, MRUEmbeddingView, UIView, MRUVisualStylingProvider, MRUNowPlayingContainerView;

@interface MRUNowPlayingView : UIView {

	BOOL _supportsHorizontalLayout;
	BOOL _showSuggestionsView;
	MRUNowPlayingControlsView* _controlsView;
	MRUEmbeddingView* _collapsedEmbeddingView;
	UIView* _suggestionsView;
	MRUVisualStylingProvider* _stylingProvider;
	long long _layout;
	long long _context;
	MRUNowPlayingContainerView* _containerView;
	UIEdgeInsets _contentEdgeInsets;

}

@property (nonatomic,retain) MRUNowPlayingContainerView * containerView;               //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) MRUNowPlayingControlsView * controlsView;               //@synthesize controlsView=_controlsView - In the implementation block
@property (nonatomic,readonly) MRUEmbeddingView * collapsedEmbeddingView;              //@synthesize collapsedEmbeddingView=_collapsedEmbeddingView - In the implementation block
@property (nonatomic,retain) UIView * suggestionsView;                                 //@synthesize suggestionsView=_suggestionsView - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;               //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long layout;                                         //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long context;                                        //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL supportsHorizontalLayout;                            //@synthesize supportsHorizontalLayout=_supportsHorizontalLayout - In the implementation block
@property (assign,nonatomic) BOOL showSuggestionsView;                                 //@synthesize showSuggestionsView=_showSuggestionsView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;                           //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
-(void)setContainerView:(MRUNowPlayingContainerView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(long long)context;
-(void)layoutSubviews;
-(MRUNowPlayingContainerView *)containerView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
-(void)updateVisibility;
-(void)setLayout:(long long)arg1 ;
-(MRUNowPlayingControlsView *)controlsView;
-(long long)layout;
-(void)setContext:(long long)arg1 ;
-(void)setSupportsHorizontalLayout:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(BOOL)supportsHorizontalLayout;
-(void)layoutSubviewsHorizontal;
-(void)layoutSubviewsVertical;
-(void)setSuggestionsView:(UIView *)arg1 ;
-(void)setShowSuggestionsView:(BOOL)arg1 ;
-(MRUEmbeddingView *)collapsedEmbeddingView;
-(UIView *)suggestionsView;
-(BOOL)showSuggestionsView;
@end

