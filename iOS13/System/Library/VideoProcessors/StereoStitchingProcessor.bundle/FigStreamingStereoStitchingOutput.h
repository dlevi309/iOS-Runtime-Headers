/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


#import <StereoStitchingProcessor/StereoStitchingProcessor-Structs.h>
@class NSMutableDictionary;

@interface FigStreamingStereoStitchingOutput : NSObject {

	CVBufferRef _pixelBuffer;
	NSMutableDictionary* _metadata;

}

@property (nonatomic,retain) CVBufferRef pixelBuffer;                     //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadata;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
@end

