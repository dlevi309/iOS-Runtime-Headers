/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class AVAssetTrack, AVAsset, VideoReaderRand;

@interface VideoAccessIndex : NSObject {

	vector<CMTime, std::__1::allocator<CMTime> >* mFrameTimes;
	unsigned numFrames;
	AVAssetTrack* videoTrack;
	AVAsset* asset;
	VideoReaderRand* readerRand;

}

@property (retain) VideoReaderRand * readerRand; 
@property (readonly) AVAssetTrack * videoTrack; 
@property (readonly) AVAsset * asset; 
-(AVAsset *)asset;
-(AVAssetTrack *)videoTrack;
-(int)getFrameAtIndex:(unsigned)arg1 pixBuf:(_CVBuffer*)arg2 ;
-(id)initFromFile:(id)arg1 pixelFormat:(unsigned)arg2 frameTimes:(const vector<CMTime, std::__1::allocator<CMTime> >*)arg3 ;
-(VideoReaderRand *)readerRand;
-(void)setReaderRand:(VideoReaderRand *)arg1 ;
@end

