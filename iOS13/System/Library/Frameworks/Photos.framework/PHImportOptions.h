/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PHAssetCollection, PHCollectionList, NSSortDescriptor, NSMutableDictionary, NSString, PHImportSource, PHPhotoLibrary;

@interface PHImportOptions : NSObject {

	options_bits _options_bits;
	PHAssetCollection* _destinationAlbum;
	PHCollectionList* _destinationFolder;
	NSSortDescriptor* _sortDescriptor;
	NSMutableDictionary* _userIptcMetadata;
	NSString* _personId;
	PHImportSource* _importSource;
	PHPhotoLibrary* _library;

}

@property (nonatomic,retain) NSString * personId;                                 //@synthesize personId=_personId - In the implementation block
@property (nonatomic,retain) PHImportSource * importSource;                       //@synthesize importSource=_importSource - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * library;                            //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) PHAssetCollection * destinationAlbum;                //@synthesize destinationAlbum=_destinationAlbum - In the implementation block
@property (nonatomic,retain) PHCollectionList * destinationFolder;                //@synthesize destinationFolder=_destinationFolder - In the implementation block
@property (assign,nonatomic) BOOL preserveFolderStructure; 
@property (assign,nonatomic) BOOL hideProgress; 
@property (assign,nonatomic) BOOL skipAlertWhenFinished; 
@property (assign,nonatomic) BOOL shouldImportAsReferenced; 
@property (assign,nonatomic) BOOL allowDuplicates; 
@property (assign,nonatomic) BOOL skipDiskSpaceCheck; 
@property (assign,nonatomic) BOOL deleteAfterImport; 
@property (assign,nonatomic) unsigned char fileOperation; 
@property (nonatomic,retain) NSSortDescriptor * sortDescriptor;                   //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
@property (assign,nonatomic) unsigned char metadataAddMode; 
@property (nonatomic,retain) NSMutableDictionary * userIptcMetadata;              //@synthesize userIptcMetadata=_userIptcMetadata - In the implementation block
-(id)init;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
-(PHPhotoLibrary *)library;
-(void)setHideProgress:(BOOL)arg1 ;
-(void)setImportedBy:(short)arg1 ;
-(short)importedBy;
-(PHAssetCollection *)destinationAlbum;
-(void)setDestinationAlbum:(PHAssetCollection *)arg1 ;
-(void)setLibrary:(PHPhotoLibrary *)arg1 ;
-(PHImportSource *)importSource;
-(BOOL)preserveFolderStructure;
-(void)setPreserveFolderStructure:(BOOL)arg1 ;
-(BOOL)hideProgress;
-(BOOL)skipAlertWhenFinished;
-(void)setSkipAlertWhenFinished:(BOOL)arg1 ;
-(unsigned char)fileOperation;
-(void)setFileOperation:(unsigned char)arg1 ;
-(BOOL)shouldImportAsReferenced;
-(void)setShouldImportAsReferenced:(BOOL)arg1 ;
-(BOOL)allowDuplicates;
-(void)setAllowDuplicates:(BOOL)arg1 ;
-(BOOL)skipDiskSpaceCheck;
-(void)setSkipDiskSpaceCheck:(BOOL)arg1 ;
-(BOOL)deleteAfterImport;
-(void)setDeleteAfterImport:(BOOL)arg1 ;
-(unsigned char)metadataAddMode;
-(void)setMetadataAddMode:(unsigned char)arg1 ;
-(BOOL)omitImportComplete;
-(void)setOmitImportComplete:(BOOL)arg1 ;
-(BOOL)allowUnsupported;
-(void)setAllowUnsupported:(BOOL)arg1 ;
-(PHCollectionList *)destinationFolder;
-(void)setDestinationFolder:(PHCollectionList *)arg1 ;
-(NSSortDescriptor *)sortDescriptor;
-(void)setSortDescriptor:(NSSortDescriptor *)arg1 ;
-(NSMutableDictionary *)userIptcMetadata;
-(void)setUserIptcMetadata:(NSMutableDictionary *)arg1 ;
-(void)setImportSource:(PHImportSource *)arg1 ;
@end

