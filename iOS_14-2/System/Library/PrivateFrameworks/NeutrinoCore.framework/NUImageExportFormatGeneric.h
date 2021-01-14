/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFileType:(NSString *)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithFileType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fileType;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(void)setRenderFormat:(int)arg1 ;
@end

