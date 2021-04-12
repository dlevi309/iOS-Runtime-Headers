/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@protocol TUBarCompressionAnimating
@property (nonatomic,readonly) BOOL shouldCompressAtTop; 
@property (assign,nonatomic) double topOffset; 
@required
-(double)topOffset;
-(void)setTopOffset:(double)arg1;
-(void)updateWithPercentage:(double)arg1;
-(void)scrollViewIsAtTop:(BOOL)arg1;
-(BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2;
-(double)maximumBarHeightForTraitCollection:(id)arg1;
-(double)minimumBarHeightForTraitCollection:(id)arg1;
-(void)reloadWithTraitCollection:(id)arg1;
-(BOOL)shouldCompressAtTop;

@end

