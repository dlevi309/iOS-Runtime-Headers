/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLPhotoDCFObject.h>

@class PLPhotoDCFDirectory, NSString, NSMutableSet, NSDate;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject {

	id _delegate;
	PLPhotoDCFDirectory* _directory;
	NSString* _directoryPath;
	NSString* _prebakedThumbnailPath;
	NSString* _videoFileExtension;
	NSMutableSet* _extensions;
	NSDate* _date;
	NSString* _preferredExtension;
	unsigned long long _hash;
	unsigned _hashComputed : 1;
	unsigned _addedExtensions : 1;
	unsigned _writeIsPending : 1;

}
+(id)allMetadataFileExtensions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(long long)compare:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)date;
-(id)directory;
-(BOOL)hasThumbnail;
-(void)setDate:(id)arg1 ;
-(id)extensions;
-(id)pathForVideoPreviewFile;
-(id)pathForVideoFile;
-(id)pathForFullSizeImage;
-(id)pathForTrimmedVideoFile;
-(id)pathForPrebakedLandscapeScrubberThumbnails;
-(id)pathForPrebakedPortraitScrubberThumbnails;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3 ;
-(id)imageSourceTypeHint;
-(void)deleteObsoleteFiles;
-(BOOL)hasObsoleteFiles;
-(void)addExtension:(id)arg1 ;
-(void)addExtensionsFromMetadataDirectory;
-(void)forceAddExtensionsFromMetadataDirectory;
-(id)pathForContainingDirectory;
-(id)pathForGroupWithoutExtension;
-(id)pathForMetadata;
-(id)pathForMetadataWithGroupName;
-(void)createMetadataDirectoryIfNecessary;
-(id)thumbnailFilename;
-(id)prebakedThumbnailFilename;
-(id)prebakedLandscapeScrubberThumbnailsFilename;
-(id)prebakedPortraitScrubberThumbnailsFilename;
-(id)prebakedWildcatThumbnailsFilename;
-(id)lowResolutionFilename;
-(id)videoPreviewFilename;
-(id)pathForThumbnailFile;
-(id)pathForPrebakedThumbnail;
-(id)pathForPrebakedWildcatThumbnailsFile;
-(id)pathForLowResolutionFile;
-(BOOL)hasVideoFile;
-(BOOL)hasPrebakedThumbnail;
-(BOOL)hasPrebakedLandscapeScrubberThumbnails;
-(BOOL)hasPrebakedPortraitScrubberThumbnails;
-(BOOL)hasPrebakedWildcatThumbnails;
-(void)deleteFiles;
-(BOOL)isWritePending;
@end

