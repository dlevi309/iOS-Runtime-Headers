/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSString, NSNumber, NSDate, NSDictionary;

@interface BLJaliscoItem : NSObject {

	NSString* _storeID;
	NSString* _artist;
	NSString* _artworkTokenCode;
	NSString* _artworkURLString;
	NSString* _cloudID;
	NSString* _genre;
	NSNumber* _isHidden;
	NSDate* _purchasedAt;
	NSString* _purchasedTokenCode;
	NSNumber* _purchaseHistoryID;
	NSString* _title;
	NSNumber* _isExplicit;
	NSNumber* _isDisabled;
	NSDate* _expectedDate;
	NSString* _sortedTitle;
	NSString* _sortedAuthor;
	NSNumber* _pageProgressionDirection;
	NSString* _version;
	NSString* _displayVersion;
	NSString* _storeDownloadParameters;
	NSString* _fileExtension;
	NSNumber* _isPictureBook;
	NSNumber* _containsAudio;
	NSNumber* _isReadAloud;
	NSString* _chapterMetadataURLString;
	NSNumber* _isAudiobook;
	NSString* _hlsPlaylistURLString;
	NSNumber* _storeAccountID;
	NSDictionary* _additionalAudiobookInfo;
	NSNumber* _needsImport;

}

@property (nonatomic,copy) NSString * storeID;                                    //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * artist;                                     //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * artworkTokenCode;                           //@synthesize artworkTokenCode=_artworkTokenCode - In the implementation block
@property (nonatomic,copy) NSString * artworkURLString;                           //@synthesize artworkURLString=_artworkURLString - In the implementation block
@property (nonatomic,copy) NSString * cloudID;                                    //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,copy) NSString * genre;                                      //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSNumber * isHidden;                                 //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,copy) NSDate * purchasedAt;                                  //@synthesize purchasedAt=_purchasedAt - In the implementation block
@property (nonatomic,copy) NSString * purchasedTokenCode;                         //@synthesize purchasedTokenCode=_purchasedTokenCode - In the implementation block
@property (nonatomic,retain) NSNumber * purchaseHistoryID;                        //@synthesize purchaseHistoryID=_purchaseHistoryID - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * isExplicit;                               //@synthesize isExplicit=_isExplicit - In the implementation block
@property (nonatomic,retain) NSNumber * isDisabled;                               //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,copy) NSDate * expectedDate;                                 //@synthesize expectedDate=_expectedDate - In the implementation block
@property (nonatomic,copy) NSString * sortedTitle;                                //@synthesize sortedTitle=_sortedTitle - In the implementation block
@property (nonatomic,copy) NSString * sortedAuthor;                               //@synthesize sortedAuthor=_sortedAuthor - In the implementation block
@property (nonatomic,retain) NSNumber * pageProgressionDirection;                 //@synthesize pageProgressionDirection=_pageProgressionDirection - In the implementation block
@property (nonatomic,copy) NSString * version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * displayVersion;                             //@synthesize displayVersion=_displayVersion - In the implementation block
@property (nonatomic,copy) NSString * storeDownloadParameters;                    //@synthesize storeDownloadParameters=_storeDownloadParameters - In the implementation block
@property (nonatomic,copy) NSString * fileExtension;                              //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,retain) NSNumber * isPictureBook;                            //@synthesize isPictureBook=_isPictureBook - In the implementation block
@property (nonatomic,retain) NSNumber * containsAudio;                            //@synthesize containsAudio=_containsAudio - In the implementation block
@property (nonatomic,retain) NSNumber * isReadAloud;                              //@synthesize isReadAloud=_isReadAloud - In the implementation block
@property (nonatomic,retain) NSString * chapterMetadataURLString;                 //@synthesize chapterMetadataURLString=_chapterMetadataURLString - In the implementation block
@property (nonatomic,retain) NSNumber * isAudiobook;                              //@synthesize isAudiobook=_isAudiobook - In the implementation block
@property (nonatomic,retain) NSString * hlsPlaylistURLString;                     //@synthesize hlsPlaylistURLString=_hlsPlaylistURLString - In the implementation block
@property (nonatomic,retain) NSNumber * storeAccountID;                           //@synthesize storeAccountID=_storeAccountID - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalAudiobookInfo;              //@synthesize additionalAudiobookInfo=_additionalAudiobookInfo - In the implementation block
@property (nonatomic,retain) NSNumber * needsImport;                              //@synthesize needsImport=_needsImport - In the implementation block
@property (nonatomic,readonly) NSNumber * duration; 
+(id)itemWithServerItem:(id)arg1 ;
+(id)arrayWithServerItems:(id)arg1 ;
-(NSString *)storeID;
-(NSString *)genre;
-(NSString *)hlsPlaylistURLString;
-(NSNumber *)isHidden;
-(NSString *)artist;
-(NSNumber *)needsImport;
-(NSString *)fileExtension;
-(void)setGenre:(NSString *)arg1 ;
-(void)setStoreAccountID:(NSNumber *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSNumber *)pageProgressionDirection;
-(NSDate *)expectedDate;
-(void)setPageProgressionDirection:(NSNumber *)arg1 ;
-(NSNumber *)isDisabled;
-(NSNumber *)storeAccountID;
-(id)description;
-(NSNumber *)isExplicit;
-(unsigned long long)hash;
-(void)setNeedsImport:(NSNumber *)arg1 ;
-(void)setPurchaseHistoryID:(NSNumber *)arg1 ;
-(NSNumber *)purchaseHistoryID;
-(void)setArtist:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(void)setIsDisabled:(NSNumber *)arg1 ;
-(NSNumber *)isAudiobook;
-(NSNumber *)duration;
-(void)setCloudID:(NSString *)arg1 ;
-(void)setIsAudiobook:(NSNumber *)arg1 ;
-(void)setIsHidden:(NSNumber *)arg1 ;
-(NSString *)version;
-(NSString *)artworkTokenCode;
-(NSString *)cloudID;
-(void)setArtworkTokenCode:(NSString *)arg1 ;
-(void)setArtworkURLString:(NSString *)arg1 ;
-(NSString *)purchasedTokenCode;
-(NSString *)artworkURLString;
-(void)setStoreID:(NSString *)arg1 ;
-(NSDate *)purchasedAt;
-(void)setPurchasedAt:(NSDate *)arg1 ;
-(void)setPurchasedTokenCode:(NSString *)arg1 ;
-(void)setIsExplicit:(NSNumber *)arg1 ;
-(void)setExpectedDate:(NSDate *)arg1 ;
-(NSString *)sortedTitle;
-(void)setSortedTitle:(NSString *)arg1 ;
-(NSString *)sortedAuthor;
-(void)setSortedAuthor:(NSString *)arg1 ;
-(NSString *)displayVersion;
-(void)setDisplayVersion:(NSString *)arg1 ;
-(NSString *)storeDownloadParameters;
-(void)setStoreDownloadParameters:(NSString *)arg1 ;
-(NSNumber *)isPictureBook;
-(void)setIsPictureBook:(NSNumber *)arg1 ;
-(NSNumber *)containsAudio;
-(void)setContainsAudio:(NSNumber *)arg1 ;
-(NSNumber *)isReadAloud;
-(void)setIsReadAloud:(NSNumber *)arg1 ;
-(NSString *)chapterMetadataURLString;
-(void)setChapterMetadataURLString:(NSString *)arg1 ;
-(void)setHlsPlaylistURLString:(NSString *)arg1 ;
-(NSDictionary *)additionalAudiobookInfo;
-(void)setAdditionalAudiobookInfo:(NSDictionary *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

