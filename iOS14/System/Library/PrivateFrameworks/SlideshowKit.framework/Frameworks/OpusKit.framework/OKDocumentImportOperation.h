/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusFoundation/OFNSOperation.h>

@class OKDocument, NSURL;

@interface OKDocumentImportOperation : OFNSOperation {

	OKDocument* _document;
	NSURL* _resourceURL;
	NSURL* _importedResourceURL;
	BOOL _opaque;
	NSURL* _temporaryDownloadedMediaFileURL;
	NSURL* _temporaryTranscodedMediaFileURL;
	NSURL* _temporaryThumbnailMediaFileURL;

}

@property (nonatomic,retain) NSURL * temporaryDownloadedMediaFileURL;              //@synthesize temporaryDownloadedMediaFileURL=_temporaryDownloadedMediaFileURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryTranscodedMediaFileURL;              //@synthesize temporaryTranscodedMediaFileURL=_temporaryTranscodedMediaFileURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryThumbnailMediaFileURL;               //@synthesize temporaryThumbnailMediaFileURL=_temporaryThumbnailMediaFileURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * importedResourceURL;                   //@synthesize importedResourceURL=_importedResourceURL - In the implementation block
-(id)init;
-(void)cancelOperation;
-(void)dealloc;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(id)initWithDocument:(id)arg1 resourceURL:(id)arg2 importedResourceURL:(id)arg3 opaque:(BOOL)arg4 ;
-(void)setTemporaryThumbnailMediaFileURL:(NSURL *)arg1 ;
-(void)setTemporaryTranscodedMediaFileURL:(NSURL *)arg1 ;
-(void)setTemporaryDownloadedMediaFileURL:(NSURL *)arg1 ;
-(NSURL *)importedResourceURL;
-(NSURL *)temporaryDownloadedMediaFileURL;
-(NSURL *)temporaryTranscodedMediaFileURL;
-(NSURL *)temporaryThumbnailMediaFileURL;
@end

