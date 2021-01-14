/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

