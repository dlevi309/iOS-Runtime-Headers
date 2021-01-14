/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatTIFF : NUImageExportFormat {

	BOOL _preserveAlpha;
	long long _pixelType;
	long long _compression;

}

@property (assign) long long pixelType;                //@synthesize pixelType=_pixelType - In the implementation block
@property (assign) long long compression;              //@synthesize compression=_compression - In the implementation block
@property (assign) BOOL preserveAlpha;                 //@synthesize preserveAlpha=_preserveAlpha - In the implementation block
-(id)init;
-(long long)compression;
-(void)setCompression:(long long)arg1 ;
-(int)depth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)pixelType;
-(id)fileType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(BOOL)preserveAlpha;
-(void)setPreserveAlpha:(BOOL)arg1 ;
-(void)setPixelType:(long long)arg1 ;
@end

