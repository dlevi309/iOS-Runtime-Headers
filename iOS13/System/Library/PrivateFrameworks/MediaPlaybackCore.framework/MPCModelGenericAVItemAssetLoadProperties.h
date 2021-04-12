/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCModelPlaybackAssetCacheProviding;
@class NSString, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPIdentifierSet, MPModelStoreAsset;

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject {

	BOOL _allowsHLSContent;
	BOOL _prefersVideoContent;
	BOOL _prefersHighQualityContent;
	BOOL _radioPlayback;
	NSString* _assetSourceStorefrontID;
	id<MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;
	MPModelFileAsset* _fileAsset;
	MPModelGenericObject* _genericObject;
	MPModelHomeSharingAsset* _homeSharingAsset;
	MPIdentifierSet* _itemIdentifiers;
	MPModelStoreAsset* _storeAsset;
	unsigned long long _accountID;
	unsigned long long _delegatedAccountID;
	NSString* _householdID;
	NSString* _storefrontID;

}

@property (assign,nonatomic) BOOL allowsHLSContent;                                                   //@synthesize allowsHLSContent=_allowsHLSContent - In the implementation block
@property (nonatomic,copy) NSString * assetSourceStorefrontID;                                        //@synthesize assetSourceStorefrontID=_assetSourceStorefrontID - In the implementation block
@property (assign,nonatomic) BOOL prefersVideoContent;                                                //@synthesize prefersVideoContent=_prefersVideoContent - In the implementation block
@property (nonatomic,retain) id<MPCModelPlaybackAssetCacheProviding> assetCacheProvider;              //@synthesize assetCacheProvider=_assetCacheProvider - In the implementation block
@property (nonatomic,retain) MPModelFileAsset * fileAsset;                                            //@synthesize fileAsset=_fileAsset - In the implementation block
@property (nonatomic,retain) MPModelGenericObject * genericObject;                                    //@synthesize genericObject=_genericObject - In the implementation block
@property (nonatomic,retain) MPModelHomeSharingAsset * homeSharingAsset;                              //@synthesize homeSharingAsset=_homeSharingAsset - In the implementation block
@property (nonatomic,retain) MPIdentifierSet * itemIdentifiers;                                       //@synthesize itemIdentifiers=_itemIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL prefersHighQualityContent;                                          //@synthesize prefersHighQualityContent=_prefersHighQualityContent - In the implementation block
@property (assign,getter=isRadioPlayback,nonatomic) BOOL radioPlayback;                               //@synthesize radioPlayback=_radioPlayback - In the implementation block
@property (nonatomic,retain) MPModelStoreAsset * storeAsset;                                          //@synthesize storeAsset=_storeAsset - In the implementation block
@property (assign,nonatomic) unsigned long long accountID;                                            //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) unsigned long long delegatedAccountID;                                   //@synthesize delegatedAccountID=_delegatedAccountID - In the implementation block
@property (nonatomic,copy) NSString * householdID;                                                    //@synthesize householdID=_householdID - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;                                                   //@synthesize storefrontID=_storefrontID - In the implementation block
-(MPIdentifierSet *)itemIdentifiers;
-(unsigned long long)accountID;
-(void)setAccountID:(unsigned long long)arg1 ;
-(void)setItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(MPModelStoreAsset *)storeAsset;
-(void)setHomeSharingAsset:(MPModelHomeSharingAsset *)arg1 ;
-(void)setStoreAsset:(MPModelStoreAsset *)arg1 ;
-(MPModelFileAsset *)fileAsset;
-(void)setFileAsset:(MPModelFileAsset *)arg1 ;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(MPModelHomeSharingAsset *)homeSharingAsset;
-(unsigned long long)delegatedAccountID;
-(void)setDelegatedAccountID:(unsigned long long)arg1 ;
-(NSString *)householdID;
-(void)setHouseholdID:(NSString *)arg1 ;
-(NSString *)storefrontID;
-(NSString *)assetSourceStorefrontID;
-(void)setStorefrontID:(NSString *)arg1 ;
-(BOOL)isRadioPlayback;
-(void)setAllowsHLSContent:(BOOL)arg1 ;
-(void)setPrefersVideoContent:(BOOL)arg1 ;
-(void)setAssetCacheProvider:(id<MPCModelPlaybackAssetCacheProviding>)arg1 ;
-(void)setGenericObject:(MPModelGenericObject *)arg1 ;
-(void)setPrefersHighQualityContent:(BOOL)arg1 ;
-(void)setRadioPlayback:(BOOL)arg1 ;
-(id<MPCModelPlaybackAssetCacheProviding>)assetCacheProvider;
-(MPModelGenericObject *)genericObject;
-(BOOL)prefersHighQualityContent;
-(BOOL)allowsHLSContent;
-(BOOL)prefersVideoContent;
@end

