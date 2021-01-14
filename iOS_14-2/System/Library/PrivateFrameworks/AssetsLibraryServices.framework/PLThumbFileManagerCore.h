/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL isReadOnly; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_PL2)maxMasterSizeFromSourceImageSize:(SCD_Struct_PL2)arg1 format:(id)arg2 ;
-(PLImageFormat *)format;
-(BOOL)isReadOnly;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(NSString *)path;
-(id)thumbnailPathForThumbIdentifier:(id)arg1 ;
-(void)deleteEntryWithIdentifier:(id)arg1 ;
-(BOOL)usesThumbIdentifiers;
-(BOOL)validateData:(id)arg1 withToken:(id)arg2 ;
-(id)initWithImageFormat:(id)arg1 pathManager:(id)arg2 ;
-(id)_debugDescription;
-(NSString *)description;
-(CGImageRef)createImageWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 ;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(void)preheatDataForThumbnailIndexes:(id)arg1 ;
-(BOOL)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned long long)arg3 photoUUID:(id)arg4 options:(id)arg5 ;
@end

