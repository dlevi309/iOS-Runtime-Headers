/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVAssetWriterHelper.h>

@class NSArray, NSOperation;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {

	NSArray* _finishWritingOperations;
	NSOperation* _transitionToTerminalStatusOperation;

}

@property (nonatomic,readonly) NSOperation * transitionToTerminalStatusOperation;              //@synthesize transitionToTerminalStatusOperation=_transitionToTerminalStatusOperation - In the implementation block
-(void)dealloc;
-(long long)status;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 finishWritingOperations:(id)arg2 ;
-(NSOperation *)transitionToTerminalStatusOperation;
-(void)_finishWritingOperationsDidFinish;
@end

