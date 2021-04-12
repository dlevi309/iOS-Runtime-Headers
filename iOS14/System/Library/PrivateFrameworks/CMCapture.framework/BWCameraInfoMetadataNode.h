/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class BWNodeOutput;

@interface BWCameraInfoMetadataNode : BWNode {

	BOOL _generateLivePhotosMetadata;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	opaqueCMFormatDescriptionRef _basicBoxedMetadataFormatDescription;
	BOOL _previousGeneratedMetadataBufferWasEmpty;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	BWNodeOutput* _passthruOutput;
	BWNodeOutput* _boxedMetadataOutput;
	SCD_Struct_BW2 _videoDimensions;
	unsigned _localIDForLivePhotosMetadata_BE;

}

@property (nonatomic,readonly) BWNodeOutput * passthruOutput;                   //@synthesize passthruOutput=_passthruOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * boxedMetadataOutput;              //@synthesize boxedMetadataOutput=_boxedMetadataOutput - In the implementation block
+(void)initialize;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(BWNodeOutput *)passthruOutput;
-(id)_initForMotionMetadataSource:(int)arg1 generateLivePhotosMetadata:(BOOL)arg2 generateDebugMetadata:(BOOL)arg3 ;
-(void)_emitLivePhotosAndDebugBoxedMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 time:(SCD_Struct_BW8)arg3 ;
-(OpaqueCMBlockBufferRef)_emptyMetadataBlockBuffer;
-(BWNodeOutput *)boxedMetadataOutput;
-(id)initForLivePhotosMetadata:(BOOL)arg1 generateDebugMetadata:(BOOL)arg2 ;
-(void)dealloc;
@end

