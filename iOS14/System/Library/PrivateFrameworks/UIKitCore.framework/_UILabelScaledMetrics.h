/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject {

	double _actualScaleFactor;
	double _baselineOffset;
	double _scaledBaselineOffset;
	double _scaledLineHeight;
	long long _measuredNumberOfLines;
	NSAttributedString* _scaledAttributedText;
	double _unscaledFirstBaselineOffset;
	CGSize _targetSize;
	CGSize _scaledSize;
	CGSize _unscaledAndPossiblyTooLargeSize;

}

@property (assign,nonatomic) CGSize targetSize;                                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGSize scaledSize;                                      //@synthesize scaledSize=_scaledSize - In the implementation block
@property (assign,nonatomic) double actualScaleFactor;                               //@synthesize actualScaleFactor=_actualScaleFactor - In the implementation block
@property (assign,nonatomic) double baselineOffset;                                  //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) double scaledBaselineOffset;                            //@synthesize scaledBaselineOffset=_scaledBaselineOffset - In the implementation block
@property (assign,nonatomic) double scaledLineHeight;                                //@synthesize scaledLineHeight=_scaledLineHeight - In the implementation block
@property (assign,nonatomic) long long measuredNumberOfLines;                        //@synthesize measuredNumberOfLines=_measuredNumberOfLines - In the implementation block
@property (nonatomic,retain) NSAttributedString * scaledAttributedText;              //@synthesize scaledAttributedText=_scaledAttributedText - In the implementation block
@property (assign,nonatomic) CGSize unscaledAndPossiblyTooLargeSize;                 //@synthesize unscaledAndPossiblyTooLargeSize=_unscaledAndPossiblyTooLargeSize - In the implementation block
@property (assign,nonatomic) double unscaledFirstBaselineOffset;                     //@synthesize unscaledFirstBaselineOffset=_unscaledFirstBaselineOffset - In the implementation block
-(CGSize)targetSize;
-(void)setActualScaleFactor:(double)arg1 ;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setBaselineOffset:(double)arg1 ;
-(double)unscaledFirstBaselineOffset;
-(void)setUnscaledAndPossiblyTooLargeSize:(CGSize)arg1 ;
-(NSAttributedString *)scaledAttributedText;
-(CGSize)unscaledAndPossiblyTooLargeSize;
-(void)setScaledLineHeight:(double)arg1 ;
-(void)setMeasuredNumberOfLines:(long long)arg1 ;
-(double)scaledBaselineOffset;
-(long long)measuredNumberOfLines;
-(void)setUnscaledFirstBaselineOffset:(double)arg1 ;
-(double)baselineOffset;
-(double)actualScaleFactor;
-(void)setScaledSize:(CGSize)arg1 ;
-(void)setScaledAttributedText:(NSAttributedString *)arg1 ;
-(CGSize)scaledSize;
-(double)scaledLineHeight;
-(void)setScaledBaselineOffset:(double)arg1 ;
@end

