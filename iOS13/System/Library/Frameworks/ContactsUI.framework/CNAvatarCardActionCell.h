/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class CNQuickAction, UIImageView, CNAvatarCardHighlightView, UILabel, UIPageControl, UIView, UIButton, NSLayoutConstraint;

@interface CNAvatarCardActionCell : UITableViewCell {

	CGPoint _initialLocation;
	CGPoint _lastLocation;
	BOOL _swipped;
	BOOL _moreHighlighted;
	BOOL _gestureActivated;
	BOOL _transitioning;
	CNQuickAction* _action;
	long long _context;
	UIImageView* _actionImageView;
	CNAvatarCardHighlightView* _defaultHighlightView;
	CNAvatarCardHighlightView* _moreHighlightView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIPageControl* _pageControl;
	UILabel* _moreLabel;
	UIView* _translatingView;
	UIView* _separatorView;
	UIButton* _expandButton;
	NSLayoutConstraint* _punchOutLeftConstraint;
	NSLayoutConstraint* _translatingViewLeadingConstraint;
	NSLayoutConstraint* _pageControlLeadingConstraint;
	NSLayoutConstraint* _expandButtonWidthConstraint;
	NSLayoutConstraint* _moreHighlightViewHiddingConstraint;
	double _initialTranslatingViewLeadingConstraintConstant;
	unsigned long long _lastScrollDirection;
	double _lastScrollDirectionTimestamp;

}

@property (nonatomic,retain) UIImageView * actionImageView;                                        //@synthesize actionImageView=_actionImageView - In the implementation block
@property (nonatomic,retain) CNAvatarCardHighlightView * defaultHighlightView;                     //@synthesize defaultHighlightView=_defaultHighlightView - In the implementation block
@property (nonatomic,retain) CNAvatarCardHighlightView * moreHighlightView;                        //@synthesize moreHighlightView=_moreHighlightView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                          //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) UILabel * moreLabel;                                                  //@synthesize moreLabel=_moreLabel - In the implementation block
@property (nonatomic,retain) UIView * translatingView;                                             //@synthesize translatingView=_translatingView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                               //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIButton * expandButton;                                              //@synthesize expandButton=_expandButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * punchOutLeftConstraint;                          //@synthesize punchOutLeftConstraint=_punchOutLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * translatingViewLeadingConstraint;                //@synthesize translatingViewLeadingConstraint=_translatingViewLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * pageControlLeadingConstraint;                    //@synthesize pageControlLeadingConstraint=_pageControlLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * expandButtonWidthConstraint;                     //@synthesize expandButtonWidthConstraint=_expandButtonWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * moreHighlightViewHiddingConstraint;              //@synthesize moreHighlightViewHiddingConstraint=_moreHighlightViewHiddingConstraint - In the implementation block
@property (assign,nonatomic) double initialTranslatingViewLeadingConstraintConstant;               //@synthesize initialTranslatingViewLeadingConstraintConstant=_initialTranslatingViewLeadingConstraintConstant - In the implementation block
@property (assign,nonatomic) unsigned long long lastScrollDirection;                               //@synthesize lastScrollDirection=_lastScrollDirection - In the implementation block
@property (assign,nonatomic) double lastScrollDirectionTimestamp;                                  //@synthesize lastScrollDirectionTimestamp=_lastScrollDirectionTimestamp - In the implementation block
@property (assign,nonatomic) BOOL gestureActivated;                                                //@synthesize gestureActivated=_gestureActivated - In the implementation block
@property (assign,nonatomic) BOOL transitioning;                                                   //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic) BOOL swipped;                                                         //@synthesize swipped=_swipped - In the implementation block
@property (assign,nonatomic) BOOL moreHighlighted;                                                 //@synthesize moreHighlighted=_moreHighlighted - In the implementation block
@property (nonatomic,retain) CNQuickAction * action;                                               //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long context;                                                    //@synthesize context=_context - In the implementation block
+(id)cellNibForActions;
+(id)cellNibForContacts;
-(long long)context;
-(void)prepareForReuse;
-(CNQuickAction *)action;
-(void)setContext:(long long)arg1 ;
-(UILabel *)titleLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)separatorView;
-(void)reloadData;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setAction:(CNQuickAction *)arg1 ;
-(BOOL)transitioning;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(UIPageControl *)pageControl;
-(void)setPageControl:(UIPageControl *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_updateFonts;
-(void)_updateHighlightAnimated:(BOOL)arg1 ;
-(void)startTrackingWithGestureRecognizer:(id)arg1 ;
-(void)stopTrackingWithGestureRecognizer:(id)arg1 ;
-(void)trackHighlight:(id)arg1 ;
-(BOOL)swipped;
-(void)setSwipped:(BOOL)arg1 ;
-(BOOL)moreHighlighted;
-(void)setMoreHighlighted:(BOOL)arg1 ;
-(UIImageView *)actionImageView;
-(void)setActionImageView:(UIImageView *)arg1 ;
-(CNAvatarCardHighlightView *)defaultHighlightView;
-(void)setDefaultHighlightView:(CNAvatarCardHighlightView *)arg1 ;
-(CNAvatarCardHighlightView *)moreHighlightView;
-(void)setMoreHighlightView:(CNAvatarCardHighlightView *)arg1 ;
-(UILabel *)moreLabel;
-(void)setMoreLabel:(UILabel *)arg1 ;
-(UIView *)translatingView;
-(void)setTranslatingView:(UIView *)arg1 ;
-(UIButton *)expandButton;
-(void)setExpandButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)punchOutLeftConstraint;
-(void)setPunchOutLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)translatingViewLeadingConstraint;
-(void)setTranslatingViewLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)pageControlLeadingConstraint;
-(void)setPageControlLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)expandButtonWidthConstraint;
-(void)setExpandButtonWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)moreHighlightViewHiddingConstraint;
-(void)setMoreHighlightViewHiddingConstraint:(NSLayoutConstraint *)arg1 ;
-(double)initialTranslatingViewLeadingConstraintConstant;
-(void)setInitialTranslatingViewLeadingConstraintConstant:(double)arg1 ;
-(unsigned long long)lastScrollDirection;
-(void)setLastScrollDirection:(unsigned long long)arg1 ;
-(double)lastScrollDirectionTimestamp;
-(void)setLastScrollDirectionTimestamp:(double)arg1 ;
-(BOOL)gestureActivated;
-(void)setGestureActivated:(BOOL)arg1 ;
@end

