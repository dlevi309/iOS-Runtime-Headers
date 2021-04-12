/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)init;
-(NSMutableArray *)burstImages;
-(NSMutableDictionary *)imageProps;
-(id)initWithImageData:(CVBufferRef)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addItemsFromCluster:(id)arg1 ;
-(void)setImageProps:(NSMutableDictionary *)arg1 ;
-(float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3 ;
-(void)setBurstImages:(NSMutableArray *)arg1 ;
-(CVBufferRef)imagePixelBuffer;
-(void)setImagePixelBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
@end

