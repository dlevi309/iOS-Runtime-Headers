/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICAttachmentPreviewImageUI.h>

@protocol OS_dispatch_queue;
@class ICAccount, NSObject, NSData, NSDate, ICAttachment, NSString;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject <ICAttachmentPreviewImageUI> {

	ICAccount* placeholderAccount;
	NSObject*<OS_dispatch_queue> _fileQueue;
	unsigned long long _imageID;

}

@property (assign,nonatomic,__weak) ICAccount * placeholderAccount; 
@property (nonatomic,retain) NSData * encryptedMetadata; 
@property (nonatomic,retain) NSData * cryptoMetadataInitializationVector; 
@property (nonatomic,retain) NSData * cryptoMetadataTag; 
@property (assign,nonatomic) unsigned long long imageID;                               //@synthesize imageID=_imageID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> fileQueue;                           //@synthesize fileQueue=_fileQueue - In the implementation block
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) short appearanceType; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) BOOL versionOutOfDate; 
@property (nonatomic,retain) NSDate * modifiedDate; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (assign,nonatomic) BOOL scaleWhenDrawing; 
@property (nonatomic,retain) NSData * metadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)previewImageURLsForIdentifier:(id)arg1 account:(id)arg2 ;
+(id)fileGlobalQueue;
+(id)fileQueueGroup;
+(long long)updateFileWriteCounterBy:(long long)arg1 identifier:(id)arg2 ;
+(void)purgeAllPreviewImageFiles;
+(id)concurrentFileLoadLimitSemaphore;
+(void)waitUntilAllFileWritesAreFinished;
+(id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4 appearanceType:(unsigned long long)arg5 ;
+(id)allAttachmentPreviewImagesInContext:(id)arg1 ;
+(id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2 ;
+(id)newAttachmentPreviewImageWithIdentifier:(id)arg1 attachment:(id)arg2 ;
+(void)purgeAllAttachmentPreviewImagesInContext:(id)arg1 ;
+(id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2 ;
+(id)visibleAttachmentPreviewImagesInContext:(id)arg1 ;
+(id)attachmentPreviewImageIdentifiersForAccount:(id)arg1 ;
+(void)purgePreviewImageFilesForIdentifiers:(id)arg1 account:(id)arg2 ;
+(void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1 ;
-(void)invalidateCache;
-(void)willTurnIntoFault;
-(void)prepareForDeletion;
-(BOOL)shouldSyncToCloud;
-(CGSize)size;
-(void)setMetadata:(NSData *)arg1 ;
-(void)saveAndClearDecryptedData;
-(void)accountWillChangeToAccount:(id)arg1 ;
-(id)cloudAccount;
-(id)ic_loggingValues;
-(BOOL)imageIsValid;
-(unsigned long long)imageID;
-(id)containerAccount;
-(void)setPlaceholderAccount:(ICAccount *)arg1 ;
-(id)orientedPreviewImageURLWithoutCreating;
-(id)parentEncryptableObject;
-(void)removeItemAtURL:(id)arg1 ;
-(id)previewImageURL;
-(id)encryptedPreviewImageURL;
-(void)invalidateImage;
-(BOOL)makeSurePreviewImageDirectoryExists:(id*)arg1 ;
-(BOOL)writeEncryptedImageFromData:(id)arg1 ;
-(void)updateFlagToExcludeFromCloudBackup;
-(ICAccount *)placeholderAccount;
-(id)previewImagePathExtension;
-(void)createOrientedPreviewIfNeeded;
-(NSObject*<OS_dispatch_queue>)fileQueue;
-(id)_decryptedImageData;
-(void)setImageID:(unsigned long long)arg1 ;
-(void)deleteFromLocalDatabase;
-(CGAffineTransform)orientedImageTransform;
-(BOOL)imageIsWriting;
-(BOOL)setScaledImageFromImageSrc:(CGImageSourceRef)arg1 typeUTI:(CFStringRef)arg2 ;
-(BOOL)hasAnyPNGPreviewImageFiles;
-(id)orientedPreviewImageURL;
-(long long)minimumSupportedNotesVersion;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)needsToBeFetchedFromCloud;
-(id)decryptedImageData;
-(void)invalidateOrientedImage;
-(BOOL)setImageData:(id)arg1 withSize:(CGSize)arg2 scale:(double)arg3 appearanceType:(unsigned long long)arg4 ;
-(NSData *)metadata;
-(BOOL)needsInitialFetchFromCloud;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

