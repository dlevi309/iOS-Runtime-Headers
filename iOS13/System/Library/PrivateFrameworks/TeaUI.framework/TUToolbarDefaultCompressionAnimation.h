/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TUBarCompressionAnimating.h>

@class UIToolbar;

@interface TUToolbarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating> {

	double _topOffset;
	UIToolbar* _toolbar;

}

@property (nonatomic,retain) UIToolbar * toolbar;                     //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,readonly) BOOL shouldCompressAtTop; 
@property (assign,nonatomic) double topOffset;                        //@synthesize topOffset=_topOffset - In the implementation block
-(id)initWithToolbar:(id)arg1 ;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(double)topOffset;
-(void)setTopOffset:(double)arg1 ;
-(void)updateWithPercentage:(double)arg1 ;
-(void)scrollViewIsAtTop:(BOOL)arg1 ;
-(BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2 ;
-(double)maximumBarHeightForTraitCollection:(id)arg1 ;
-(double)minimumBarHeightForTraitCollection:(id)arg1 ;
-(void)reloadWithTraitCollection:(id)arg1 ;
-(BOOL)shouldCompressAtTop;
@end

