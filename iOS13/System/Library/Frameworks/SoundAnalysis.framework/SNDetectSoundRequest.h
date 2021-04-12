/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNAnalyzerProviding.h>
#import <libobjc.A.dylib/SNRequest.h>

@class SNSoundDetector, NSString;

@interface SNDetectSoundRequest : NSObject <SNAnalyzerProviding, SNRequest> {

	SNSoundDetector* _detector;
	NSString* _soundIdentifier;

}

@property (nonatomic,readonly) NSString * soundIdentifier;                   //@synthesize soundIdentifier=_soundIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SNAnalyzing> analyzer; 
-(id<SNAnalyzing>)analyzer;
-(id)initWithVGGishBasedMLModel:(id)arg1 soundIdentifier:(id)arg2 ;
-(id)initWithSoundIdentifier:(id)arg1 ;
-(NSString *)soundIdentifier;
@end

