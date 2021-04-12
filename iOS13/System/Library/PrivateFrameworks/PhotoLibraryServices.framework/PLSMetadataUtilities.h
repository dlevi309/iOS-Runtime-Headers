/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLSMetadataUtilities : NSObject
+(BOOL)_writeDetails:(id)arg1 forEntityNamed:(id)arg2 toFilepath:(id)arg3 withDefaultFilename:(id)arg4 ;
+(id)_allAlbumsInPhotoLibrary:(id)arg1 ;
+(id)dictionaryFromManagedObject:(id)arg1 excludeAttributes:(id)arg2 includingRelationships:(id)arg3 excludeRelationshipAttributes:(id)arg4 andSubRelationships:(id)arg5 ;
+(id)_normalizeObjectForJSON:(id)arg1 ;
+(id)_detailsForAsset:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 ;
+(void)writeJSONData:(id)arg1 toFile:(id)arg2 ;
+(void)_writeJSONForObjectDetails:(id)arg1 toFile:(id)arg2 ;
+(BOOL)initializeJSONFileAtPath:(id)arg1 ;
+(void)serializeJSONFromObjectDetails:(id)arg1 ToPath:(id)arg2 ;
+(id)allAssetsDetailsWriteToPath:(id)arg1 includingLocal:(BOOL)arg2 includingFingerprints:(BOOL)arg3 forAlbumTitled:(id)arg4 library:(id)arg5 ;
+(id)_detailsForAlbum:(id)arg1 ;
+(id)allAlbumsDetailsWriteToPath:(id)arg1 inLibrary:(id)arg2 ;
@end

