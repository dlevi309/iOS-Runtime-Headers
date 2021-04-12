/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
*/


@class NSArray;

@interface NPComponentSequence : NSObject {

	BOOL _favorite;
	NSArray* _observation;
	NSArray* _sequence;
	NSArray* _oovIndices;
	double _score;
	double _emissionModelScore;
	double _stateModelScore;

}

@property (copy) NSArray * observation;                    //@synthesize observation=_observation - In the implementation block
@property (copy) NSArray * sequence;                       //@synthesize sequence=_sequence - In the implementation block
@property (copy) NSArray * oovIndices;                     //@synthesize oovIndices=_oovIndices - In the implementation block
@property (assign) double score;                           //@synthesize score=_score - In the implementation block
@property (assign) double emissionModelScore;              //@synthesize emissionModelScore=_emissionModelScore - In the implementation block
@property (assign) double stateModelScore;                 //@synthesize stateModelScore=_stateModelScore - In the implementation block
@property (getter=isFavorite) BOOL favorite;               //@synthesize favorite=_favorite - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setObservation:(NSArray *)arg1 ;
-(double)score;
-(void)setSequence:(NSArray *)arg1 ;
-(NSArray *)sequence;
-(NSArray *)observation;
-(void)setScore:(double)arg1 ;
-(BOOL)isFavorite;
-(void)setFavorite:(BOOL)arg1 ;
-(void)setOovIndices:(NSArray *)arg1 ;
-(void)setEmissionModelScore:(double)arg1 ;
-(void)setStateModelScore:(double)arg1 ;
-(BOOL)isEqualToComponentSequence:(id)arg1 ;
-(NSArray *)oovIndices;
-(id)oovTokens;
-(double)emissionModelScore;
-(double)stateModelScore;
-(id)initWithObservationSequence:(id)arg1 hiddenSequence:(id)arg2 oovIndices:(id)arg3 emissionModelScore:(double)arg4 stateModelScore:(double)arg5 boost:(double)arg6 ;
-(void)setValue:(id)arg1 atSequenceIndex:(unsigned long long)arg2 ;
@end

