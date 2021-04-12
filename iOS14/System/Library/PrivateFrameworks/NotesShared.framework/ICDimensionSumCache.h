/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)sum;
-(id)init;
-(NSMutableDictionary *)dimensions;
-(unsigned long long)count;
-(void)setSum:(double)arg1 ;
-(double)dimensionForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
-(double)estimateDimension;
@end

