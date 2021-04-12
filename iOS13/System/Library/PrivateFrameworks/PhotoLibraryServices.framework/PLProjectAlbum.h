/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)validKindsForPersistence;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 documentType:(id)arg3 projectExtensionIdentifier:(id)arg4 ;
+(BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg1 error:(id*)arg2 ;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(id)projectPreviewImageData;
-(id)duplicateProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(BOOL)setProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(id)_previewImageFilename;
@end

