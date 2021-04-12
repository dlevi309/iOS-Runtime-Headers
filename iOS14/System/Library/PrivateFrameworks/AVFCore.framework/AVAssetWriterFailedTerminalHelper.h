/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterTerminalHelper.h>

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {

	NSError* _terminalError;

}
-(void)flush;
-(void)setFinishWritingDelegate:(id)arg1 ;
-(id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2 ;
-(void)finishWritingWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)error;
-(void)startSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)endSessionAtSourceTime:(SCD_Struct_AV6)arg1 ;
-(void)finishWriting;
-(void)flushSegment;
-(long long)status;
-(void)dealloc;
-(id)initWithConfigurationState:(id)arg1 ;
@end

