/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)actualScaleFactor;
-(void)setActualScaleFactor:(double)arg1 ;
-(double)baselineOffset;
-(void)setBaselineOffset:(double)arg1 ;
-(double)scaledBaselineOffset;
-(void)setScaledBaselineOffset:(double)arg1 ;
-(double)scaledLineHeight;
-(void)setScaledLineHeight:(double)arg1 ;
-(CGSize)scaledSize;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setScaledSize:(CGSize)arg1 ;
-(long long)measuredNumberOfLines;
-(void)setMeasuredNumberOfLines:(long long)arg1 ;
-(NSAttributedString *)scaledAttributedText;
-(void)setScaledAttributedText:(NSAttributedString *)arg1 ;
-(CGSize)unscaledAndPossiblyTooLargeSize;
-(void)setUnscaledAndPossiblyTooLargeSize:(CGSize)arg1 ;
-(double)unscaledFirstBaselineOffset;
-(void)setUnscaledFirstBaselineOffset:(double)arg1 ;
@end

