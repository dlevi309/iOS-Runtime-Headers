/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoFrameAnalyzerDelegate.h>

@interface HMIVideoFrameAnalyzerDelegateAdapter : HMFObject <HMIVideoFrameAnalyzerDelegate> {

	/*^block*/id _frameAnalyzerDidAnalyzeFrame;

}

@property (copy) id frameAnalyzerDidAnalyzeFrame;              //@synthesize frameAnalyzerDidAnalyzeFrame=_frameAnalyzerDidAnalyzeFrame - In the implementation block
-(void)frameAnalyzer:(id)arg1 didAnalyzeFrame:(id)arg2 error:(id)arg3 ;
-(id)frameAnalyzerDidAnalyzeFrame;
-(void)setFrameAnalyzerDidAnalyzeFrame:(id)arg1 ;
@end

