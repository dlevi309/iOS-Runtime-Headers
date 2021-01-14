/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>
#import <libobjc.A.dylib/LPMetadataProviderSpecializationDelegate.h>

@protocol OS_dispatch_group;
@class NSURL, LPImage, NSString, LPLinkMetadata, LPFileMetadata, NSObject;

@interface LPFileMetadataProviderSpecialization : LPMetadataProviderSpecialization <LPMetadataProviderSpecializationDelegate> {

	BOOL _cancelled;
	NSURL* _temporaryFileURL;
	LPImage* _originalImage;
	LPImage* _quickLookThumbnail;
	NSString* _MIMEType;
	NSString* _UTI;
	LPLinkMetadata* _metadata;
	LPFileMetadata* _fileMetadata;
	NSObject*<OS_dispatch_group> _fetchGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specializedMetadataProviderForResourceWithContext:(id)arg1 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(id)_thumbnailQueue;
+(unsigned long long)specialization;
-(void)metadataProviderSpecializationDidFail:(id)arg1 ;
-(void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2 ;
-(void)start;
-(void)complete;
-(void)fetchMetadataFromURL:(id)arg1 ;
-(void)fetchMetadataForReachableFile:(id)arg1 ;
-(void)generateFallbackMetadataForUnreachableFile:(id)arg1 ;
-(void)fetchIconAndThumbnailFromQuickLookForURL:(id)arg1 ;
-(void)updatePreliminaryMetadata;
-(void)cleanUpTemporaryFile;
-(void)cancel;
@end

