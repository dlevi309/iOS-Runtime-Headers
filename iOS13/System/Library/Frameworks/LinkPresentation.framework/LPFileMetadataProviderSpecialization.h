/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	LPLinkMetadata* _metadata;
	LPFileMetadata* _fileMetadata;
	NSObject*<OS_dispatch_group> _fetchGroup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForResourceWithContext:(id)arg1 ;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(id)_thumbnailQueue;
-(void)cancel;
-(void)start;
-(void)complete;
-(void)metadataProviderSpecializationDidFail:(id)arg1 ;
-(void)metadataProviderSpecialization:(id)arg1 didCompleteWithMetadata:(id)arg2 ;
-(void)fetchMetadataFromURL:(id)arg1 ;
-(void)fetchIconAndThumbnailFromQuickLookForURL:(id)arg1 ;
-(void)updatePreliminaryMetadata;
-(void)cleanUpTemporaryFile;
@end

