/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/


#import <GameCenterUICore/GameCenterUICore-Structs.h>
@class UIImage;

@interface GKImageContext : NSObject {

	double _scale;
	CGContextRef _CGContext;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext;              //@synthesize CGContext=_CGContext - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(id)contextDrawnWithSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
+(id)imageDrawnWithSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
+(id)imageFromRawPixelsAtURL:(id)arg1 ;
-(CGContextRef)CGContext;
-(CGSize)size;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(UIImage *)image;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned)arg3 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 options:(unsigned)arg3 data:(void*)arg4 ;
-(BOOL)writeRawPixelsToURL:(id)arg1 error:(id*)arg2 ;
@end

