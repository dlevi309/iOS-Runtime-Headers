/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSString, NSArray;

@interface BWAttachedMediaSwapNode : BWNode {

	NSString* _primaryFormatToAttachedMediaKey;
	NSString* _attachedMediaKeyToPrimaryFormat;
	NSArray* _sampleBufferAttachmentsToTransfer;
	BOOL _generatesDroppedSampleMarkerBuffers;

}
+(void)initialize;
-(void)dealloc;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithPrimaryFormatToAttachedMediaKey:(id)arg1 attachedMediaKeyToPrimaryFormat:(id)arg2 sampleBufferAttachmentsToTransfer:(id)arg3 generatesDroppedSampleMarkerBuffers:(BOOL)arg4 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
@end

