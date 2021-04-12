/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPCModelPlaybackAssetCacheProviding;
@class NSString, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPIdentifierSet, MPModelStoreAsset;

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject {

	BOOL _allowsHLSContent;
	BOOL _prefersVideoContent;
	BOOL _prefersHighQualityContent;
	BOOL _radioPlayback;
	BOOL _followUp;
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
@property (assign,getter=isFollowUp,nonatomic) BOOL followUp;                                         //@synthesize followUp=_followUp - In the implementation block
@property (assign,nonatomic) unsigned long long accountID;                                            //@synthesize accountID=_accountID - In the implementation block
@property (assign,nonatomic) unsigned long long delegatedAccountID;                                   //@synthesize delegatedAccountID=_delegatedAccountID - In the implementation block
@property (nonatomic,copy) NSString * householdID;                                                    //@synthesize householdID=_householdID - In the implementation block
@property (nonatomic,copy) NSString * storefrontID;                                                   //@synthesize storefrontID=_storefrontID - In the implementation block
-(unsigned long long)accountID;
-(void)setAccountID:(unsigned long long)arg1 ;
-(MPModelHomeSharingAsset *)homeSharingAsset;
-(MPIdentifierSet *)itemIdentifiers;
-(void)setStoreAsset:(MPModelStoreAsset *)arg1 ;
-(void)setHomeSharingAsset:(MPModelHomeSharingAsset *)arg1 ;
-(void)setItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(unsigned long long)delegatedAccountID;
-(void)setDelegatedAccountID:(unsigned long long)arg1 ;
-(NSString *)householdID;
-(NSString *)storefrontID;
-(BOOL)isFollowUp;
-(void)setFollowUp:(BOOL)arg1 ;
-(NSString *)assetSourceStorefrontID;
-(void)setAssetSourceStorefrontID:(NSString *)arg1 ;
-(void)setStorefrontID:(NSString *)arg1 ;
-(MPModelStoreAsset *)storeAsset;
-(MPModelFileAsset *)fileAsset;
-(void)setHouseholdID:(NSString *)arg1 ;
-(void)setFileAsset:(MPModelFileAsset *)arg1 ;
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

