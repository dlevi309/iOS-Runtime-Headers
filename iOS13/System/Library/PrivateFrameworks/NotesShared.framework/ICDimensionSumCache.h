/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSMutableDictionary;

@interface ICDimensionSumCache : NSObject {

	double _sum;
	double _estimateDimension;
	NSMutableDictionary* _dimensions;

}

@property (assign,nonatomic) double sum;                                      //@synthesize sum=_sum - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) double estimateDimension;                      //@synthesize estimateDimension=_estimateDimension - In the implementation block
-(id)init;
-(unsigned long long)count;
-(NSMutableDictionary *)dimensions;
-(double)sum;
-(void)setSum:(double)arg1 ;
-(double)dimensionForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
-(double)estimateDimension;
@end

