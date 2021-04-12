/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (nonatomic,copy) NSData * projectData; 
@property (nonatomic,copy) NSString * projectDocumentType; 
@property (nonatomic,copy) NSString * projectExtensionIdentifier; 
@property (nonatomic,copy) NSString * projectRenderUuid; 
+(id)entityName;
+(id)albumSupportsAssetOrderKeysPredicate;
+(BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg1 error:(id*)arg2 ;
+(id)validKindsForPersistence;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 documentType:(id)arg3 projectExtensionIdentifier:(id)arg4 ;
-(BOOL)supportsAssetOrderKeys;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)awakeFromInsert;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(void)willSave;
-(void)prepareForDeletion;
-(BOOL)setProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(id)projectPreviewImageData;
-(id)duplicateProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(id)_previewImageFilename;
@end

