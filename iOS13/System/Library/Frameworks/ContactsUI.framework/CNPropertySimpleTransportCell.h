/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNTransportButton, UIImageView, UIColor, UIView;

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {

	CNTransportButton* _transportIcon1;
	CNTransportButton* _transportIcon2;
	CNTransportButton* _transportIcon3;
	UIImageView* _starView;
	BOOL _allowsActions;
	BOOL _shouldShowBadge;
	BOOL _shouldShowTransportButtons;
	BOOL _needsUpdateTouchAreas;
	UIImageView* _standardStarView;
	UIColor* _actionsColor;
	UIView* _badgeView;

}

@property (nonatomic,retain) UIView * badgeView;                                       //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateTouchAreas;                               //@synthesize needsUpdateTouchAreas=_needsUpdateTouchAreas - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                       //@synthesize allowsActions=_allowsActions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowStar; 
@property (assign,nonatomic) BOOL shouldShowBadge;                                     //@synthesize shouldShowBadge=_shouldShowBadge - In the implementation block
@property (assign,nonatomic) BOOL shouldShowTransportButtons;                          //@synthesize shouldShowTransportButtons=_shouldShowTransportButtons - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon1; 
@property (nonatomic,readonly) CNTransportButton * transportIcon2; 
@property (nonatomic,readonly) CNTransportButton * transportIcon3; 
@property (nonatomic,readonly) CNTransportButton * standardTransportIcon; 
@property (nonatomic,readonly) UIImageView * standardStarView;                         //@synthesize standardStarView=_standardStarView - In the implementation block
@property (nonatomic,readonly) UIView * standardBadgeView; 
@property (nonatomic,retain) UIColor * actionsColor;                                   //@synthesize actionsColor=_actionsColor - In the implementation block
+(id)standardStarView;
+(void)_updateStarImageForView:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(UIView *)badgeView;
-(BOOL)shouldShowBadge;
-(void)setBadgeView:(UIView *)arg1 ;
-(id)variableConstraints;
-(BOOL)shouldPerformDefaultAction;
-(id)rightMostView;
-(void)setCardGroupItem:(id)arg1 ;
-(BOOL)allowsActions;
-(void)setAllowsActions:(BOOL)arg1 ;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(void)updateWithPropertyItem:(id)arg1 ;
-(CNTransportButton *)standardTransportIcon;
-(CNTransportButton *)transportIcon1;
-(CNTransportButton *)transportIcon2;
-(CNTransportButton *)transportIcon3;
-(UIView *)standardBadgeView;
-(void)setShouldShowBadge:(BOOL)arg1 ;
-(void)updateLabelNeedingHuggingContent;
-(void)updateStarIcon;
-(void)transportButtonClicked:(id)arg1 ;
-(void)setActionsColor:(UIColor *)arg1 ;
-(BOOL)shouldShowTransportButtons;
-(void)setShouldShowTransportButtons:(BOOL)arg1 ;
-(UIImageView *)standardStarView;
-(UIColor *)actionsColor;
-(BOOL)needsUpdateTouchAreas;
-(void)setNeedsUpdateTouchAreas:(BOOL)arg1 ;
@end

