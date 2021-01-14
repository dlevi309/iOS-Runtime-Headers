/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(NSNumber *)storeItemID;
-(id)init;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithRestoreDownload:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(void)setStoreAccountID:(NSNumber *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(NSString *)arg1 ;
-(NSNumber *)storeAccountID;
-(NSString *)videoDimensions;
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
-(void)setCloudItemID:(NSNumber *)arg1 ;
-(void)setDownloadKind:(NSString *)arg1 ;
-(void)setDRMFree:(BOOL)arg1 ;
-(void)setStoreFlavor:(NSString *)arg1 ;
-(NSString *)storeFlavor;
-(void)setStoreOriginalPurchaserAccountID:(NSNumber *)arg1 ;
-(void)setStoreSoftwareVersionID:(NSString *)arg1 ;
-(NSString *)storeAccountAppleID;
-(NSNumber *)storeOriginalPurchaserAccountID;
-(NSString *)storeSoftwareVersionID;
-(void)setVideoDimensions:(NSString *)arg1 ;
-(void)setStoreFrontID:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(NSString *)storeFrontID;
-(NSString *)bundleID;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(NSString *)title;
-(BOOL)isDRMFree;
-(void)dealloc;
@end

