/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSMutableArray, NSMutableDictionary, CIBurstYUVImage;

@interface CIBurstThumbnailCluster : NSObject {

	NSMutableArray* burstImages;
	/*^block*/id completionBlock;
	NSMutableDictionary* imageProps;
	CIBurstYUVImage* image;
	IOSurfaceRef _fullsizeJpegData;

}

@property (assign) NSMutableArray * burstImages; 
@property (assign) NSMutableDictionary * imageProps; 
@property (assign) CIBurstYUVImage * image; 
@property (assign) IOSurfaceRef fullsizeJpegData;                 //@synthesize fullsizeJpegData=_fullsizeJpegData - In the implementation block
@property (assign) id completionBlock; 
-(id)init;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSMutableArray *)burstImages;
-(void)releaseImage;
-(NSMutableDictionary *)imageProps;
-(CIBurstYUVImage *)image;
-(id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addItemsFromCluster:(id)arg1 ;
-(void)setFullsizeJpegData:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)fullsizeJpegData;
-(void)setImageProps:(NSMutableDictionary *)arg1 ;
-(void)setImage:(CIBurstYUVImage *)arg1 ;
-(float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3 ;
-(void)setBurstImages:(NSMutableArray *)arg1 ;
@end

