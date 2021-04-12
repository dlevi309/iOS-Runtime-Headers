/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKDashboardPlayerCell.h>

@class UIImageView, UIButton, NSLayoutConstraint;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell {

	BOOL _selectable;
	BOOL _showsLastPlayedStatusText;
	BOOL _showsMessagesHandleInStatusText;
	UIImageView* _selectionView;
	UIButton* _selectionButton;
	NSLayoutConstraint* _nameConstraint;
	NSLayoutConstraint* _selectionHorizontalConstraint;
	NSLayoutConstraint* _selectionVerticalConstraint;
	NSLayoutConstraint* _statusHeightConstraint;
	double _nameInitialConstant;
	double _selectionInitialHorizontalConstant;
	double _selectionInitialVerticalConstant;
	double _statusInitialConstant;

}

@property (assign,nonatomic) UIImageView * selectionView;                                     //@synthesize selectionView=_selectionView - In the implementation block
@property (assign,nonatomic) UIButton * selectionButton;                                      //@synthesize selectionButton=_selectionButton - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * nameConstraint;                             //@synthesize nameConstraint=_nameConstraint - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * selectionHorizontalConstraint;              //@synthesize selectionHorizontalConstraint=_selectionHorizontalConstraint - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * selectionVerticalConstraint;                //@synthesize selectionVerticalConstraint=_selectionVerticalConstraint - In the implementation block
@property (assign,nonatomic) NSLayoutConstraint * statusHeightConstraint;                     //@synthesize statusHeightConstraint=_statusHeightConstraint - In the implementation block
@property (assign,nonatomic) double nameInitialConstant;                                      //@synthesize nameInitialConstant=_nameInitialConstant - In the implementation block
@property (assign,nonatomic) double selectionInitialHorizontalConstant;                       //@synthesize selectionInitialHorizontalConstant=_selectionInitialHorizontalConstant - In the implementation block
@property (assign,nonatomic) double selectionInitialVerticalConstant;                         //@synthesize selectionInitialVerticalConstant=_selectionInitialVerticalConstant - In the implementation block
@property (assign,nonatomic) double statusInitialConstant;                                    //@synthesize statusInitialConstant=_statusInitialConstant - In the implementation block
@property (assign,getter=isSelectable,nonatomic) BOOL selectable;                             //@synthesize selectable=_selectable - In the implementation block
@property (assign,nonatomic) BOOL showsLastPlayedStatusText;                                  //@synthesize showsLastPlayedStatusText=_showsLastPlayedStatusText - In the implementation block
@property (assign,nonatomic) BOOL showsMessagesHandleInStatusText;                            //@synthesize showsMessagesHandleInStatusText=_showsMessagesHandleInStatusText - In the implementation block
-(void)setPlayer:(id)arg1 ;
-(void)setSelectionView:(UIImageView *)arg1 ;
-(UIButton *)selectionButton;
-(void)setShowsMessagesHandleInStatusText:(BOOL)arg1 ;
-(BOOL)showsLastPlayedStatusText;
-(BOOL)showsMessagesHandleInStatusText;
-(void)setSelectionButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)nameConstraint;
-(void)setNameConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)selectionHorizontalConstraint;
-(void)setSelectionHorizontalConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)statusHeightConstraint;
-(void)_dynamicUserInterfaceTraitDidChange;
-(NSLayoutConstraint *)selectionVerticalConstraint;
-(void)setSelectionVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStatusHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(double)nameInitialConstant;
-(void)setNameInitialConstant:(double)arg1 ;
-(double)selectionInitialHorizontalConstant;
-(void)setSelectionInitialHorizontalConstant:(double)arg1 ;
-(double)selectionInitialVerticalConstant;
-(void)setSelectionInitialVerticalConstant:(double)arg1 ;
-(double)statusInitialConstant;
-(void)setStatusInitialConstant:(double)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelectable;
-(void)setSelectable:(BOOL)arg1 ;
-(UIImageView *)selectionView;
-(void)setStatusWithAchievementEarnedPoints:(long long)arg1 andDate:(id)arg2 ;
-(void)setShowsLastPlayedStatusText:(BOOL)arg1 ;
-(void)awakeFromNib;
@end

