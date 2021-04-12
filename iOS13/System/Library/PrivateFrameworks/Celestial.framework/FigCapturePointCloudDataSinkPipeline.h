/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>

@class NSString;

@interface FigCapturePointCloudDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	NSString* _sourceID;

}

@property (nonatomic,readonly) NSString * sourceID;              //@synthesize sourceID=_sourceID - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)_buildPointCloudDataSinkPipelineWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 clientPID:(id)arg4 delegate:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 clientPID:(id)arg5 delegate:(id)arg6 ;
@end

