/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {

	NSNumber* _accountID;
	NSNumber* _originalPurchaserAccountID;
	NSString* _appleID;
	NSString* _bundleID;
	NSNumber* _cloudMatchStatus;
	BOOL _isRestore;
	NSMutableDictionary* _properties;

}

@property (nonatomic,copy) NSString * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * cloudItemID; 
@property (nonatomic,retain) NSNumber * cloudMatchStatus; 
@property (nonatomic,copy) NSString * downloadKind; 
@property (nonatomic,copy) NSString * podcastEpisodeGUID; 
@property (nonatomic,copy) NSString * storeAccountAppleID; 
@property (nonatomic,retain) NSNumber * storeAccountID; 
@property (nonatomic,retain) NSNumber * storeOriginalPurchaserAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (nonatomic,retain) NSNumber * storeItemID; 
@property (nonatomic,copy) NSString * storeSoftwareVersionID; 
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isDRMFree,nonatomic) BOOL DRMFree; 
@property (nonatomic,copy) NSString * storeFlavor; 
@property (nonatomic,copy) NSString * videoDimensions; 
-(id)init;
-(void)dealloc;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)videoDimensions;
-(void)setVideoDimensions:(NSString *)arg1 ;
-(NSNumber *)storeItemID;
-(NSNumber *)storeAccountID;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(id)initWithRestoreDownload:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(NSString *)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setStoreAccountID:(NSNumber *)arg1 ;
-(NSString *)storeFrontID;
-(id)_initSSRestoreContentItem;
-(void)setValue:(id)arg1 forAssetProperty:(id)arg2 ;
-(id)_restoreKeyForAssetProperty:(id)arg1 ;
-(id)_restoreKeyForDownloadProperty:(id)arg1 ;
-(void)setStoreAccountAppleID:(NSString *)arg1 ;
-(void)setCloudMatchStatus:(NSNumber *)arg1 ;
-(NSNumber *)cloudItemID;
-(NSNumber *)cloudMatchStatus;
-(id)copyRestoreDictionary;
-(NSString *)downloadKind;
-(BOOL)isDRMFree;
-(void)setCloudItemID:(NSNumber *)arg1 ;
-(void)setDownloadKind:(NSString *)arg1 ;
-(void)setDRMFree:(BOOL)arg1 ;
-(void)setStoreOriginalPurchaserAccountID:(NSNumber *)arg1 ;
-(void)setStoreFlavor:(NSString *)arg1 ;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(void)setStoreSoftwareVersionID:(NSString *)arg1 ;
-(NSString *)storeAccountAppleID;
-(NSString *)storeFlavor;
-(NSNumber *)storeOriginalPurchaserAccountID;
-(NSString *)storeSoftwareVersionID;
@end

