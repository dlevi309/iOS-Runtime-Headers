/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface AKSignatureBaselineView : UIView {

	double _baselinePercent;
	UIEdgeInsets _lastSafeAreaInsets;

}

@property (assign,nonatomic) UIEdgeInsets lastSafeAreaInsets;              //@synthesize lastSafeAreaInsets=_lastSafeAreaInsets - In the implementation block
@property (assign,nonatomic) double baselinePercent;                       //@synthesize baselinePercent=_baselinePercent - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(double)scaleFactor;
-(void)_commonInit;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_isRTL;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBaselinePercent:(double)arg1 ;
-(void)_drawBaselineInContext:(CGContextRef)arg1 ;
-(UIEdgeInsets)lastSafeAreaInsets;
-(void)setLastSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(double)baselinePercent;
@end

