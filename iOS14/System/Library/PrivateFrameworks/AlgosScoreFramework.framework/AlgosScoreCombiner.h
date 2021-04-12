/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
*/


@interface AlgosScoreCombiner : NSObject {

	void* combinerData;
	int _debug;

}

@property (assign,nonatomic) int debug;              //@synthesize debug=_debug - In the implementation block
+(id)combiner;
-(id)init;
-(void)setDebug:(int)arg1 ;
-(void)clearScores;
-(int)debug;
-(void)dealloc;
-(double)signedMeanSquaredDeviation;
-(void)addScore:(double)arg1 weight:(double)arg2 type:(id)arg3 label:(id)arg4 ;
-(id)scoreScores:(id)arg1 ;
@end

