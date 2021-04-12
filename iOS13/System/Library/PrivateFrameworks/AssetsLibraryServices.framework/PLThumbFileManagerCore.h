/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLThumbPersistenceManager.h>

@class NSString, PLImageFormat, PLPhotoLibraryPathManager;

@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager> {

	PLImageFormat* _format;
	BOOL _readOnly;
	PLPhotoLibraryPathManager* _pathManager;
	NSString* _path;
	NSString* _filename;

}

@property (readonly) PLImageFormat * format;                        //@synthesize format=_format - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isReadOnly; 
+(SCD_Struct_PL2)maxMasterSizeFromSourceImageSize:(SCD_Struct_PL2)arg1 format:(id)arg2 ;
-(NSString *)description;
-(NSString *)path;
-(PLImageFormat *)format;
-(BOOL)isReadOnly;
-(id)_debugDescription;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2 ;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(BOOL)usesThumbIdentifiers;
-(id)thumbnailPathForThumbIdentifier:(id)arg1 ;
-(void)preheatDataForThumbnailIndexes:(id)arg1 ;
-(void)deleteEntryWithIdentifier:(id)arg1 ;
-(BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5 ;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 decodeSession:(void*)arg3 ;
-(id)initWithImageFormat:(id)arg1 pathManager:(id)arg2 ;
@end

