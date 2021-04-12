/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@protocol MFDataConsumer;
@class MFAttachmentManager, MFAttachmentPlaceholder, NSURL, MFMimePart, NSString, NSItemProvider, NSArray, EMMailDropMetadata;

@interface MFAttachment : NSObject <NSItemProviderWriting> {

	MFAttachmentManager* _attachmentManager;
	MFAttachmentPlaceholder* _placeholder;
	BOOL _isAutoArchive;
	BOOL _wantsCompletionBlockOffMainThread;
	NSURL* _url;
	MFMimePart* _part;
	NSString* _disposition;
	NSItemProvider* _attachmentDataProvider;
	/*^block*/id _fetchCompletionBlock;
	id<MFDataConsumer> _customConsumer;
	CGSize _imageDimensions;

}

@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * className; 
@property (nonatomic,readonly) BOOL isRestrictedMIMEType; 
@property (nonatomic,readonly) BOOL isMedia; 
@property (nonatomic,readonly) BOOL isPDFFile; 
@property (nonatomic,readonly) BOOL isDisplayableImage; 
@property (nonatomic,readonly) BOOL isDisplayableByWebKit; 
@property (nonatomic,readonly) BOOL isDisplayableInsidePlugin; 
@property (nonatomic,readonly) BOOL isDisplayableInline; 
@property (nonatomic,readonly) BOOL isBasicImage; 
@property (nonatomic,readonly) BOOL isContentCompressed; 
@property (nonatomic,readonly) BOOL isContentOpenable; 
@property (nonatomic,readonly) BOOL isCameraRollCompatibleVideo; 
@property (nonatomic,readonly) unsigned long long scaledFileSize; 
@property (nonatomic,readonly) double constrainedWidth; 
@property (nonatomic,readonly) unsigned long long imageScalingFlags; 
@property (readonly) BOOL isContainedInRFC822; 
@property (readonly) BOOL isContainedInCompose; 
@property (copy) NSString * contentID; 
@property (nonatomic,retain) NSURL * url;                                                          //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MFMimePart * part;                                                    //@synthesize part=_part - In the implementation block
@property (nonatomic,copy) NSString * fileName; 
@property (readonly) NSString * path; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * disposition;                                                 //@synthesize disposition=_disposition - In the implementation block
@property (nonatomic,copy) NSString * remoteImageFileName; 
@property (assign,nonatomic) unsigned long long decodedFileSize; 
@property (assign,nonatomic) unsigned long long encodedFileSize; 
@property (readonly) BOOL isDataAvailableLocally; 
@property (readonly) BOOL shouldAutoDownload; 
@property (readonly) NSString * inferredMimeType; 
@property (readonly) NSString * fileUTType; 
@property (readonly) BOOL isAutoArchive;                                                           //@synthesize isAutoArchive=_isAutoArchive - In the implementation block
@property (assign) BOOL isPlaceholder; 
@property (nonatomic,retain) MFAttachmentPlaceholder * placeholder;                                //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) NSItemProvider * attachmentDataProvider;                              //@synthesize attachmentDataProvider=_attachmentDataProvider - In the implementation block
@property (nonatomic,retain) EMMailDropMetadata * mailDropMetadata; 
@property (nonatomic,copy) id fetchCompletionBlock;                                                //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,retain) id<MFDataConsumer> customConsumer;                                    //@synthesize customConsumer=_customConsumer - In the implementation block
@property (assign,nonatomic) BOOL wantsCompletionBlockOffMainThread;                               //@synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread - In the implementation block
@property (nonatomic,readonly) BOOL isImageFile; 
@property (nonatomic,readonly) BOOL isVideoFile; 
@property (nonatomic,readonly) BOOL isMediaFile; 
@property (nonatomic,readonly) BOOL isRFC822; 
@property (nonatomic,readonly) BOOL isCalendarFile; 
@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSString * meetingStorePersistentID; 
@property (nonatomic,retain) NSString * icsRepresentation; 
@property (assign,nonatomic) CGSize imageDimensions;                                               //@synthesize imageDimensions=_imageDimensions - In the implementation block
+(BOOL)isBasicImageMimeType:(id)arg1 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)attachmentElementHTMLStringWithAttributes:(id)arg1 ;
+(BOOL)_isPDF:(id)arg1 ;
+(BOOL)isSinglePagePDF:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(CGSize)imageDimensionsWithData:(id)arg1 ;
-(double)constrainedWidth;
-(id)_imageScalingKeyForImageScale:(unsigned long long)arg1 ;
-(id)scaledImageToFit:(unsigned long long)arg1 saveScaledImage:(BOOL)arg2 attachmentContextID:(id)arg3 ;
-(BOOL)needsColorspaceConversion;
-(unsigned long long)imageScalingFlags;
-(void)_setImageScale:(unsigned long long)arg1 ;
-(BOOL)isBasicImage;
-(BOOL)isDisplayableByWebKit;
-(BOOL)isContentOpenable;
-(NSString *)contentType;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(BOOL)isPass;
-(NSString *)className;
-(BOOL)isDisplayableInline;
-(BOOL)isRestrictedMIMEType;
-(CGSize)markupSizeForImageScale:(unsigned long long)arg1 ;
-(id)passWithError:(id*)arg1 ;
-(BOOL)isContentCompressed;
-(void)compressContentsWithCompletion:(/*^block*/id)arg1 ;
-(void)decompressContentsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isCameraRollCompatibleVideo;
-(unsigned long long)scaledFileSizeForScale:(unsigned long long)arg1 ;
-(void)enqueueScaleAttachmentWithCompletionBlock:(/*^block*/id)arg1 ;
-(unsigned long long)scaledFileSize;
-(BOOL)isDisplayableInsidePlugin;
-(id)markupStringForCompositionWithPrependedBlankLine:(BOOL)arg1 imageScale:(unsigned long long)arg2 useAttachmentElement:(BOOL)arg3 ;
-(id)markupStringForDisplayWithData:(id)arg1 allowAttachmentElement:(BOOL)arg2 ;
-(BOOL)isMedia;
-(unsigned long long)_imageScale;
-(CGSize)imageDimensions;
-(BOOL)isPDFFile;
-(BOOL)isCalendarFile;
-(void)setImageDimensions:(CGSize)arg1 ;
-(id)filenameStrippingZipIfNeededUseApplications:(BOOL)arg1 ;
-(BOOL)isDisplayableImage;
-(id)_contentTypeByStrippingZipIfNeeded:(BOOL)arg1 ;
-(BOOL)_isContentTypeDisplayableByMobileMail;
-(NSString *)eventID;
-(BOOL)isAvailable;
-(NSString *)mimeType;
-(MFMimePart *)part;
-(BOOL)isCached;
-(BOOL)isPlaceholder;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)conformsToType:(id)arg1 ;
-(id)fetchCompletionBlock;
-(NSString *)path;
-(void)setMimeType:(NSString *)arg1 ;
-(NSURL *)url;
-(NSString *)fileName;
-(NSString *)contentID;
-(void)setDisposition:(NSString *)arg1 ;
-(void)setContentID:(NSString *)arg1 ;
-(id)fileURL;
-(id)metadataValueForKey:(id)arg1 ;
-(NSString *)description;
-(void)setPlaceholder:(MFAttachmentPlaceholder *)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)_dataProvider;
-(BOOL)isRFC822;
-(BOOL)isImageFile;
-(EMMailDropMetadata *)mailDropMetadata;
-(id)fetchPlaceholderData;
-(id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(id)fetchData;
-(BOOL)isMailDrop;
-(BOOL)isDataAvailableLocally;
-(BOOL)isContainedInRFC822;
-(id)readFromDisk;
-(id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)isContainedInCompose;
-(id)filterData:(id)arg1 ;
-(void)setPart:(MFMimePart *)arg1 ;
-(id)fetchDataSynchronously:(id*)arg1 ;
-(id)fetchLocalData;
-(unsigned long long)encodedFileSize;
-(CGSize)imageDimensions;
-(BOOL)contentTypeConformsToEventVCS;
-(id)filterVCSData:(id)arg1 ;
-(NSString *)icsRepresentation;
-(BOOL)isVideoFile;
-(id)fileNameByStrippingZipIfNeeded:(BOOL)arg1 ;
-(id)_fileUTTypeForFileName:(id)arg1 ;
-(BOOL)isPDFFile;
-(BOOL)_isSinglePagePDFFileFetchLocalData:(BOOL)arg1 ;
-(unsigned long long)decodedFileSize;
-(NSString *)fileUTType;
-(id)textEncodingGuessWithData:(id)arg1 ;
-(BOOL)contentTypeConformsToEventICS;
-(id)initWithURL:(id)arg1 attachmentManager:(id)arg2 ;
-(id)decodeFilterWithDataConsumer:(id)arg1 ;
-(id)fetchDataToURL:(id*)arg1 ;
-(id)fileWrapperUsingFetchedLocalData;
-(BOOL)isMailDropPhotoArchive;
-(void)setMailDropMetadata:(EMMailDropMetadata *)arg1 ;
-(id)newDownloadProgress;
-(id)filterICSData:(id)arg1 ;
-(BOOL)isCalendarFile;
-(void)setMeetingStorePersistentID:(NSString *)arg1 ;
-(void)setIcsRepresentation:(NSString *)arg1 ;
-(BOOL)hasCalendarMetadata;
-(BOOL)shouldAutoDownload;
-(NSString *)inferredMimeType;
-(BOOL)isMediaFile;
-(NSString *)remoteImageFileName;
-(void)setRemoteImageFileName:(NSString *)arg1 ;
-(BOOL)isAutoArchive;
-(id)attachmentContentTypeForFileName:(id)arg1 ;
-(BOOL)isSinglePagePDFFile;
-(void)setDecodedFileSize:(unsigned long long)arg1 ;
-(void)setEncodedFileSize:(unsigned long long)arg1 ;
-(void)writeToDiskWithData:(id)arg1 ;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)contentTypeConformsToEvent;
-(NSItemProvider *)attachmentDataProvider;
-(BOOL)contentTypeConformsToProvisionment;
-(BOOL)contentTypeConformsToMarkup;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)contentTypeConformsToIWork;
-(void)setAttachmentDataProvider:(NSItemProvider *)arg1 ;
-(id<MFDataConsumer>)customConsumer;
-(void)setCustomConsumer:(id<MFDataConsumer>)arg1 ;
-(BOOL)wantsCompletionBlockOffMainThread;
-(void)setWantsCompletionBlockOffMainThread:(BOOL)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(MFAttachmentPlaceholder *)placeholder;
-(unsigned long long)hash;
-(NSString *)disposition;
-(NSString *)meetingStorePersistentID;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)setImageDimensions:(CGSize)arg1 ;
-(unsigned long long)sizeOnDisk;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEventID:(NSString *)arg1 ;
-(id)fileAttributes;
@end

