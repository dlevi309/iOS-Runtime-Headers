/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)index;
-(NSRange)range;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)setRange:(NSRange)arg1 ;
@end

