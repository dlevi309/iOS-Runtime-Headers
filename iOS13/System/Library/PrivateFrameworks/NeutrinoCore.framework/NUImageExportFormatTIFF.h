/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fileType;
-(int)depth;
-(long long)compression;
-(void)setCompression:(long long)arg1 ;
-(long long)pixelType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(BOOL)preserveAlpha;
-(void)setPreserveAlpha:(BOOL)arg1 ;
-(void)setPixelType:(long long)arg1 ;
@end

