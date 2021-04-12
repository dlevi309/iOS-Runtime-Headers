/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <AutoLoop/VideoReader.h>

@interface VideoReaderRand : VideoReader {

	vector<CMTime, std::__1::allocator<CMTime> >* _frameTimes;
	int _lastFrameDex;
	int _numFrames;

}
-(int)reset;
-(int)indexForTime:(SCD_Struct_Au1)arg1 ;
-(id)initFromFile:(id)arg1 withParams:(id)arg2 ;
-(id)initFromFile:(id)arg1 frameTimes:(const vector<CMTime, std::__1::allocator<CMTime> >*)arg2 ;
-(int)getFrameAtTime:(SCD_Struct_Au1)arg1 frame:(opaqueCMSampleBuffer*)arg2 rawFrameIndex:(unsigned*)arg3 ;
@end

