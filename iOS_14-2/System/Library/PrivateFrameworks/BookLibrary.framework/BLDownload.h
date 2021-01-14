/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber, NSData;

@interface BLDownload : NSObject <NSSecureCoding, NSCopying> {

	NSString* _downloadID;
	NSString* _url;
	NSString* _targetDownloadDirectory;
	long long _state;
	NSDate* _startTime;
	NSString* _assetPath;
	NSString* _buyParameters;
	NSString* _permlink;
	NSNumber* _storeIdentifier;
	NSNumber* _storePlaylistIdentifier;
	NSString* _clientIdentifier;
	NSNumber* _persistentIdentifier;
	NSString* _transactionIdentifier;
	NSString* _cancelDownloadURL;
	unsigned long long _fileSize;
	NSDate* _lastStateChangeTime;
	NSString* _hashType;
	NSString* _md5HashStrings;
	long long _numberOfBytesToHash;
	NSNumber* _serverNumberOfBytesToHash;
	NSNumber* _publicationVersion;
	NSNumber* _isAutomaticDownload;
	NSNumber* _isRestore;
	NSString* _downloadKey;
	NSNumber* _accountID;
	NSNumber* _familyAccountID;
	NSNumber* _isZipStreamable;
	NSData* _dpInfo;
	NSData* _sinfData;
	NSNumber* _isSample;
	NSNumber* _isPurchase;
	NSDate* _purchaseDate;
	NSNumber* _isLocalCacheServer;
	NSString* _originalURL;
	NSNumber* _cleanupPending;
	NSString* _artistName;
	NSString* _title;
	NSString* _subtitle;
	NSString* _collectionArtistName;
	NSString* _collectionTitle;
	NSString* _genre;
	NSString* _kind;
	NSString* _thumbnailImageURL;

}

@property (nonatomic,copy) NSString * downloadID;                               //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSString * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * targetDownloadDirectory;                  //@synthesize targetDownloadDirectory=_targetDownloadDirectory - In the implementation block
@property (assign,nonatomic) long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSDate * startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSString * assetPath;                                //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,copy) NSString * buyParameters;                            //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,copy) NSString * permlink;                                 //@synthesize permlink=_permlink - In the implementation block
@property (nonatomic,retain) NSNumber * storeIdentifier;                        //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * storePlaylistIdentifier;                //@synthesize storePlaylistIdentifier=_storePlaylistIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * persistentIdentifier;                   //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                    //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cancelDownloadURL;                        //@synthesize cancelDownloadURL=_cancelDownloadURL - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                       //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSDate * lastStateChangeTime;                        //@synthesize lastStateChangeTime=_lastStateChangeTime - In the implementation block
@property (nonatomic,copy) NSString * hashType;                                 //@synthesize hashType=_hashType - In the implementation block
@property (nonatomic,copy) NSString * md5HashStrings;                           //@synthesize md5HashStrings=_md5HashStrings - In the implementation block
@property (assign,nonatomic) long long numberOfBytesToHash;                     //@synthesize numberOfBytesToHash=_numberOfBytesToHash - In the implementation block
@property (nonatomic,retain) NSNumber * serverNumberOfBytesToHash;              //@synthesize serverNumberOfBytesToHash=_serverNumberOfBytesToHash - In the implementation block
@property (nonatomic,retain) NSNumber * publicationVersion;                     //@synthesize publicationVersion=_publicationVersion - In the implementation block
@property (nonatomic,retain) NSNumber * isAutomaticDownload;                    //@synthesize isAutomaticDownload=_isAutomaticDownload - In the implementation block
@property (nonatomic,retain) NSNumber * isRestore;                              //@synthesize isRestore=_isRestore - In the implementation block
@property (nonatomic,copy) NSString * downloadKey;                              //@synthesize downloadKey=_downloadKey - In the implementation block
@property (nonatomic,retain) NSNumber * accountID;                              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) NSNumber * familyAccountID;                        //@synthesize familyAccountID=_familyAccountID - In the implementation block
@property (nonatomic,retain) NSNumber * isZipStreamable;                        //@synthesize isZipStreamable=_isZipStreamable - In the implementation block
@property (nonatomic,copy) NSData * dpInfo;                                     //@synthesize dpInfo=_dpInfo - In the implementation block
@property (nonatomic,copy) NSData * sinfData;                                   //@synthesize sinfData=_sinfData - In the implementation block
@property (nonatomic,retain) NSNumber * isSample;                               //@synthesize isSample=_isSample - In the implementation block
@property (nonatomic,retain) NSNumber * isPurchase;                             //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                             //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,retain) NSNumber * isLocalCacheServer;                     //@synthesize isLocalCacheServer=_isLocalCacheServer - In the implementation block
@property (nonatomic,copy) NSString * originalURL;                              //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,retain) NSNumber * cleanupPending;                         //@synthesize cleanupPending=_cleanupPending - In the implementation block
@property (nonatomic,copy) NSString * artistName;                               //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * collectionArtistName;                     //@synthesize collectionArtistName=_collectionArtistName - In the implementation block
@property (nonatomic,copy) NSString * collectionTitle;                          //@synthesize collectionTitle=_collectionTitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                    //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * kind;                                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * thumbnailImageURL;                        //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)accountID;
-(NSString *)genre;
-(NSString *)originalURL;
-(void)setAccountID:(NSNumber *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)hashType;
-(NSString *)downloadID;
-(NSNumber *)isSample;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(unsigned long long)fileSize;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)subtitle;
-(NSData *)dpInfo;
-(NSString *)collectionArtistName;
-(void)setCollectionArtistName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setThumbnailImageURL:(NSString *)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSNumber *)publicationVersion;
-(NSString *)cancelDownloadURL;
-(NSString *)thumbnailImageURL;
-(NSDate *)purchaseDate;
-(NSString *)artistName;
-(void)setCancelDownloadURL:(NSString *)arg1 ;
-(void)setPublicationVersion:(NSNumber *)arg1 ;
-(NSNumber *)isAutomaticDownload;
-(NSString *)url;
-(long long)numberOfBytesToHash;
-(NSString *)collectionTitle;
-(NSData *)sinfData;
-(NSString *)kind;
-(void)setPersistentIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)persistentIdentifier;
-(NSString *)buyParameters;
-(id)description;
-(NSNumber *)isRestore;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setHashType:(NSString *)arg1 ;
-(void)setNumberOfBytesToHash:(long long)arg1 ;
-(void)setIsZipStreamable:(NSNumber *)arg1 ;
-(void)setIsRestore:(NSNumber *)arg1 ;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setFileSize:(unsigned long long)arg1 ;
-(NSString *)downloadKey;
-(NSString *)permlink;
-(NSNumber *)isPurchase;
-(void)setDownloadID:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)assetPath;
-(void)setPermlink:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setAssetPath:(NSString *)arg1 ;
-(void)setTargetDownloadDirectory:(NSString *)arg1 ;
-(NSString *)targetDownloadDirectory;
-(NSNumber *)storePlaylistIdentifier;
-(void)setStorePlaylistIdentifier:(NSNumber *)arg1 ;
-(NSDate *)lastStateChangeTime;
-(void)setDpInfo:(NSData *)arg1 ;
-(NSString *)clientIdentifier;
-(void)setLastStateChangeTime:(NSDate *)arg1 ;
-(NSString *)md5HashStrings;
-(void)setMd5HashStrings:(NSString *)arg1 ;
-(NSNumber *)serverNumberOfBytesToHash;
-(void)setServerNumberOfBytesToHash:(NSNumber *)arg1 ;
-(void)setIsAutomaticDownload:(NSNumber *)arg1 ;
-(NSNumber *)familyAccountID;
-(void)setFamilyAccountID:(NSNumber *)arg1 ;
-(NSNumber *)isZipStreamable;
-(void)setSinfData:(NSData *)arg1 ;
-(void)setIsSample:(NSNumber *)arg1 ;
-(void)setIsPurchase:(NSNumber *)arg1 ;
-(NSNumber *)isLocalCacheServer;
-(void)setIsLocalCacheServer:(NSNumber *)arg1 ;
-(NSNumber *)cleanupPending;
-(void)setCleanupPending:(NSNumber *)arg1 ;
-(double)transferProgressFraction;
-(void)setCollectionTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startTime;
-(NSNumber *)storeIdentifier;
-(void)setOriginalURL:(NSString *)arg1 ;
-(NSString *)title;
@end

