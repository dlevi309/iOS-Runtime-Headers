/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


#import <ContentKit/ContentKit-Structs.h>
@interface WFBitmapContext : NSObject {

	double _scale;
	CGContextRef _CGContext;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext;              //@synthesize CGContext=_CGContext - In the implementation block
+(id)contextWithSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)contextWithDeviceScreenScaleAndSize:(CGSize)arg1 ;
+(id)currentContextWithScale:(double)arg1 ;
-(CGContextRef)CGContext;
-(CGSize)size;
-(double)scale;
-(id)image;
-(void)dealloc;
-(id)initWithCGContext:(CGContextRef)arg1 scale:(double)arg2 ;
-(id)initWithSize:(CGSize)arg1 opaque:(BOOL)arg2 scale:(double)arg3 ;
-(id)imageWithOrientation:(unsigned)arg1 ;
@end

