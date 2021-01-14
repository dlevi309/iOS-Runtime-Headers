/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@interface TITypologyTimer : NSObject {

	BOOL _foundFirstInput;
	double _elapsedTime;
	double _mostRecentTimestamp;
	double _maxTimeIntervalBetweenInputs;

}

@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double mostRecentTimestamp;                       //@synthesize mostRecentTimestamp=_mostRecentTimestamp - In the implementation block
@property (assign,nonatomic) double maxTimeIntervalBetweenInputs;              //@synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs - In the implementation block
@property (assign,nonatomic) BOOL foundFirstInput;                             //@synthesize foundFirstInput=_foundFirstInput - In the implementation block
-(void)setElapsedTime:(double)arg1 ;
-(void)setFoundFirstInput:(BOOL)arg1 ;
-(BOOL)foundFirstInput;
-(double)maxTimeIntervalBetweenInputs;
-(double)elapsedTime;
-(double)mostRecentTimestamp;
-(void)addInputEventWithTimestamp:(double)arg1 ;
-(void)setMostRecentTimestamp:(double)arg1 ;
-(void)setMaxTimeIntervalBetweenInputs:(double)arg1 ;
@end

