/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIKeyCommandDiscoverabilityHUDColumnView, NSArray;

@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell {

	BOOL _constraintsForTwoColumns;
	UIKeyCommandDiscoverabilityHUDColumnView* _leftColumnView;
	UIKeyCommandDiscoverabilityHUDColumnView* _rightColumnView;
	NSArray* _constraints;

}

@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * leftColumnView;               //@synthesize leftColumnView=_leftColumnView - In the implementation block
@property (nonatomic,retain) UIKeyCommandDiscoverabilityHUDColumnView * rightColumnView;              //@synthesize rightColumnView=_rightColumnView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                   //@synthesize constraints=_constraints - In the implementation block
@property (assign,nonatomic) BOOL constraintsForTwoColumns;                                           //@synthesize constraintsForTwoColumns=_constraintsForTwoColumns - In the implementation block
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(UIKeyCommandDiscoverabilityHUDColumnView *)leftColumnView;
-(void)setLeftColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(UIKeyCommandDiscoverabilityHUDColumnView *)rightColumnView;
-(void)setRightColumnView:(UIKeyCommandDiscoverabilityHUDColumnView *)arg1 ;
-(BOOL)constraintsForTwoColumns;
-(void)setConstraintsForTwoColumns:(BOOL)arg1 ;
@end

