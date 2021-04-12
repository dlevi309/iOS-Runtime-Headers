/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class UIImage;

@interface QLPlatformImage : NSObject {

	CGImageRef _cgImage;
	unsigned _orientation;
	double _scale;
	/*^block*/id _cleanupDataBlock;
	CGSize _size;

}

@property (assign) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (readonly) UIImage * UIImage; 
@property (assign) CGImageRef CGImage; 
@property (nonatomic,copy) id cleanupDataBlock;              //@synthesize cleanupDataBlock=_cleanupDataBlock - In the implementation block
@property (assign) unsigned orientation;                     //@synthesize orientation=_orientation - In the implementation block
@property (assign) double scale;                             //@synthesize scale=_scale - In the implementation block
+(id)imageWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(unsigned)arg3 ;
+(id)imageWithUIImage:(id)arg1 ;
-(UIImage *)UIImage;
-(CGSize)size;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(unsigned)orientation;
-(CGImageRef)CGImage;
-(void)dealloc;
-(void)setOrientation:(unsigned)arg1 ;
-(void)setCGImage:(CGImageRef)arg1 ;
-(id)cleanupDataBlock;
-(void)setCleanupDataBlock:(id)arg1 ;
@end

