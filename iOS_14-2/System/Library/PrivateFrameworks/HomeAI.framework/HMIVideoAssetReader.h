/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class AVAsset, AVAssetReader, NSMutableArray, NSString;

@interface HMIVideoAssetReader : HMIVideoNode <HMFLogging> {

	AVAsset* _asset;
	AVAssetReader* _assetReader;
	CFArrayRef _trackSamples;
	NSMutableArray* _trackOutputs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithAsset:(id)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 readVideoTrack:(BOOL)arg2 readAudioTrack:(BOOL)arg3 ;
-(BOOL)_createOutputsForAsset:(id)arg1 readVideo:(BOOL)arg2 readAudio:(BOOL)arg3 ;
-(opaqueCMSampleBufferRef)copyNextSampleBufferWithTrackIndexOutput:(unsigned long long*)arg1 ;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferFromTrackOutput:(id)arg1 ;
@end

