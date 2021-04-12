/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKHeaderWithUnderlineView.h>

@class GKLabel, UIView, GKButton, NSLayoutConstraint, NSString;

@interface GKSectionHeaderView : GKHeaderWithUnderlineView {

	BOOL _manualItemCount;
	BOOL _allSectionItemsVisible;
	GKLabel* _leftLabel;
	SEL _showAllAction;
	id _rightTarget;
	SEL _rightAction;
	/*function pointer*/void* _itemCountFormatter;
	long long _maxRange;
	UIView* _backgroundView;
	GKButton* _rightButton;
	unsigned long long _sectionIndex;
	long long _itemCount;
	long long _maxItemCount;
	NSLayoutConstraint* _backgroundViewHeightConstraint;

}

@property (nonatomic,retain) GKButton * rightButton;                                           //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                                  //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) long long itemCount;                                              //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) long long maxItemCount;                                           //@synthesize maxItemCount=_maxItemCount - In the implementation block
@property (assign,nonatomic) BOOL allSectionItemsVisible;                                      //@synthesize allSectionItemsVisible=_allSectionItemsVisible - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backgroundViewHeightConstraint;              //@synthesize backgroundViewHeightConstraint=_backgroundViewHeightConstraint - In the implementation block
@property (nonatomic,retain) GKLabel * leftLabel;                                              //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,retain) NSString * leftText; 
@property (nonatomic,retain) NSString * rightText; 
@property (assign,nonatomic) SEL showAllAction;                                                //@synthesize showAllAction=_showAllAction - In the implementation block
@property (assign,nonatomic) id rightTarget;                                                   //@synthesize rightTarget=_rightTarget - In the implementation block
@property (assign,nonatomic) SEL rightAction;                                                  //@synthesize rightAction=_rightAction - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* itemCountFormatter;                     //@synthesize itemCountFormatter=_itemCountFormatter - In the implementation block
@property (assign,nonatomic) BOOL manualItemCount;                                             //@synthesize manualItemCount=_manualItemCount - In the implementation block
@property (assign,nonatomic) long long maxRange;                                               //@synthesize maxRange=_maxRange - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)phoneMetrics;
+(id)padMetrics;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(NSString *)leftText;
-(GKButton *)rightButton;
-(UIView *)backgroundView;
-(void)setMaxRange:(long long)arg1 ;
-(GKLabel *)leftLabel;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)prepareForReuse;
-(long long)itemCount;
-(void)updateLabel;
-(void)applyLayoutAttributes:(id)arg1 ;
-(long long)maxRange;
-(long long)maxItemCount;
-(void)setMaxItemCount:(long long)arg1 ;
-(void)setAllSectionItemsVisible:(BOOL)arg1 ;
-(void)setRightButton:(GKButton *)arg1 ;
-(BOOL)allSectionItemsVisible;
-(void)rightButtonTouched:(id)arg1 ;
-(void)setBackgroundViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)backgroundViewHeightConstraint;
-(void)updateGutterConstraints;
-(void)establishConstraints;
-(void)setRightText:(NSString *)arg1 ;
-(void)setLeftText:(NSString *)arg1 ;
-(CGRect)rightButtonFrame;
-(void)setShowAllAction:(SEL)arg1 ;
-(void)setItemCount:(long long)arg1 ;
-(void)setItemCountFormatter:(/*function pointer*/void*)arg1 ;
-(void)setLeftLabel:(GKLabel *)arg1 ;
-(SEL)showAllAction;
-(id)rightTarget;
-(void)setRightTarget:(id)arg1 ;
-(SEL)rightAction;
-(void)setRightAction:(SEL)arg1 ;
-(/*function pointer*/void*)itemCountFormatter;
-(BOOL)manualItemCount;
-(void)setManualItemCount:(BOOL)arg1 ;
-(NSString *)rightText;
-(void)dealloc;
@end

