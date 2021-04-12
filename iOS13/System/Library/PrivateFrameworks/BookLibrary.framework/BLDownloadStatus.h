/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface BLDownloadStatus : NSObject <NSCopying> {

	BOOL _isAudiobook;
	BOOL _isRestore;
	BOOL _isSample;
	BOOL _isPurchase;
	BOOL _canPause;
	NSNumber* _storeID;
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
	NSString* _genre;
	NSString* _thumbnailImageURL;
	NSString* _assetKind;

}

@property (nonatomic,retain) NSNumber * storeID;                             //@synthesize storeID=_storeID - In the implementation block
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
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * genre;                                 //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * thumbnailImageURL;                     //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
@property (nonatomic,copy) NSString * assetKind;                             //@synthesize assetKind=_assetKind - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)persistentIdentifier;
-(void)setPersistentIdentifier:(long long)arg1 ;
-(NSNumber *)estimatedTimeRemaining;
-(void)setEstimatedTimeRemaining:(NSNumber *)arg1 ;
-(NSString *)genre;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSNumber *)percentComplete;
-(void)setPercentComplete:(NSNumber *)arg1 ;
-(NSNumber *)storeID;
-(void)setCanPause:(BOOL)arg1 ;
-(BOOL)canPause;
-(NSString *)assetKind;
-(void)setAssetKind:(NSString *)arg1 ;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(long long)downloadPhase;
-(void)setStoreID:(NSNumber *)arg1 ;
-(NSNumber *)storeAccountIdentifier;
-(BOOL)isRestore;
-(void)setDownloadID:(NSString *)arg1 ;
-(NSString *)downloadID;
-(void)setThumbnailImageURL:(NSString *)arg1 ;
-(NSDate *)purchaseDate;
-(NSString *)thumbnailImageURL;
-(BOOL)isSample;
-(void)setPurchaseDate:(NSDate *)arg1 ;
-(BOOL)isPurchase;
-(NSNumber *)transferBytesWritten;
-(NSNumber *)transferBytesExpected;
-(void)setIsRestore:(BOOL)arg1 ;
-(void)setDownloadPhase:(long long)arg1 ;
-(NSString *)permLink;
-(void)setStoreAccountIdentifier:(NSNumber *)arg1 ;
-(void)setIsSample:(BOOL)arg1 ;
-(void)setIsPurchase:(BOOL)arg1 ;
-(void)setPermLink:(NSString *)arg1 ;
-(BOOL)isAudiobook;
-(void)setTransferBytesWritten:(NSNumber *)arg1 ;
-(void)setTransferBytesExpected:(NSNumber *)arg1 ;
-(void)setIsAudiobook:(BOOL)arg1 ;
@end

