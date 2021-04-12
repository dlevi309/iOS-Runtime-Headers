/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NUImageExportFormat;

@interface PICompositionExporterImageOptions : PICompositionExporterOptions {

	BOOL _optimizeForSharing;
	BOOL _applyImageOrientationAsMetadata;
	NUImageExportFormat* _imageExportFormat;
	double _JPEGCompressionQuality;
	/*^block*/id _metadataProcessor;

}

@property (copy) NUImageExportFormat * imageExportFormat;              //@synthesize imageExportFormat=_imageExportFormat - In the implementation block
@property (assign) double JPEGCompressionQuality;                      //@synthesize JPEGCompressionQuality=_JPEGCompressionQuality - In the implementation block
@property (copy) id metadataProcessor;                                 //@synthesize metadataProcessor=_metadataProcessor - In the implementation block
@property (assign) BOOL optimizeForSharing;                            //@synthesize optimizeForSharing=_optimizeForSharing - In the implementation block
@property (assign) BOOL applyImageOrientationAsMetadata;               //@synthesize applyImageOrientationAsMetadata=_applyImageOrientationAsMetadata - In the implementation block
-(id)init;
-(void)setJPEGCompressionQuality:(double)arg1 ;
-(id)metadataProcessor;
-(void)setMetadataProcessor:(id)arg1 ;
-(id)imageExportFormatForURL:(id)arg1 ;
-(NUImageExportFormat *)imageExportFormat;
-(void)setImageExportFormat:(NUImageExportFormat *)arg1 ;
-(double)JPEGCompressionQuality;
-(BOOL)optimizeForSharing;
-(void)setOptimizeForSharing:(BOOL)arg1 ;
-(BOOL)applyImageOrientationAsMetadata;
-(void)setApplyImageOrientationAsMetadata:(BOOL)arg1 ;
@end

