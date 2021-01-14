/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SBFColorBoxes : NSObject <NSSecureCoding> {

	CGSize _imageSize;
	unsigned char _totalContrast8;
	unsigned long long _downsampledBoxSize;
	unsigned long long _effectiveDownsampleFactor;
	unsigned long long _pixelHeight;
	unsigned long long _pixelWidth;
	SCD_Struct_SB18* _colorBoxesRowMajor;
	unsigned long long _rowCount;
	unsigned long long _columnCount;
	unsigned long long _size;

}

@property (nonatomic,readonly) CGSize imageSize;                                          //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) unsigned long long downsampledBoxSize;                     //@synthesize downsampledBoxSize=_downsampledBoxSize - In the implementation block
@property (nonatomic,readonly) unsigned long long effectiveDownsampleFactor;              //@synthesize effectiveDownsampleFactor=_effectiveDownsampleFactor - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelHeight;                            //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long pixelWidth;                             //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (nonatomic,readonly) unsigned char totalContrast8;                              //@synthesize totalContrast8=_totalContrast8 - In the implementation block
@property (nonatomic,readonly) SCD_Struct_SB18* colorBoxesRowMajor;                       //@synthesize colorBoxesRowMajor=_colorBoxesRowMajor - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount;                               //@synthesize rowCount=_rowCount - In the implementation block
@property (nonatomic,readonly) unsigned long long columnCount;                            //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) unsigned long long size;                                   //@synthesize size=_size - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)colorBoxesForImage:(id)arg1 ;
-(CGSize)imageSize;
-(double)contrast;
-(unsigned long long)downsampledBoxSize;
-(unsigned long long)size;
-(id)initWithColorBoxes:(SCD_Struct_SB18*)arg1 size:(unsigned long long)arg2 rowCount:(unsigned long long)arg3 columnCount:(unsigned long long)arg4 totalContrast8:(unsigned char)arg5 imageSize:(CGSize)arg6 downsampledBoxSize:(unsigned long long)arg7 effectiveDownsampleFactor:(unsigned long long)arg8 pixelHeight:(unsigned long long)arg9 pixelWidth:(unsigned long long)arg10 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned char)totalContrast8;
-(SCD_Struct_SB18*)colorBoxesRowMajor;
-(unsigned long long)effectiveDownsampleFactor;
-(id)description;
-(SCD_Struct_SB18*)colorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2 ;
-(unsigned long long)pixelHeight;
-(unsigned long long)columnCount;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)rectForColorBoxAtRow:(unsigned long long)arg1 col:(unsigned long long)arg2 ;
-(void)dealloc;
-(unsigned long long)rowCount;
-(unsigned long long)pixelWidth;
@end

