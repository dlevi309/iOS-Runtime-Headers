/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
*/


@interface AlgosStreamScore : NSObject {

	void* streamData;
	double logisticScale;
	BOOL _debug;
	BOOL _enforceStreamEnd;
	BOOL _music;

}

@property (assign,nonatomic) BOOL debug;                         //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL enforceStreamEnd;              //@synthesize enforceStreamEnd=_enforceStreamEnd - In the implementation block
@property (assign,nonatomic) BOOL music;                         //@synthesize music=_music - In the implementation block
+(id)streamScore;
-(id)init;
-(BOOL)music;
-(void)setDebug:(BOOL)arg1 ;
-(void)addStreamStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 params:(id)arg5 ;
-(void)addStreamEnd:(double)arg1 ;
-(id)scoreStreaming:(id)arg1 ;
-(void)addStreamTierSwitch:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 ;
-(void)addStreamStart:(double)arg1 play:(double)arg2 ;
-(BOOL)debug;
-(void)dealloc;
-(void)clearStreamRows;
-(void)addStreamStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 ;
-(void)addStreamStartupStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 ;
-(void)addStreamFailure:(double)arg1 weight:(double)arg2 ;
-(void)addStreamPenalty:(double)arg1 amount:(double)arg2 ;
-(void)setMusic:(BOOL)arg1 ;
-(void)addRawStreamEvent:(int)arg1 start:(double)arg2 end:(double)arg3 weight:(double)arg4 quality:(double)arg5 params:(id)arg6 ;
-(double)findTotalTime:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)enforceStreamEnd;
-(void)setEnforceStreamEnd:(BOOL)arg1 ;
@end

