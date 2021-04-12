/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@interface PRSRankingSpanCalculator : NSObject {

	BOOL _pathExists;
	float _unordered;
	float _ordered;
	float _firstTermPosition;
	float _normCount;
	float _pairDist;

}

@property (assign,nonatomic) float unordered;                      //@synthesize unordered=_unordered - In the implementation block
@property (assign,nonatomic) float ordered;                        //@synthesize ordered=_ordered - In the implementation block
@property (assign,nonatomic) float firstTermPosition;              //@synthesize firstTermPosition=_firstTermPosition - In the implementation block
@property (assign,nonatomic) float normCount;                      //@synthesize normCount=_normCount - In the implementation block
@property (assign,nonatomic) float pairDist;                       //@synthesize pairDist=_pairDist - In the implementation block
@property (assign,nonatomic) BOOL pathExists;                      //@synthesize pathExists=_pathExists - In the implementation block
+(BOOL)doesOrderedSpanExistWithArrayOfIndexArrays:(unsigned long long*)arg1 arrayOfIndexArraysCounts:(unsigned long long*)arg2 arrayOfIndexArraysCount:(unsigned long long)arg3 orderedSpan:(long long*)arg4 firstTermPosition:(unsigned long long*)arg5 queryTermCount:(unsigned long long)arg6 ;
+(long long)minimumAnyOrderSpanWithArrayOfIndexArrays:(unsigned long long*)arg1 arrayOfIndexArraysCounts:(unsigned long long*)arg2 arrayOfIndexArraysCount:(unsigned long long)arg3 queryTermCount:(unsigned long long)arg4 ;
+(long long)minimumPairDistanceWithArrayOfIndexArrays:(unsigned long long*)arg1 arrayOfIndexArraysCounts:(unsigned long long*)arg2 arrayOfIndexArraysCount:(unsigned long long)arg3 queryTermCount:(unsigned long long)arg4 tokenCount:(unsigned long long)arg5 ;
-(void)setOrdered:(float)arg1 ;
-(id)description;
-(void)reset;
-(float)ordered;
-(BOOL)pathExists;
-(void)resetSpans;
-(void)updateWithTermPositions:(id)arg1 queryTermCount:(unsigned long long)arg2 tokenCount:(unsigned long long)arg3 ;
-(float)unordered;
-(void)setUnordered:(float)arg1 ;
-(float)firstTermPosition;
-(void)setFirstTermPosition:(float)arg1 ;
-(float)normCount;
-(void)setNormCount:(float)arg1 ;
-(float)pairDist;
-(void)setPairDist:(float)arg1 ;
-(void)setPathExists:(BOOL)arg1 ;
@end
