/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLSMetadataUtilities : NSObject
+(void)writeJSONData:(id)arg1 toFile:(id)arg2 ;
+(BOOL)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4 ;
+(id)_allAlbumsInPhotoLibrary:(id)arg1 ;
+(id)_detailsForAlbum:(id)arg1 ;
+(id)dictionaryFromManagedObject:(id)arg1 excludeAttributes:(id)arg2 includingRelationships:(id)arg3 excludeRelationshipAttributes:(id)arg4 andSubRelationships:(id)arg5 ;
+(id)_normalizeObjectForJSON:(id)arg1 ;
+(void)_writeJSONForObjectDetails:(id)arg1 toFile:(id)arg2 ;
+(id)_detailsForAsset:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 ;
+(BOOL)initializeJSONFileAtPath:(id)arg1 ;
+(void)serializeJSONFromObjectDetails:(id)arg1 ToPath:(id)arg2 ;
+(id)allAlbumsDetailsWriteToPath:(id)arg1 inLibrary:(id)arg2 ;
+(id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 forAlbumTitled:(id)arg4 library:(id)arg5 ;
@end

