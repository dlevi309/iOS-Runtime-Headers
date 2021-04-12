/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@class NSString, NSDictionary;

@interface NUImageExportFormatGeneric : NUImageExportFormat {

	int _renderFormat;
	NSString* _fileType;
	NSDictionary* _options;

}

@property (copy) NSString * fileType;                 //@synthesize fileType=_fileType - In the implementation block
@property (assign) int renderFormat;                  //@synthesize renderFormat=_renderFormat - In the implementation block
@property (copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(NSString *)fileType;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setFileType:(NSString *)arg1 ;
-(id)initWithFileType:(id)arg1 ;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(void)setRenderFormat:(int)arg1 ;
@end

