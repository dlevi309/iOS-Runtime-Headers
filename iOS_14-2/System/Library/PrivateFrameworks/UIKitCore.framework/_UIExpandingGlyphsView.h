/*
* Generated on Thursday, January 14, 2021 at 2:20:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSAttributedString, NSArray, UIAccessibilityHUDItem, NSString;

@interface _UIExpandingGlyphsView : UIView <_UIStatusBarDisplayable, CAAnimationDelegate> {

	BOOL _expandsFromLeftToRight;
	BOOL _fadesOut;
	int _remainingAnimationCount;
	NSAttributedString* _attributedString;
	double _baselineOffset;
	NSArray* _imageViews;
	/*^block*/id _completionBlock;
	CGSize _intrinsicSize;

}

@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * imageViews;                                                   //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) int remainingAnimationCount;                                            //@synthesize remainingAnimationCount=_remainingAnimationCount - In the implementation block
@property (assign,nonatomic) CGSize intrinsicSize;                                                   //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;                                  //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) double baselineOffset;                                                //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) BOOL expandsFromLeftToRight;                                            //@synthesize expandsFromLeftToRight=_expandsFromLeftToRight - In the implementation block
@property (assign,nonatomic) BOOL fadesOut;                                                          //@synthesize fadesOut=_fadesOut - In the implementation block
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSAttributedString *)attributedString;
-(BOOL)prefersBaselineAlignment;
-(BOOL)fadesOut;
-(double)baselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)imageViews;
-(CGSize)intrinsicSize;
-(int)remainingAnimationCount;
-(BOOL)expandsFromLeftToRight;
-(void)setRemainingAnimationCount:(int)arg1 ;
-(void)setIntrinsicSize:(CGSize)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(void)setFadesOut:(BOOL)arg1 ;
-(void)setExpandsFromLeftToRight:(BOOL)arg1 ;
-(void)animateCompletionBlock:(/*^block*/id)arg1 ;
@end

