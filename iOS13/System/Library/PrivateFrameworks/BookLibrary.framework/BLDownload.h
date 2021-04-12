/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _clientIdentifier;
	NSNumber* _persistentIdentifier;
	NSString* _transactionIdentifier;
	NSString* _cancelDownloadURL;
	unsigned long long _fileSize;
	NSDate* _lastStateChangeTime;
	NSString* _hashType;
	NSString* _md5HashStrings;
	long long _numberOfBytesToHash;
	NSNumber* _publicationVersion;
	NSNumber* _isAutomaticDownload;
	NSNumber* _isRestore;
	NSString* _downloadKey;
	NSNumber* _accountID;
	NSNumber* _isZipStreamable;
	NSData* _dpInfo;
	NSNumber* _isSample;
	NSNumber* _isPurchase;
	NSDate* _purchaseDate;
	NSNumber* _isLocalCacheServer;
	NSString* _originalURL;
	NSString* _artistName;
	NSString* _title;
	NSString* _subtitle;
	NSString* _genre;
	NSString* _kind;
	NSString* _thumbnailImageURL;

}

@property (nonatomic,copy) NSString * downloadID;                           //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSString * url;                                  //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * targetDownloadDirectory;              //@synthesize targetDownloadDirectory=_targetDownloadDirectory - In the implementation block
@property (assign,nonatomic) long long state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSString * assetPath;                            //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,copy) NSString * buyParameters;                        //@synthesize buyParameters=_buyParameters - In the implementation block
@property (nonatomic,copy) NSString * permlink;                             //@synthesize permlink=_permlink - In the implementation block
@property (nonatomic,retain) NSNumber * storeIdentifier;                    //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * persistentIdentifier;               //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * transactionIdentifier;                //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * cancelDownloadURL;                    //@synthesize cancelDownloadURL=_cancelDownloadURL - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) NSDate * lastStateChangeTime;                    //@synthesize lastStateChangeTime=_lastStateChangeTime - In the implementation block
@property (nonatomic,copy) NSString * hashType;                             //@synthesize hashType=_hashType - In the implementation block
@property (nonatomic,copy) NSString * md5HashStrings;                       //@synthesize md5HashStrings=_md5HashStrings - In the implementation block
@property (assign,nonatomic) long long numberOfBytesToHash;                 //@synthesize numberOfBytesToHash=_numberOfBytesToHash - In the implementation block
@property (nonatomic,copy) NSNumber * publicationVersion;                   //@synthesize publicationVersion=_publicationVersion - In the implementation block
@property (assign,nonatomic) NSNumber * isAutomaticDownload;                //@synthesize isAutomaticDownload=_isAutomaticDownload - In the implementation block
@property (nonatomic,copy) NSNumber * isRestore;                            //@synthesize isRestore=_isRestore - In the implementation block
@property (nonatomic,copy) NSString * downloadKey;                          //@synthesize downloadKey=_downloadKey - In the implementation block
@property (nonatomic,copy) NSNumber * accountID;                            //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSNumber * isZipStreamable;                      //@synthesize isZipStreamable=_isZipStreamable - In the implementation block
@property (nonatomic,copy) NSData * dpInfo;                                 //@synthesize dpInfo=_dpInfo - In the implementation block
@property (nonatomic,retain) NSNumber * isSample;                           //@synthesize isSample=_isSample - In the implementation block
@property (nonatomic,retain) NSNumber * isPurchase;                         //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                         //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (nonatomic,retain) NSNumber * isLocalCacheServer;                 //@synthesize isLocalCacheServer=_isLocalCacheServer - In the implementation block
@property (nonatomic,copy) NSString * originalURL;                          //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,copy) NSString * artistName;                           //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * thumbnailImageURL;                    //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)fileSize;
-(long long)state;
-(NSString *)url;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)persistentIdentifier;
-(void)setPersistentIdentifier:(NSNumber *)arg1 ;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(NSString *)genre;
-(void)setState:(long long)arg1 ;
-(NSString *)originalURL;
-(NSString *)subtitle;
-(void)setUrl:(NSString *)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSNumber *)accountID;
-(NSNumber *)storeIdentifier;
-(void)setStoreIdentifier:(NSNumber *)arg1 ;
-(void)setAccountID:(NSNumber *)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)transactionIdentifier;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setOriginalURL:(NSString *)arg1 ;
-(NSString *)buyParameters;
-(NSString *)downloadKey;
-(void)setGenre:(NSString *)arg1 ;
-(NSNumber *)isRestore;
-(void)setBuyParameters:(NSString *)arg1 ;
-(void)setDownloadID:(NSString *)arg1 ;
-(NSString *)downloadID;
-(void)setThumbnailImageURL:(NSString *)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSDate *)purchaseDate;
-(NSNumber *)publicationVersion;
-(NSString *)cancelDownloadURL;
-(NSString *)thumbnailImageURL;
-(NSNumber *)isSample;
-(void)setCancelDownloadURL:(NSString *)arg1 ;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(void)setPublicationVersion:(NSNumber *)arg1 ;
-(NSNumber *)isAutomaticDownload;
-(long long)numberOfBytesToHash;
-(NSNumber *)isPurchase;
-(void)setHashType:(NSString *)arg1 ;
-(void)setNumberOfBytesToHash:(long long)arg1 ;
-(void)setIsZipStreamable:(NSNumber *)arg1 ;
-(void)setIsRestore:(NSNumber *)arg1 ;
-(NSString *)hashType;
-(NSNumber *)isZipStreamable;
-(void)setAssetPath:(NSString *)arg1 ;
-(NSString *)assetPath;
-(NSString *)permlink;
-(void)setPermlink:(NSString *)arg1 ;
-(void)setTargetDownloadDirectory:(NSString *)arg1 ;
-(NSString *)targetDownloadDirectory;
-(NSDate *)lastStateChangeTime;
-(void)setLastStateChangeTime:(NSDate *)arg1 ;
-(NSString *)md5HashStrings;
-(void)setMd5HashStrings:(NSString *)arg1 ;
-(void)setIsAutomaticDownload:(NSNumber *)arg1 ;
-(NSData *)dpInfo;
-(void)setDpInfo:(NSData *)arg1 ;
-(void)setIsSample:(NSNumber *)arg1 ;
-(void)setIsPurchase:(NSNumber *)arg1 ;
-(NSNumber *)isLocalCacheServer;
-(void)setIsLocalCacheServer:(NSNumber *)arg1 ;
-(double)transferProgressFraction;
@end

