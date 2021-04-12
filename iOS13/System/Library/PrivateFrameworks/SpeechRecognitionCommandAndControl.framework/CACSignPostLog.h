/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@interface CACSignPostLog : NSObject {

	unsigned long long _currentPerfID;

}

@property (assign,nonatomic) unsigned long long currentPerfID;              //@synthesize currentPerfID=_currentPerfID - In the implementation block
+(id)sharedInstance;
+(id)sharedLog;
+(id)_sFetchElementsLog;
+(void)FetchElementsEventBeganWithReason:(id)arg1 expectedDelay:(double)arg2 ;
+(void)FetchElementsEventCompletedWithNumberOfElements:(unsigned long long)arg1 numberOfElementsAlreadyCached:(unsigned long long)arg2 ;
+(void)CommandStringReceived:(id)arg1 ;
+(void)CommandStringExecuted:(id)arg1 success:(BOOL)arg2 ;
-(unsigned long long)currentPerfID;
-(void)setCurrentPerfID:(unsigned long long)arg1 ;
@end

