/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBHeaderView.h>

@interface OBSetupAssistantHeaderView : OBHeaderView {

	BOOL _hasTitle;
	double _distanceFromTop;

}

@property (assign,nonatomic) double distanceFromTop;              //@synthesize distanceFromTop=_distanceFromTop - In the implementation block
@property (assign,nonatomic) BOOL hasTitle;                       //@synthesize hasTitle=_hasTitle - In the implementation block
-(void)setHasTitle:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(double)bottomPadding;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 distanceToTopInset:(double)arg3 ;
-(id)initWithTitle:(id)arg1 symbolName:(id)arg2 distanceToTopInset:(double)arg3 ;
-(id)initWithTitle:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 ;
-(double)distanceFromTop;
-(double)topPadding;
-(double)iconToHeaderLabelPadding;
-(double)headerLabelToDetailLabelPadding;
-(double)detailLabelToAccessoryButtonPadding;
-(void)setDistanceFromTop:(double)arg1 ;
@end

