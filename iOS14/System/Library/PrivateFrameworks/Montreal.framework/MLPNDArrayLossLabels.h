/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLabels:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)labels;
-(NSMutableArray *)largeReductionSumResult;
-(NSMutableArray *)smallReductionSumResult;
-(void)setLargeReductionSumResult:(NSMutableArray *)arg1 ;
-(void)setSmallReductionSumResult:(NSMutableArray *)arg1 ;
@end

