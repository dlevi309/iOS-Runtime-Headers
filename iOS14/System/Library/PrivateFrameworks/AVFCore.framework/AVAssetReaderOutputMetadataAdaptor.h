/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutputAdaptor.h>

@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject <AVAssetReaderOutputAdaptor> {

	AVAssetReaderOutputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetReaderTrackOutput * assetReaderTrackOutput; 
+(id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1 ;
-(id)init;
-(id)initWithAssetReaderTrackOutput:(id)arg1 ;
-(id)nextTimedMetadataGroup;
-(int)addExtractionForOutput:(id)arg1 figAssetReader:(OpaqueFigAssetReaderRef)arg2 options:(id)arg3 withOutputExtactionID:(int*)arg4 ;
-(AVAssetReaderTrackOutput *)assetReaderTrackOutput;
-(void)dealloc;
@end

