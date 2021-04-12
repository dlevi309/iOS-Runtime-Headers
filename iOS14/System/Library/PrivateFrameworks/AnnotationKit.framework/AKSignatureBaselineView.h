/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)scaleFactor;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_isRTL;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setBaselinePercent:(double)arg1 ;
-(void)_drawBaselineInContext:(CGContextRef)arg1 ;
-(UIEdgeInsets)lastSafeAreaInsets;
-(void)setLastSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(double)baselinePercent;
@end

