/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/


@protocol TUBarCompressionAnimating
@property (nonatomic,readonly) BOOL shouldCompressAtTop; 
@property (assign,nonatomic) double topOffset; 
@property (nonatomic,readonly) BOOL shouldCloseGapOnScroll; 
@required
-(void)setTopOffset:(double)arg1;
-(BOOL)shouldCloseGapOnScroll;
-(double)topOffset;
-(void)prepareForUpdates;
-(void)updateWithPercentage:(double)arg1;
-(void)scrollViewIsAtTop:(BOOL)arg1;
-(BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2;
-(double)maximumBarHeightForTraitCollection:(id)arg1;
-(double)minimumBarHeightForTraitCollection:(id)arg1;
-(void)reloadWithTraitCollection:(id)arg1;
-(BOOL)shouldCompressAtTop;

@end

