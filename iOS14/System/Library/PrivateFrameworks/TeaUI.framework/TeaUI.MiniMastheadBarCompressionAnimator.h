/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TUBarCompressionAnimating.h>

@interface TeaUI.MiniMastheadBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {

	 topOffset;
	 navigationBar;
	 maskView;

}

@property (assign,nonatomic) double topOffset; 
@property (readonly,nonatomic) BOOL shouldCompressAtTop; 
@property (readonly,nonatomic) BOOL shouldCloseGapOnScroll; 
-(void)setTopOffset:(double)arg1 ;
-(BOOL)shouldCloseGapOnScroll;
-(id)init;
-(double)topOffset;
-(void)prepareForUpdates;
-(void)updateWithPercentage:(double)arg1 ;
-(void)scrollViewIsAtTop:(BOOL)arg1 ;
-(BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2 ;
-(double)maximumBarHeightForTraitCollection:(id)arg1 ;
-(double)minimumBarHeightForTraitCollection:(id)arg1 ;
-(void)reloadWithTraitCollection:(id)arg1 ;
-(BOOL)shouldCompressAtTop;
@end

