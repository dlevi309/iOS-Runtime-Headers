/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatPNG : NUImageExportFormat {

	BOOL _preserveAlpha;

}

@property (assign) BOOL preserveAlpha;              //@synthesize preserveAlpha=_preserveAlpha - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fileType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(BOOL)preserveAlpha;
-(void)setPreserveAlpha:(BOOL)arg1 ;
@end

