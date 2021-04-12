/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutputAdaptor.h>

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor> {

	AVAssetReaderOutputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetReaderTrackOutput * assetReaderTrackOutput; 
+(id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithAssetReaderTrackOutput:(id)arg1 ;
-(int)addExtractionForOutput:(id)arg1 figAssetReader:(OpaqueFigAssetReaderRef)arg2 options:(id)arg3 withOutputExtactionID:(int*)arg4 ;
-(AVAssetReaderTrackOutput *)assetReaderTrackOutput;
-(id)nextTimedMetadataGroup;
@end

