/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TUBarCompressionAnimating.h>

@class UIView, UINavigationBar, TUAnimationFloatFunction;

@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating> {

	BOOL shouldCompressAtTop;
	BOOL _hideTitleOnTop;
	BOOL _compressTitleView;
	double topOffset;
	UIView* _titleView;
	UINavigationBar* _navigationBar;
	TUAnimationFloatFunction* _opacityFunction;
	TUAnimationFloatFunction* _scaleFunction;
	TUAnimationFloatFunction* _translateFunction;

}

@property (nonatomic,retain) UIView * titleView;                                        //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) UINavigationBar * navigationBar;                         //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * opacityFunction;                //@synthesize opacityFunction=_opacityFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * scaleFunction;                  //@synthesize scaleFunction=_scaleFunction - In the implementation block
@property (nonatomic,retain) TUAnimationFloatFunction * translateFunction;              //@synthesize translateFunction=_translateFunction - In the implementation block
@property (assign,nonatomic) BOOL compressTitleView;                                    //@synthesize compressTitleView=_compressTitleView - In the implementation block
@property (assign,nonatomic) BOOL hideTitleOnTop;                                       //@synthesize hideTitleOnTop=_hideTitleOnTop - In the implementation block
@property (nonatomic,readonly) BOOL shouldCompressAtTop; 
@property (assign,nonatomic) double topOffset; 
-(UINavigationBar *)navigationBar;
-(UIView *)titleView;
-(void)setTitleView:(UIView *)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
-(double)topOffset;
-(void)setTopOffset:(double)arg1 ;
-(id)fetchCustomTitleView;
-(id)fetchRegularTitleView;
-(TUAnimationFloatFunction *)opacityFunction;
-(TUAnimationFloatFunction *)scaleFunction;
-(TUAnimationFloatFunction *)translateFunction;
-(BOOL)compressTitleView;
-(BOOL)hideTitleOnTop;
-(void)setCompressTitleView:(BOOL)arg1 ;
-(void)updateWithPercentage:(double)arg1 ;
-(void)scrollViewIsAtTop:(BOOL)arg1 ;
-(BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2 ;
-(double)maximumBarHeightForTraitCollection:(id)arg1 ;
-(double)minimumBarHeightForTraitCollection:(id)arg1 ;
-(void)reloadWithTraitCollection:(id)arg1 ;
-(BOOL)shouldCompressAtTop;
-(void)setHideTitleOnTop:(BOOL)arg1 ;
-(void)setOpacityFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setScaleFunction:(TUAnimationFloatFunction *)arg1 ;
-(void)setTranslateFunction:(TUAnimationFloatFunction *)arg1 ;
@end

