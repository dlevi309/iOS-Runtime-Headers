/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSString, UIFont, UIActivityIndicatorView, NSLayoutConstraint;

@interface AVLabel : UIView {

	BOOL _showsLoadingIndicator;
	BOOL _collapsed;
	BOOL _included;
	BOOL _removed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	UILabel* _label;
	long long _loadingIndicatorAlignment;
	NSString* _text;
	UIFont* _font;
	UIActivityIndicatorView* _loadingIndicator;
	NSLayoutConstraint* _loadingIndicatorLeftAlignmentConstraint;
	NSLayoutConstraint* _loadingIndicatorRightAlignmentConstraint;
	CGSize _extrinsicContentSize;

}

@property (nonatomic,readonly) UILabel * label;                                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UILabel * labelIfLoaded; 
@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;                               //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic) CGSize extrinsicContentSize;                                                //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                          //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                            //@synthesize included=_included - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                              //@synthesize removed=_removed - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                                //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                               //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * loadingIndicatorLeftAlignmentConstraint;               //@synthesize loadingIndicatorLeftAlignmentConstraint=_loadingIndicatorLeftAlignmentConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * loadingIndicatorRightAlignmentConstraint;              //@synthesize loadingIndicatorRightAlignmentConstraint=_loadingIndicatorRightAlignmentConstraint - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                 //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorAlignment;                                        //@synthesize loadingIndicatorAlignment=_loadingIndicatorAlignment - In the implementation block
@property (nonatomic,copy) NSString * text;                                                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                              //@synthesize font=_font - In the implementation block
-(UILabel *)label;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)didMoveToSuperview;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(CGSize)extrinsicContentSize;
-(BOOL)isRemoved;
-(BOOL)isCollapsedOrExcluded;
-(void)setIncluded:(BOOL)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)isIncluded;
-(BOOL)hasAlternateAppearance;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(UIActivityIndicatorView *)loadingIndicator;
-(UILabel *)labelIfLoaded;
-(void)setLoadingIndicatorAlignment:(long long)arg1 ;
-(long long)loadingIndicatorAlignment;
-(NSLayoutConstraint *)loadingIndicatorLeftAlignmentConstraint;
-(void)setLoadingIndicatorLeftAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)loadingIndicatorRightAlignmentConstraint;
-(void)setLoadingIndicatorRightAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
@end

