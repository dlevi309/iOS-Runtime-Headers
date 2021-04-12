/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <AutoLoop/VideoAccessIndex.h>

@interface VideoAccessIndexNorm : VideoAccessIndex {

	FrameTimeNormalizer* mNormalizer;

}
-(id)initFromFile:(id)arg1 pixelFormat:(unsigned)arg2 normalizer:(FrameTimeNormalizer*)arg3 ;
-(int)getFrameAtIndex:(unsigned)arg1 pixBuf:(_CVBuffer*)arg2 ;
@end

