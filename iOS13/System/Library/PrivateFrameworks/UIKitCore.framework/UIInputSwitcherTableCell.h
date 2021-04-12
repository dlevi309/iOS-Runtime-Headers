/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIInputSwitcherTableCellBackgroundView;

@interface UIInputSwitcherTableCell : UITableViewCell {

	BOOL _usesDarkTheme;
	BOOL _usesStraightLeftEdge;
	BOOL _first;
	BOOL _last;
	UIEdgeInsets _interactiveInsets;

}

@property (nonatomic,retain) UIInputSwitcherTableCellBackgroundView * backgroundView; 
@property (assign,nonatomic) BOOL usesDarkTheme;                                                   //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) BOOL usesStraightLeftEdge;                                            //@synthesize usesStraightLeftEdge=_usesStraightLeftEdge - In the implementation block
@property (assign,getter=isFirst,nonatomic) BOOL first;                                            //@synthesize first=_first - In the implementation block
@property (assign,getter=isLast,nonatomic) BOOL last;                                              //@synthesize last=_last - In the implementation block
@property (assign,nonatomic) UIEdgeInsets interactiveInsets;                                       //@synthesize interactiveInsets=_interactiveInsets - In the implementation block
+(id)reuseIdentifier;
-(void)setFirst:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)usesStraightLeftEdge;
-(BOOL)isFirst;
-(BOOL)isLast;
-(void)_updateRoundedCorners;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)setLast:(BOOL)arg1 ;
-(void)setUsesStraightLeftEdge:(BOOL)arg1 ;
-(BOOL)usesDarkTheme;
-(UIEdgeInsets)interactiveInsets;
-(void)setInteractiveInsets:(UIEdgeInsets)arg1 ;
@end

