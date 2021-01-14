/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTLearnedLocationEngineProtocol <NSObject>
@optional
-(void)learnedLocationEngineDidFinishTraining:(id)arg1;
-(void)learnedLocationEngineWillBeginTraining:(id)arg1;

@required
-(void)learnedLocationEngineDidUpdate:(id)arg1 intervalSinceLastUpdate:(double)arg2;

@end

