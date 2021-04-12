/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/


#import <QuickLookThumbnailing/QuickLookThumbnailing-Structs.h>
@class NSURL, NSDictionary, GSAddition, QLThumbnailVersion;

@interface QLThumbnailAddition : NSObject {

	NSURL* _additionURL;
	long long _additionURLSandboxToken;
	NSDictionary* _metadata;
	GSAddition* _addition;
	NSDictionary* _thumbnailDataDictionary;
	QLThumbnailVersion* _thumbnailVersion;

}

@property (readonly) GSAddition * genStoreAddition; 
@property (retain) NSURL * additionURL;                                  //@synthesize additionURL=_additionURL - In the implementation block
@property (retain) NSDictionary * thumbnailDataDictionary;               //@synthesize thumbnailDataDictionary=_thumbnailDataDictionary - In the implementation block
@property (retain) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (assign) long long additionURLSandboxToken;                    //@synthesize additionURLSandboxToken=_additionURLSandboxToken - In the implementation block
@property (readonly) QLThumbnailVersion * thumbnailVersion; 
@property (readonly) unsigned long long additionSize; 
+(BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(BOOL)arg2 atURL:(id)arg3 error:(id*)arg4 ;
+(void)downloadOrGenerateThumbnailAtURL:(id)arg1 ;
+(void)generateThumbnailIfPossibleAtLogicalURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)associateImage:(CGImageRef)arg1 metadata:(id)arg2 automaticallyGenerated:(BOOL)arg3 withURL:(id)arg4 error:(id*)arg5 ;
+(id)metadataForGeneratedThumbnailForURL:(id)arg1 maximumDimension:(double)arg2 ;
+(BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4 ;
+(id)plistInExtendedAttributeNamed:(const char*)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4 ;
+(BOOL)_hitAdditionsOnURLUsingDaemon:(id)arg1 size:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char*)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id*)arg5 ;
+(BOOL)removeExtendedAttributeNamed:(const char*)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4 ;
+(BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(BOOL)arg3 atURL:(id)arg4 error:(id*)arg5 ;
+(id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1 ;
+(id)imageNameForThumbnailInImageSource:(CGImageSourceRef)arg1 ;
+(id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2 ;
+(BOOL)_hitAdditionsOnURL:(id)arg1 size:(unsigned long long)arg2 error:(id*)arg3 ;
+(BOOL)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4 ;
+(BOOL)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4 ;
+(id)additionCreationInfo;
+(BOOL)imageContainsAlphaForOtherImages:(CGImageRef)arg1 ;
+(BOOL)imageContainsAlpha:(CGImageRef)arg1 ;
+(BOOL)_removedAdditionsOnURLUsingDaemon:(id)arg1 ;
+(BOOL)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2 ;
+(BOOL)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
+(BOOL)_removedAdditionsOnURL:(id)arg1 ;
+(void)downloadOrGenerateThumbnailAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)downloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fpfsDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)preFPFSDownloadOrGenerateThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)preFPFSDownloadThumbnailAtTaggedURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)removeAdditionsOnURL:(id)arg1 error:(id*)arg2 ;
+(id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2 ;
+(BOOL)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)sizeOfAdditionsPresentOnURL:(id)arg1 ;
+(BOOL)hasThumbnailOnImmutableDocumentAtURL:(id)arg1 ;
+(id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2 ;
+(BOOL)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3 ;
+(void)noteCloudDocsDownloadedFileAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(CGImageRef)thumbnailWithMaximumDimension:(double)arg1 contentRect:(CGRect*)arg2 properties:(id*)arg3 ;
-(QLThumbnailVersion *)thumbnailVersion;
-(id)thumbnailDataForKey:(id)arg1 ;
-(NSURL *)additionURL;
-(id)thumbnailURLForKey:(id)arg1 ;
-(GSAddition *)genStoreAddition;
-(unsigned long long)additionSize;
-(void)setAdditionURL:(NSURL *)arg1 ;
-(void)setAdditionURLSandboxToken:(long long)arg1 ;
-(id)initWithAdditionsPresentOnURL:(id)arg1 includingExtendedAttributes:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2 ;
-(BOOL)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2 ;
-(id)thumbnailsDictionaryWithError:(id*)arg1 ;
-(NSDictionary *)thumbnailDataDictionary;
-(id)allImageURLs;
-(BOOL)shouldBeInvalidatedByThumbnailVersion:(id)arg1 ;
-(void)setThumbnailDataDictionary:(NSDictionary *)arg1 ;
-(long long)additionURLSandboxToken;
@end

