/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTLearnedLocationEngineProtocol <NSObject>
@optional
-(void)learnedLocationEngineWillBeginTraining:(id)arg1;
-(void)learnedLocationEngineDidFinishTraining:(id)arg1;

@required
-(void)learnedLocationEngineDidUpdate:(id)arg1 intervalSinceLastUpdate:(double)arg2;

@end

