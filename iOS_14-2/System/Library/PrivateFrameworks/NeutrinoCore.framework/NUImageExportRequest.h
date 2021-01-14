/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUExportRequest.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NUColorSpace, NUImageExportFormat, NSDictionary, NSString;

@interface NUImageExportRequest : NUExportRequest <NUTimeBased> {

	BOOL _renderToData;
	NUColorSpace* _colorSpace;
	NUImageExportFormat* _format;
	NSDictionary* _imageProperties;
	NSDictionary* _coreGraphicsInfoDictionariesByAuxiliaryType;

}

@property (nonatomic,retain) NUColorSpace * colorSpace;                                   //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,copy) NUImageExportFormat * format;                                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL renderToData;                                           //@synthesize renderToData=_renderToData - In the implementation block
@property (copy) NSDictionary * imageProperties;                                          //@synthesize imageProperties=_imageProperties - In the implementation block
@property (copy) NSDictionary * coreGraphicsInfoDictionariesByAuxiliaryType;              //@synthesize coreGraphicsInfoDictionariesByAuxiliaryType=_coreGraphicsInfoDictionariesByAuxiliaryType - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(void)setFormat:(NUImageExportFormat *)arg1 ;
-(NUColorSpace *)colorSpace;
-(NUImageExportFormat *)format;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setImageProperties:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)imageProperties;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id)initWithComposition:(id)arg1 destinationURL:(id)arg2 ;
-(id)initWithComposition:(id)arg1 exportFormat:(id)arg2 ;
-(BOOL)renderToData;
-(void)setRenderToData:(BOOL)arg1 ;
-(NSDictionary *)coreGraphicsInfoDictionariesByAuxiliaryType;
-(void)setCoreGraphicsInfoDictionariesByAuxiliaryType:(NSDictionary *)arg1 ;
@end

