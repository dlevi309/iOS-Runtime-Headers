/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNSpeechUtteranceDetector, NSString;

@interface SNDetectSpeechUtteranceRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNSpeechUtteranceDetector* _detector;

}

@property (readonly) double decisionDelay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id)init;
-(id<SNAnalyzing>)analyzer;
-(id)initWithRequestType:(long long)arg1 ;
-(BOOL)detected;
-(double)decisionDelay;
@end

