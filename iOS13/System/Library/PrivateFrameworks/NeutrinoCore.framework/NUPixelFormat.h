/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@class NSString;

@interface NUPixelFormat : NSObject {

	BOOL _extendedRange;
	int _CIFormat;
	unsigned _CVPixelFormat;
	long long _bytesPerPixel;
	NSString* _name;

}

@property (nonatomic,readonly) long long bytesPerPixel;              //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,readonly) int CIFormat;                         //@synthesize CIFormat=_CIFormat - In the implementation block
@property (nonatomic,readonly) unsigned CVPixelFormat;               //@synthesize CVPixelFormat=_CVPixelFormat - In the implementation block
@property (nonatomic,readonly) BOOL extendedRange;                   //@synthesize extendedRange=_extendedRange - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
+(id)pixelFormatForCIFormat:(int)arg1 ;
+(id)pixelFormatForCVPixelFormat:(unsigned)arg1 ;
+(id)ARGB8;
+(id)BGRA8;
+(id)RGBA8;
+(id)sRGBA8;
+(id)RGBA16;
+(id)RG16;
+(id)RGBAf;
+(id)RGBAh;
+(id)I8;
+(id)A16;
+(id)A2RGB10;
+(id)XRSRGB10;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(long long)bytesPerPixel;
-(long long)alignedRowBytesForWidth:(long long)arg1 ;
-(BOOL)isEqualToPixelFormat:(id)arg1 ;
-(int)CIFormat;
-(unsigned)CVPixelFormat;
-(BOOL)extendedRange;
@end

