/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MRUVisualStylingProviderObserver.h>

@class UIView, MRUVisualStylingProvider, NSString;

@interface MRUNowPlayingContainerView : UIView <MRUVisualStylingProviderObserver> {

	BOOL _showSeparator;
	BOOL _supportsHorizontalLayout;
	UIView* _contentView;
	MRUVisualStylingProvider* _stylingProvider;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * separatorView;                                  //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) MRUVisualStylingProvider * stylingProvider;              //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                      //@synthesize showSeparator=_showSeparator - In the implementation block
@property (assign,nonatomic) BOOL supportsHorizontalLayout;                           //@synthesize supportsHorizontalLayout=_supportsHorizontalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)separatorView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(BOOL)showSeparator;
-(void)setShowSeparator:(BOOL)arg1 ;
-(void)updateVisibility;
-(UIView *)contentView;
-(void)updateVisualStyling;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setSupportsHorizontalLayout:(BOOL)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)visualStylingProviderDidChange:(id)arg1 ;
-(BOOL)supportsHorizontalLayout;
@end

