/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)compare:(id)arg1 ;
-(id)directory;
-(id)delegate;
-(void)setDate:(id)arg1 ;
-(BOOL)hasThumbnail;
-(id)extensions;
-(void)addExtension:(id)arg1 ;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)hasVideoFile;
-(id)description;
-(BOOL)isValid;
-(id)pathForVideoPreviewFile;
-(BOOL)isWritePending;
-(id)pathForVideoFile;
-(id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3 ;
-(id)imageSourceTypeHint;
-(void)deleteObsoleteFiles;
-(BOOL)hasObsoleteFiles;
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
-(id)lowResolutionFilename;
-(id)prebakedWildcatThumbnailsFilename;
-(id)videoPreviewFilename;
-(id)pathForThumbnailFile;
-(id)pathForPrebakedThumbnail;
-(id)pathForPrebakedWildcatThumbnailsFile;
-(id)pathForLowResolutionFile;
-(BOOL)hasPrebakedThumbnail;
-(void)deleteFiles;
-(BOOL)hasPrebakedLandscapeScrubberThumbnails;
-(BOOL)hasPrebakedPortraitScrubberThumbnails;
-(BOOL)hasPrebakedWildcatThumbnails;
-(unsigned long long)hash;
-(id)date;
-(id)pathForTrimmedVideoFile;
-(id)pathForFullSizeImage;
-(id)pathForPrebakedLandscapeScrubberThumbnails;
-(id)pathForPrebakedPortraitScrubberThumbnails;
-(BOOL)isEqual:(id)arg1 ;
@end

