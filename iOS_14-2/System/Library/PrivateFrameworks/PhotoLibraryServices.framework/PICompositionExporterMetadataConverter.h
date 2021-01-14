/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PICompositionExporterMetadataConverter <NSObject>
@required
-(id)photoFeatureFlags:(id)arg1 error:(id*)arg2;
-(id)videoMetadataForVariation:(id)arg1 error:(id*)arg2;
-(BOOL)setImageVariation:(id)arg1 properties:(id)arg2 error:(id*)arg3;
-(id)photoProcessingFlagsFromProperties:(id)arg1 error:(id*)arg2;
-(BOOL)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3;
-(BOOL)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3;

@end

