/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class NSMutableArray, NSMutableDictionary;

@interface BurstThumbnailCluster : NSObject {

	CVBufferRef _imagePixelBuffer;
	/*^block*/id _completionBlock;
	NSMutableArray* _burstImages;
	NSMutableDictionary* _imageProps;

}

@property (retain) NSMutableArray * burstImages;                  //@synthesize burstImages=_burstImages - In the implementation block
@property (retain) NSMutableDictionary * imageProps;              //@synthesize imageProps=_imageProps - In the implementation block
@property (copy) id completionBlock;                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) CVBufferRef imagePixelBuffer;                  //@synthesize imagePixelBuffer=_imagePixelBuffer - In the implementation block
-(id)init;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSMutableArray *)burstImages;
-(NSMutableDictionary *)imageProps;
-(id)initWithImageData:(CVBufferRef)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addItemsFromCluster:(id)arg1 ;
-(void)setImageProps:(NSMutableDictionary *)arg1 ;
-(float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3 ;
-(void)setBurstImages:(NSMutableArray *)arg1 ;
-(CVBufferRef)imagePixelBuffer;
-(void)setImagePixelBuffer:(CVBufferRef)arg1 ;
@end

