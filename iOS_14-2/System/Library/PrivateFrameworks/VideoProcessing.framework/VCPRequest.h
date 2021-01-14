/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPRequest : NSObject {

	BOOL _useCPUOnly;
	unsigned _revision;
	int _width;
	int _height;
	int _maxNumHands;
	int _humanActionWindowSize;

}

@property (nonatomic,readonly) BOOL useCPUOnly;                //@synthesize useCPUOnly=_useCPUOnly - In the implementation block
@property (nonatomic,readonly) unsigned revision;              //@synthesize revision=_revision - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(id)init;
-(BOOL)updateWithOptions:(id)arg1 error:(id*)arg2 ;
-(CGSize)preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2 ;
-(unsigned)preferredPixelFormat;
-(BOOL)cleanupWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)useCPUOnly;
-(unsigned)revision;
@end

