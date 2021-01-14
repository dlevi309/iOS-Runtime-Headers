/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {

	BOOL _collectionType;
	BOOL _hasNonPurgeableAsset;
	BOOL _storeRedownloadable;
	long long _managedStatus;

}

@property (assign,getter=isCollectionType,nonatomic) BOOL collectionType;                        //@synthesize collectionType=_collectionType - In the implementation block
@property (assign,nonatomic) long long managedStatus;                                            //@synthesize managedStatus=_managedStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNonPurgeableAsset;                                          //@synthesize hasNonPurgeableAsset=_hasNonPurgeableAsset - In the implementation block
@property (assign,getter=isStoreRedownloadable,nonatomic) BOOL storeRedownloadable;              //@synthesize storeRedownloadable=_storeRedownloadable - In the implementation block
-(BOOL)isStoreRedownloadable;
-(long long)managedStatus;
-(void)setHasNonPurgeableAsset:(BOOL)arg1 ;
-(void)setStoreRedownloadable:(BOOL)arg1 ;
-(void)setManagedStatus:(long long)arg1 ;
-(unsigned long long)hash;
-(void)setCollectionType:(BOOL)arg1 ;
-(BOOL)hasNonPurgeableAsset;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isCollectionType;
@end

