/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSAttributedString;

@interface _TVStarBar : NSObject {

	unsigned long long _numStars;
	double _value;
	NSAttributedString* _countStr;
	double _barWidth;
	double _height;
	UIEdgeInsets _barMargin;

}

@property (assign,nonatomic) unsigned long long numStars;                //@synthesize numStars=_numStars - In the implementation block
@property (assign,nonatomic) double value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSAttributedString * countStr;              //@synthesize countStr=_countStr - In the implementation block
@property (assign,nonatomic) double barWidth;                            //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets barMargin;                     //@synthesize barMargin=_barMargin - In the implementation block
-(void)setHeight:(double)arg1 ;
-(double)barWidth;
-(void)setBarWidth:(double)arg1 ;
-(double)height;
-(void)setValue:(double)arg1 ;
-(double)value;
-(unsigned long long)numStars;
-(void)setNumStars:(unsigned long long)arg1 ;
-(NSAttributedString *)countStr;
-(void)setCountStr:(NSAttributedString *)arg1 ;
-(UIEdgeInsets)barMargin;
-(void)setBarMargin:(UIEdgeInsets)arg1 ;
@end

