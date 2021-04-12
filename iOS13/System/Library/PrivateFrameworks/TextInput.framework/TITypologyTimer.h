/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)elapsedTime;
-(void)addInputEventWithTimestamp:(double)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(double)mostRecentTimestamp;
-(void)setMostRecentTimestamp:(double)arg1 ;
-(double)maxTimeIntervalBetweenInputs;
-(void)setMaxTimeIntervalBetweenInputs:(double)arg1 ;
-(BOOL)foundFirstInput;
-(void)setFoundFirstInput:(BOOL)arg1 ;
@end

