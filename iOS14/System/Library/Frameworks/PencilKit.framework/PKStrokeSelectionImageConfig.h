/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKStrokeSelectionImageConfig : NSObject <NSCopying> {

	BOOL _invertedColors;
	BOOL _rotated;
	double _scale;
	CGSize _imageSize;
	CGRect _strokeBounds;
	CGRect _imageViewBounds;

}

@property (nonatomic,readonly) CGRect strokeBounds;                 //@synthesize strokeBounds=_strokeBounds - In the implementation block
@property (nonatomic,readonly) CGRect imageViewBounds;              //@synthesize imageViewBounds=_imageViewBounds - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                    //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) BOOL invertedColors;                 //@synthesize invertedColors=_invertedColors - In the implementation block
@property (nonatomic,readonly) BOOL rotated;                        //@synthesize rotated=_rotated - In the implementation block
-(CGSize)imageSize;
-(BOOL)rotated;
-(double)scale;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)strokeBounds;
-(BOOL)invertedColors;
-(CGRect)imageViewBounds;
-(id)initWithStrokeBounds:(CGRect)arg1 imageViewBounds:(CGRect)arg2 scale:(double)arg3 imageSize:(CGSize)arg4 invertedColors:(BOOL)arg5 rotated:(BOOL)arg6 ;
@end

