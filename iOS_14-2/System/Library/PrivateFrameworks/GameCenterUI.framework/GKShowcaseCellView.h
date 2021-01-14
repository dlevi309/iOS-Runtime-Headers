/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UICollectionViewCell, GKHairlineView;

@interface GKShowcaseCellView : UICollectionReusableView {

	UICollectionViewCell* _cell;
	SEL _touchedShowcaseCellAction;
	GKHairlineView* _underlineView;

}

@property (nonatomic,retain) GKHairlineView * underlineView;              //@synthesize underlineView=_underlineView - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * cell;                 //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) SEL touchedShowcaseCellAction;               //@synthesize touchedShowcaseCellAction=_touchedShowcaseCellAction - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(UICollectionViewCell *)cell;
-(id)initWithFrame:(CGRect)arg1 ;
-(SEL)touchedShowcaseCellAction;
-(void)setTouchedShowcaseCellAction:(SEL)arg1 ;
-(void)setUnderlineView:(GKHairlineView *)arg1 ;
-(void)setCell:(UICollectionViewCell *)arg1 ;
-(void)prepareForReuse;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)alignmentRectForText;
-(GKHairlineView *)underlineView;
-(void)dealloc;
@end

