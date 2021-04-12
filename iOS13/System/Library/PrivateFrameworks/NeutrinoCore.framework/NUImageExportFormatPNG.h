/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

