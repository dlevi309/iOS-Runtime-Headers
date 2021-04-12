/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterTerminalHelper.h>

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {

	NSError* _terminalError;

}
-(void)dealloc;
-(id)error;
-(long long)status;
-(void)finishWriting;
-(void)flush;
-(void)startSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV7)arg1 ;
-(void)setFinishWritingDelegate:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2 ;
@end

