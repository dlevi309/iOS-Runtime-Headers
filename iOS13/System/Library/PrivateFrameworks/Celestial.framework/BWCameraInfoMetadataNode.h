/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWNodeOutput;

@interface BWCameraInfoMetadataNode : BWNode {

	BOOL _generateLivePhotosMetadata;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	BOOL _previousGeneratedMetadataBufferWasEmpty;
	OpaqueCMBlockBufferRef _emptyMetadataSampleData;
	BWNodeOutput* _passthruOutput;
	BWNodeOutput* _boxedMetadataOutput;
	unsigned _localIDForLivePhotosMetadata_BE;

}

@property (nonatomic,readonly) BWNodeOutput * passthruOutput;                   //@synthesize passthruOutput=_passthruOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * boxedMetadataOutput;              //@synthesize boxedMetadataOutput=_boxedMetadataOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(id)_initForMotionMetadataSource:(int)arg1 generateLivePhotosMetadata:(BOOL)arg2 generateDebugMetadata:(BOOL)arg3 ;
-(void)_emitLivePhotosAndDebugBoxedMetadataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 metadata:(id)arg2 time:(SCD_Struct_BW2)arg3 ;
-(OpaqueCMBlockBufferRef)_emptyMetadataBlockBuffer;
-(id)initForLivePhotosMetadata:(BOOL)arg1 generateDebugMetadata:(BOOL)arg2 ;
-(BWNodeOutput *)passthruOutput;
-(BWNodeOutput *)boxedMetadataOutput;
@end

