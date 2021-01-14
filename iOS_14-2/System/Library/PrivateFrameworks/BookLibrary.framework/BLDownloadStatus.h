/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface BLDownloadStatus : NSObject <NSCopying> {

	BOOL _isAudiobook;
	BOOL _isRestore;
	BOOL _canPause;
	BOOL _isSample;
	BOOL _isPurchase;
	NSNumber* _storeID;
	NSNumber* _storePlaylistID;
	NSString* _permLink;
	NSString* _downloadID;
	NSNumber* _percentComplete;
	NSNumber* _estimatedTimeRemaining;
	NSNumber* _transferBytesWritten;
	NSNumber* _transferBytesExpected;
	long long _downloadPhase;
	NSDate* _purchaseDate;
	long long _persistentIdentifier;
	NSNumber* _storeAccountIdentifier;
	NSString* _artistName;
	NSString* _title;
	NSString* _subtitle;
	NSString* _collectionArtistName;
	NSString* _collectionTitle;
	NSString* _genre;
	NSString* _thumbnailImageURL;
	NSString* _assetKind;

}

@property (nonatomic,retain) NSNumber * storeID;                             //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,retain) NSNumber * storePlaylistID;                     //@synthesize storePlaylistID=_storePlaylistID - In the implementation block
@property (nonatomic,copy) NSString * permLink;                              //@synthesize permLink=_permLink - In the implementation block
@property (nonatomic,copy) NSString * downloadID;                            //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,retain) NSNumber * percentComplete;                     //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,retain) NSNumber * estimatedTimeRemaining;              //@synthesize estimatedTimeRemaining=_estimatedTimeRemaining - In the implementation block
@property (nonatomic,retain) NSNumber * transferBytesWritten;                //@synthesize transferBytesWritten=_transferBytesWritten - In the implementation block
@property (nonatomic,retain) NSNumber * transferBytesExpected;               //@synthesize transferBytesExpected=_transferBytesExpected - In the implementation block
@property (assign,nonatomic) long long downloadPhase;                        //@synthesize downloadPhase=_downloadPhase - In the implementation block
@property (assign,nonatomic) BOOL isAudiobook;                               //@synthesize isAudiobook=_isAudiobook - In the implementation block
@property (assign,nonatomic) BOOL isRestore;                                 //@synthesize isRestore=_isRestore - In the implementation block
@property (assign,nonatomic) BOOL canPause;                                  //@synthesize canPause=_canPause - In the implementation block
@property (assign,nonatomic) BOOL isSample;                                  //@synthesize isSample=_isSample - In the implementation block
@property (assign,nonatomic) BOOL isPurchase;                                //@synthesize isPurchase=_isPurchase - In the implementation block
@property (nonatomic,retain) NSDate * purchaseDate;                          //@synthesize purchaseDate=_purchaseDate - In the implementation block
@property (assign,nonatomic) long long persistentIdentifier;                 //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * storeAccountIdentifier;              //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * artistName;                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * collectionArtistName;                  //@synthesize collectionArtistName=_collectionArtistName - In the implementation block
@property (nonatomic,copy) NSString * collectionTitle;                       //@synthesize collectionTitle=_collectionTitle - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * thumbnailImageURL;                     //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSString * assetKind;                             //@synthesize assetKind=_assetKind - In the implementation block
-(NSNumber *)storeID;
-(NSString *)genre;
-(NSString *)downloadID;
-(BOOL)isSample;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)storeAccountIdentifier;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)collectionArtistName;
-(void)setCollectionArtistName:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEstimatedTimeRemaining:(NSNumber *)arg1 ;
-(void)setThumbnailImageURL:(NSString *)arg1 ;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(NSNumber *)estimatedTimeRemaining;
-(NSString *)thumbnailImageURL;
-(NSDate *)purchaseDate;
-(NSString *)artistName;
-(NSString *)collectionTitle;
-(void)setPersistentIdentifier:(long long)arg1 ;
-(long long)persistentIdentifier;
-(BOOL)isRestore;
-(NSString *)assetKind;
-(void)setPercentComplete:(NSNumber *)arg1 ;
-(void)setAssetKind:(NSString *)arg1 ;
-(void)setIsRestore:(BOOL)arg1 ;
-(NSNumber *)percentComplete;
-(BOOL)canPause;
-(long long)downloadPhase;
-(void)setCanPause:(BOOL)arg1 ;
-(NSString *)permLink;
-(BOOL)isPurchase;
-(NSNumber *)transferBytesWritten;
-(NSNumber *)transferBytesExpected;
-(void)setDownloadID:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setIsSample:(BOOL)arg1 ;
-(void)setIsPurchase:(BOOL)arg1 ;
-(void)setCollectionTitle:(NSString *)arg1 ;
-(void)setPermLink:(NSString *)arg1 ;
-(BOOL)isAudiobook;
-(NSNumber *)storePlaylistID;
-(void)setStorePlaylistID:(NSNumber *)arg1 ;
-(void)setTransferBytesWritten:(NSNumber *)arg1 ;
-(void)setTransferBytesExpected:(NSNumber *)arg1 ;
-(void)setDownloadPhase:(long long)arg1 ;
-(void)setIsAudiobook:(BOOL)arg1 ;
-(void)setStoreAccountIdentifier:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStoreID:(NSNumber *)arg1 ;
-(NSString *)title;
@end

