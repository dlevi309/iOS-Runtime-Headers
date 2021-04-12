/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWFanOutNode.h>

@class BWNodeOutput;

@interface BWVideoSDOFSplitNode : BWFanOutNode {

	opaqueCMFormatDescriptionRef _originalVideoFormatDescription;
	BWNodeOutput* _originalOutput;
	BWNodeOutput* _sdofOutput;

}

@property (nonatomic,readonly) BWNodeOutput * originalOutput;              //@synthesize originalOutput=_originalOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * sdofOutput;                  //@synthesize sdofOutput=_sdofOutput - In the implementation block
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(id)init;
-(BWNodeOutput *)sdofOutput;
-(BWNodeOutput *)originalOutput;
-(void)dealloc;
@end

