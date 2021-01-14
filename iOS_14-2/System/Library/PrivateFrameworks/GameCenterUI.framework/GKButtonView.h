/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIButton, NSMutableArray, GKCollectionViewDataSource;

@interface GKButtonView : UICollectionReusableView {

	UIButton* _button;
	SEL _action;
	NSMutableArray* _buttonConstraints;
	GKCollectionViewDataSource* _dataSource;

}

@property (nonatomic,retain) UIButton * button;                                    //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttonConstraints;                   //@synthesize buttonConstraints=_buttonConstraints - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) SEL action;                                           //@synthesize action=_action - In the implementation block
+(void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2 ;
+(BOOL)requiresConstraintBasedLayout;
-(UIButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButton:(UIButton *)arg1 ;
-(GKCollectionViewDataSource *)dataSource;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(NSMutableArray *)buttonConstraints;
-(void)setButtonConstraints:(NSMutableArray *)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(void)setDataSource:(GKCollectionViewDataSource *)arg1 ;
-(void)updateConstraints;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

