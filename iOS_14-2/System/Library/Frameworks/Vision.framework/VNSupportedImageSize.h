/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _cachedCalculatedHash;
	BOOL _orientationAgnostic;
	unsigned _idealImageFormat;
	unsigned _idealOrientation;
	VNSizeRange* _pixelsWideRange;
	VNSizeRange* _pixelsHighRange;
	unsigned long long _aspectRatioHandling;

}

@property (nonatomic,readonly) VNSizeRange * pixelsWideRange;                                      //@synthesize pixelsWideRange=_pixelsWideRange - In the implementation block
@property (nonatomic,readonly) VNSizeRange * pixelsHighRange;                                      //@synthesize pixelsHighRange=_pixelsHighRange - In the implementation block
@property (nonatomic,readonly) unsigned long long aspectRatioHandling;                             //@synthesize aspectRatioHandling=_aspectRatioHandling - In the implementation block
@property (nonatomic,readonly) unsigned idealImageFormat;                                          //@synthesize idealImageFormat=_idealImageFormat - In the implementation block
@property (nonatomic,readonly) unsigned idealOrientation;                                          //@synthesize idealOrientation=_idealOrientation - In the implementation block
@property (getter=isOrientationAgnostic,nonatomic,readonly) BOOL orientationAgnostic;              //@synthesize orientationAgnostic=_orientationAgnostic - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(VNSizeRange *)pixelsWideRange;
-(VNSizeRange *)pixelsHighRange;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2 ;
-(unsigned long long)aspectRatioHandling;
-(unsigned)idealImageFormat;
-(unsigned)idealOrientation;
-(id)initWithIdealFormat:(unsigned)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned)arg5 orientationAgnostic:(BOOL)arg6 ;
-(BOOL)isOrientationAgnostic;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

