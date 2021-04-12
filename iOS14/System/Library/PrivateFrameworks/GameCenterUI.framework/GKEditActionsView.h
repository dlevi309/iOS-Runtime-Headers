/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, GKCollectionViewCell, NSArray;

@interface GKEditActionsView : UIView {

	double _visibleWidth;
	CALayer* _maskLayer;
	GKCollectionViewCell* _cell;
	NSArray* _editActionConstraints;
	NSArray* _actionButtons;

}

@property (assign,nonatomic) double visibleWidth;                          //@synthesize visibleWidth=_visibleWidth - In the implementation block
@property (nonatomic,retain) CALayer * maskLayer;                          //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic) GKCollectionViewCell * cell;                  //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSArray * editActionConstraints;              //@synthesize editActionConstraints=_editActionConstraints - In the implementation block
@property (nonatomic,retain) NSArray * actionButtons;                      //@synthesize actionButtons=_actionButtons - In the implementation block
-(GKCollectionViewCell *)cell;
-(void)setCell:(GKCollectionViewCell *)arg1 ;
-(void)setMaskLayer:(CALayer *)arg1 ;
-(void)setVisibleWidth:(double)arg1 ;
-(void)didTouchEditAction:(id)arg1 ;
-(void)didTouchMoreEditAction:(id)arg1 ;
-(void)setActionButtons:(NSArray *)arg1 ;
-(void)setEditActionConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 cell:(id)arg2 ;
-(void)prepareActionButtons;
-(double)visibleWidth;
-(NSArray *)editActionConstraints;
-(NSArray *)actionButtons;
-(CALayer *)maskLayer;
-(void)dealloc;
@end

