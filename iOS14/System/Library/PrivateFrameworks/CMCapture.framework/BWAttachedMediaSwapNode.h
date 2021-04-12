/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSString, NSArray;

@interface BWAttachedMediaSwapNode : BWNode {

	NSString* _primaryFormatToAttachedMediaKey;
	NSString* _attachedMediaKeyToPrimaryFormat;
	NSArray* _sampleBufferAttachmentsToTransfer;
	BOOL _generatesDroppedSampleMarkerBuffers;

}
+(void)initialize;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)initWithPrimaryFormatToAttachedMediaKey:(id)arg1 attachedMediaKeyToPrimaryFormat:(id)arg2 sampleBufferAttachmentsToTransfer:(id)arg3 generatesDroppedSampleMarkerBuffers:(BOOL)arg4 ;
-(void)dealloc;
@end

