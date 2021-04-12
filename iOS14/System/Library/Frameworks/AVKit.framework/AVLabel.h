/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class UILabel, AVLayoutItemAttributes, NSString, NSAttributedString, UIFont, UIActivityIndicatorView, NSLayoutConstraint;

@interface AVLabel : UIView <AVPlaybackControlsViewItem> {

	BOOL _collapsed;
	BOOL _included;
	BOOL _removed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _showsLoadingIndicator;
	UILabel* _label;
	AVLayoutItemAttributes* _layoutAttributes;
	long long _loadingIndicatorAlignment;
	NSString* _text;
	NSAttributedString* _attributedText;
	UIFont* _font;
	UIActivityIndicatorView* _loadingIndicator;
	long long _numberOfLines;
	NSLayoutConstraint* _loadingIndicatorLeftAlignmentConstraint;
	NSLayoutConstraint* _loadingIndicatorRightAlignmentConstraint;
	CGSize _extrinsicContentSize;

}

@property (nonatomic,readonly) UILabel * label;                                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UILabel * labelIfLoaded; 
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;                               //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                                                    //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * loadingIndicatorLeftAlignmentConstraint;               //@synthesize loadingIndicatorLeftAlignmentConstraint=_loadingIndicatorLeftAlignmentConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * loadingIndicatorRightAlignmentConstraint;              //@synthesize loadingIndicatorRightAlignmentConstraint=_loadingIndicatorRightAlignmentConstraint - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                 //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorAlignment;                                        //@synthesize loadingIndicatorAlignment=_loadingIndicatorAlignment - In the implementation block
@property (nonatomic,copy) NSString * text;                                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                          //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                              //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize extrinsicContentSize;                                                //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                              //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                          //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                            //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                                //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                               //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                                //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCollapsed;
-(void)setRemoved:(BOOL)arg1 ;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(NSAttributedString *)attributedText;
-(id)viewForLastBaselineLayout;
-(void)tintColorDidChange;
-(BOOL)isRemoved;
-(CGSize)intrinsicContentSize;
-(AVLayoutItemAttributes *)layoutAttributes;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGSize)extrinsicContentSize;
-(void)_updateLayoutItem;
-(BOOL)isIncluded;
-(void)setFont:(UIFont *)arg1 ;
-(void)setLoadingIndicatorAlignment:(long long)arg1 ;
-(long long)loadingIndicatorAlignment;
-(NSLayoutConstraint *)loadingIndicatorLeftAlignmentConstraint;
-(void)setLoadingIndicatorLeftAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)loadingIndicatorRightAlignmentConstraint;
-(void)setLoadingIndicatorRightAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)layoutAttributesDidChange;
-(void)didMoveToSuperview;
-(void)setText:(NSString *)arg1 ;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)updateConstraints;
-(void)setIncluded:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(BOOL)hasAlternateAppearance;
-(NSString *)text;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(UIActivityIndicatorView *)loadingIndicator;
-(BOOL)hasFullScreenAppearance;
-(long long)numberOfLines;
-(UILabel *)label;
-(UILabel *)labelIfLoaded;
-(UIFont *)font;
@end

