/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


@class NSMutableArray, NSArray;

@interface MLPNDArrayLossLabels : NSObject {

	NSMutableArray* _largeReductionSumResult;
	NSMutableArray* _smallReductionSumResult;
	NSArray* _labels;

}

@property (retain) NSMutableArray * largeReductionSumResult;              //@synthesize largeReductionSumResult=_largeReductionSumResult - In the implementation block
@property (retain) NSMutableArray * smallReductionSumResult;              //@synthesize smallReductionSumResult=_smallReductionSumResult - In the implementation block
@property (retain) NSArray * labels;                                      //@synthesize labels=_labels - In the implementation block
-(id)init;
-(NSMutableArray *)largeReductionSumResult;
-(NSMutableArray *)smallReductionSumResult;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)setLargeReductionSumResult:(NSMutableArray *)arg1 ;
-(void)setSmallReductionSumResult:(NSMutableArray *)arg1 ;
@end

