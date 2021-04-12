/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFDataConsumer;
#import <Message/Message-Structs.h>
@class MFAttachmentManager, MFAttachmentPlaceholder, NSURL, MFMimePart, NSString, EMMailDropMetadata;

@interface MFAttachment : NSObject {

	MFAttachmentManager* _attachmentManager;
	MFAttachmentPlaceholder* _placeholder;
	BOOL _isAutoArchive;
	BOOL _wantsCompletionBlockOffMainThread;
	NSURL* _url;
	MFMimePart* _part;
	NSString* _disposition;
	/*^block*/id _fetchCompletionBlock;
	id<MFDataConsumer> _customConsumer;
	CGSize _imageDimensions;

}

@property (readonly) BOOL isContainedInRFC822; 
@property (readonly) BOOL isContainedInCompose; 
@property (copy) NSString * contentID; 
@property (nonatomic,retain) NSURL * url;                                         //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) MFMimePart * part;                                   //@synthesize part=_part - In the implementation block
@property (nonatomic,copy) NSString * fileName; 
@property (readonly) NSString * path; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * disposition;                                //@synthesize disposition=_disposition - In the implementation block
@property (nonatomic,copy) NSString * remoteImageFileName; 
@property (assign,nonatomic) unsigned long long decodedFileSize; 
@property (assign,nonatomic) unsigned long long encodedFileSize; 
@property (readonly) BOOL isDataAvailableLocally; 
@property (readonly) BOOL shouldAutoDownload; 
@property (readonly) NSString * inferredMimeType; 
@property (readonly) NSString * fileUTType; 
@property (readonly) BOOL isAutoArchive;                                          //@synthesize isAutoArchive=_isAutoArchive - In the implementation block
@property (assign) BOOL isPlaceholder; 
@property (nonatomic,retain) MFAttachmentPlaceholder * placeholder;               //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) EMMailDropMetadata * mailDropMetadata; 
@property (nonatomic,copy) id fetchCompletionBlock;                               //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,retain) id<MFDataConsumer> customConsumer;                   //@synthesize customConsumer=_customConsumer - In the implementation block
@property (assign,nonatomic) BOOL wantsCompletionBlockOffMainThread;              //@synthesize wantsCompletionBlockOffMainThread=_wantsCompletionBlockOffMainThread - In the implementation block
@property (nonatomic,readonly) BOOL isImageFile; 
@property (nonatomic,readonly) BOOL isVideoFile; 
@property (nonatomic,readonly) BOOL isMediaFile; 
@property (nonatomic,readonly) BOOL isRFC822; 
@property (nonatomic,readonly) BOOL isCalendarFile; 
@property (nonatomic,retain) NSString * eventID; 
@property (nonatomic,retain) NSString * meetingStorePersistentID; 
@property (nonatomic,retain) NSString * icsRepresentation; 
@property (assign,nonatomic) CGSize imageDimensions;                              //@synthesize imageDimensions=_imageDimensions - In the implementation block
+(BOOL)isSinglePagePDF:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)path;
-(id)fileAttributes;
-(NSURL *)url;
-(id)fileURL;
-(BOOL)isPlaceholder;
-(BOOL)conformsToType:(id)arg1 ;
-(BOOL)isAvailable;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)disposition;
-(void)setDisposition:(NSString *)arg1 ;
-(void)setPlaceholder:(MFAttachmentPlaceholder *)arg1 ;
-(MFAttachmentPlaceholder *)placeholder;
-(id)fetchData;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)isCached;
-(CGSize)imageDimensions;
-(void)setImageDimensions:(CGSize)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)_dataProvider;
-(NSString *)contentID;
-(void)setContentID:(NSString *)arg1 ;
-(NSString *)meetingStorePersistentID;
-(BOOL)isImageFile;
-(id)metadataValueForKey:(id)arg1 ;
-(EMMailDropMetadata *)mailDropMetadata;
-(id)fetchPlaceholderData;
-(id)fetchDataSynchronously:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(MFMimePart *)part;
-(BOOL)isMailDrop;
-(BOOL)isDataAvailableLocally;
-(BOOL)isContainedInRFC822;
-(id)fetchLocalData:(id*)arg1 stripPrivateMetadata:(BOOL)arg2 ;
-(BOOL)isContainedInCompose;
-(id)readFromDisk;
-(id)filterData:(id)arg1 ;
-(id)fetchCompletionBlock;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(id)fetchDataSynchronously:(id*)arg1 ;
-(id)fetchLocalData;
-(unsigned long long)encodedFileSize;
-(BOOL)contentTypeConformsToEventVCS;
-(id)filterVCSData:(id)arg1 ;
-(NSString *)icsRepresentation;
-(NSString *)eventID;
-(BOOL)isVideoFile;
-(id)fileNameByStrippingZipIfNeeded:(BOOL)arg1 ;
-(id)_fileUTTypeForFileName:(id)arg1 ;
-(BOOL)isPDFFile;
-(BOOL)_isSinglePagePDFFileFetchLocalData:(BOOL)arg1 ;
-(unsigned long long)sizeOnDisk;
-(unsigned long long)decodedFileSize;
-(id)textEncodingGuessWithData:(id)arg1 ;
-(NSString *)fileUTType;
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
-(void)setEventID:(NSString *)arg1 ;
-(void)setMeetingStorePersistentID:(NSString *)arg1 ;
-(void)setIcsRepresentation:(NSString *)arg1 ;
-(BOOL)hasCalendarMetadata;
-(BOOL)shouldAutoDownload;
-(NSString *)inferredMimeType;
-(BOOL)isRFC822;
-(BOOL)isMediaFile;
-(NSString *)remoteImageFileName;
-(void)setRemoteImageFileName:(NSString *)arg1 ;
-(id)attachmentContentTypeForFileName:(id)arg1 ;
-(BOOL)isSinglePagePDFFile;
-(void)setDecodedFileSize:(unsigned long long)arg1 ;
-(void)setEncodedFileSize:(unsigned long long)arg1 ;
-(void)writeToDiskWithData:(id)arg1 ;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToProvisionment;
-(BOOL)contentTypeConformsToMarkup;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)contentTypeConformsToIWork;
-(void)setPart:(MFMimePart *)arg1 ;
-(BOOL)isAutoArchive;
-(id<MFDataConsumer>)customConsumer;
-(void)setCustomConsumer:(id<MFDataConsumer>)arg1 ;
-(BOOL)wantsCompletionBlockOffMainThread;
-(void)setWantsCompletionBlockOffMainThread:(BOOL)arg1 ;
@end

