/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isCollectionType;
-(void)setCollectionType:(BOOL)arg1 ;
-(long long)managedStatus;
-(void)setManagedStatus:(long long)arg1 ;
-(BOOL)hasNonPurgeableAsset;
-(void)setHasNonPurgeableAsset:(BOOL)arg1 ;
-(void)setStoreRedownloadable:(BOOL)arg1 ;
@end

