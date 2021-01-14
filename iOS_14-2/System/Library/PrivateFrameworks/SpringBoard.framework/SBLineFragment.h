/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBLineFragment : NSObject {

	unsigned long long _index;
	double _lineWidth;
	NSRange _range;

}

@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) double lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
+(id)fragmentWithIndex:(unsigned long long)arg1 length:(unsigned long long)arg2 lineWidth:(double)arg3 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(unsigned long long)index;
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)description;
@end

