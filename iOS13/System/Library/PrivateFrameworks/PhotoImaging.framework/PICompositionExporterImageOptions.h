/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions {

	BOOL _optimizeForSharing;
	NUImageExportFormat* _imageExportFormat;
	/*^block*/id _metadataProcessor;

}

@property (copy) NUImageExportFormat * imageExportFormat;              //@synthesize imageExportFormat=_imageExportFormat - In the implementation block
@property (copy) id metadataProcessor;                                 //@synthesize metadataProcessor=_metadataProcessor - In the implementation block
@property (assign) BOOL optimizeForSharing;                            //@synthesize optimizeForSharing=_optimizeForSharing - In the implementation block
-(void)setImageExportFormatJpegWithQuality:(double)arg1 ;
-(id)metadataProcessor;
-(void)setMetadataProcessor:(id)arg1 ;
-(id)imageExportFormatForURL:(id)arg1 ;
-(NUImageExportFormat *)imageExportFormat;
-(void)setImageExportFormat:(NUImageExportFormat *)arg1 ;
-(BOOL)optimizeForSharing;
-(void)setOptimizeForSharing:(BOOL)arg1 ;
@end

