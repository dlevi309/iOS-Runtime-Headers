/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSArray;

@interface CRLatticePath : NSObject {

	NSArray* _edges;
	double _lexiconScore;
	double _cnnScore;
	double _ngramScore;
	double _geometryScore;
	double _patternScore;
	double _totalScore;

}

@property (nonatomic,readonly) NSArray * edges;              //@synthesize edges=_edges - In the implementation block
@property (readonly) double lexiconScore;                    //@synthesize lexiconScore=_lexiconScore - In the implementation block
@property (readonly) double cnnScore;                        //@synthesize cnnScore=_cnnScore - In the implementation block
@property (readonly) double ngramScore;                      //@synthesize ngramScore=_ngramScore - In the implementation block
@property (readonly) double geometryScore;                   //@synthesize geometryScore=_geometryScore - In the implementation block
@property (readonly) double patternScore;                    //@synthesize patternScore=_patternScore - In the implementation block
@property (readonly) double totalScore;                      //@synthesize totalScore=_totalScore - In the implementation block
-(NSArray *)edges;
-(double)geometryScore;
-(double)totalScore;
-(double)cnnScore;
-(double)lexiconScore;
-(id)initWithEdgeIndexes:(id)arg1 lex:(double)arg2 cnn:(double)arg3 ngram:(double)arg4 geom:(double)arg5 pattern:(double)arg6 total:(double)arg7 ;
-(double)ngramScore;
-(double)patternScore;
@end

