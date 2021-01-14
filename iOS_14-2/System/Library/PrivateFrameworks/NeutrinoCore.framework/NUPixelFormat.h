/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSString;

@interface NUPixelFormat : NSObject {

	BOOL _supportsExtendedRange;
	int _CIFormat;
	unsigned _CVPixelFormat;
	long long _bytesPerPixel;
	NSString* _name;

}

@property (nonatomic,readonly) long long bytesPerPixel;                 //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,readonly) int CIFormat;                            //@synthesize CIFormat=_CIFormat - In the implementation block
@property (nonatomic,readonly) unsigned CVPixelFormat;                  //@synthesize CVPixelFormat=_CVPixelFormat - In the implementation block
@property (nonatomic,readonly) BOOL supportsExtendedRange;              //@synthesize supportsExtendedRange=_supportsExtendedRange - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
+(id)I8;
+(id)A16;
+(id)RG16;
+(id)ARGB8;
+(id)BGRA8;
+(id)RGBA8;
+(id)RGBAf;
+(id)RGBAh;
+(id)sRGBA8;
+(id)RGBA16;
+(id)A2RGB10;
+(id)XRSRGB10;
+(id)pixelFormatForCIFormat:(int)arg1 ;
+(id)pixelFormatForCVPixelFormat:(unsigned)arg1 ;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(long long)bytesPerPixel;
-(int)CIFormat;
-(long long)alignedRowBytesForWidth:(long long)arg1 ;
-(BOOL)isEqualToPixelFormat:(id)arg1 ;
-(unsigned)CVPixelFormat;
-(BOOL)supportsExtendedRange;
@end

