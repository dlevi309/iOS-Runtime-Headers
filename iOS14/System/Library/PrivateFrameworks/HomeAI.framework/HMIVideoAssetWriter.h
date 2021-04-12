/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/AVAssetWriterDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore, HMIVideoAssetWriterDelegate;
@class AVAssetWriter, NSObject, NSString;

@interface HMIVideoAssetWriter : HMIVideoProcessingNode <AVAssetWriterDelegate, HMFLogging> {

	AVAssetWriter* _assetWriter;
	BOOL _skipInitializationSegment;
	BOOL _dropSamplesUntilSync;
	BOOL _dropTrimDurationAttachments;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _outputQueue;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	opaqueCMFormatDescriptionRef _videoFormat;
	opaqueCMFormatDescriptionRef _audioFormat;
	BOOL _allowRecovery;
	BOOL _allowRecoveryFromInsufficientAudioTrim;
	unsigned long long _nextSequenceNumber;
	id<HMIVideoAssetWriterDelegate> _delegate;

}

@property (__weak) id<HMIVideoAssetWriterDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL allowRecovery;                                       //@synthesize allowRecovery=_allowRecovery - In the implementation block
@property (assign) unsigned long long nextSequenceNumber;                    //@synthesize nextSequenceNumber=_nextSequenceNumber - In the implementation block
@property (assign) BOOL allowRecoveryFromInsufficientAudioTrim;              //@synthesize allowRecoveryFromInsufficientAudioTrim=_allowRecoveryFromInsufficientAudioTrim - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)flush;
-(void)assetWriter:(id)arg1 didOutputSegmentData:(id)arg2 segmentType:(long long)arg3 segmentReport:(id)arg4 ;
-(id<HMIVideoAssetWriterDelegate>)delegate;
-(unsigned long long)nextSequenceNumber;
-(void)setDelegate:(id<HMIVideoAssetWriterDelegate>)arg1 ;
-(void)dealloc;
-(void)setNextSequenceNumber:(unsigned long long)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithVideoFormat:(const opaqueCMFormatDescriptionRef)arg1 audioFormat:(const opaqueCMFormatDescriptionRef)arg2 ;
-(void)setAllowRecovery:(BOOL)arg1 ;
-(void)_failWithDescription:(id)arg1 ;
-(void)_checkNotStarted;
-(void)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)_createAssetWriterWithInitialSegmentStartTime:(SCD_Struct_HM3)arg1 ;
-(BOOL)allowRecovery;
-(void)_removeTrimDurationAttachmentsFromAudioSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)allowRecoveryFromInsufficientAudioTrim;
-(void)_ensureFirstAudioSampleBufferHasSufficientPrimingTrim:(opaqueCMSampleBufferRef)arg1 ;
-(void)setAllowRecoveryFromInsufficientAudioTrim:(BOOL)arg1 ;
@end

