/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@class NSArray;

@interface PRSRankingCosineComponents : NSObject {

	NSArray* _termFrequencies;
	NSArray* _termFrequenciesWeighted;
	NSArray* _inverseDocFrequencies;
	NSArray* _termInverseDoc;
	NSArray* _termInverseDocWeighted;
	unsigned long long _fieldLength;

}

@property (nonatomic,retain) NSArray * termFrequencies;                      //@synthesize termFrequencies=_termFrequencies - In the implementation block
@property (nonatomic,retain) NSArray * termFrequenciesWeighted;              //@synthesize termFrequenciesWeighted=_termFrequenciesWeighted - In the implementation block
@property (nonatomic,retain) NSArray * inverseDocFrequencies;                //@synthesize inverseDocFrequencies=_inverseDocFrequencies - In the implementation block
@property (nonatomic,retain) NSArray * termInverseDoc;                       //@synthesize termInverseDoc=_termInverseDoc - In the implementation block
@property (nonatomic,retain) NSArray * termInverseDocWeighted;               //@synthesize termInverseDocWeighted=_termInverseDocWeighted - In the implementation block
@property (assign,nonatomic) unsigned long long fieldLength;                 //@synthesize fieldLength=_fieldLength - In the implementation block
-(NSArray *)termFrequencies;
-(void)setTermFrequencies:(NSArray *)arg1 ;
-(NSArray *)termFrequenciesWeighted;
-(void)setTermFrequenciesWeighted:(NSArray *)arg1 ;
-(NSArray *)inverseDocFrequencies;
-(void)setInverseDocFrequencies:(NSArray *)arg1 ;
-(NSArray *)termInverseDoc;
-(void)setTermInverseDoc:(NSArray *)arg1 ;
-(NSArray *)termInverseDocWeighted;
-(void)setTermInverseDocWeighted:(NSArray *)arg1 ;
-(unsigned long long)fieldLength;
-(void)setFieldLength:(unsigned long long)arg1 ;
@end

