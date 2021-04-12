/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <libobjc.A.dylib/PICompositionExporterMetadataConverter.h>

@class NSString;

@interface PLPhotoEditExporterMetadataConverter : NSObject <PICompositionExporterMetadataConverter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)install;
-(id)videoMetadataForVariation:(id)arg1 error:(id*)arg2 ;
-(BOOL)setImageVariation:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(id)photoProcessingFlagsFromProperties:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPhotoProcessingFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(id)photoFeatureFlags:(id)arg1 error:(id*)arg2 ;
-(BOOL)setPhotoFeatureFlags:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
@end

