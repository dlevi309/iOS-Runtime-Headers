/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/


@class NSDictionary;

@interface NMSMediaSyncInfo : NSObject {

	int _notifyToken;
	NSDictionary* _info;
	unsigned long long _target;

}

@property (nonatomic,retain) NSDictionary * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) unsigned long long target;              //@synthesize target=_target - In the implementation block
+(id)_syncInfoDirectory;
-(id)containers;
-(NSDictionary *)info;
-(float)progress;
-(id)initWithTarget:(unsigned long long)arg1 ;
-(id)_targetIdentifier;
-(BOOL)_isValid;
-(BOOL)hasItemsOverStorageLimitForContainer:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(BOOL)hasItemsOverStorageLimit;
-(unsigned long long)statusForContainer:(id)arg1 ;
-(id)_notificationName;
-(unsigned long long)target;
-(float)progressForContainer:(id)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
-(unsigned long long)playabilityForContainer:(id)arg1 ;
-(id)_initWithTarget:(unsigned long long)arg1 readAndObserveChanges:(BOOL)arg2 ;
-(void)_registerForInfoChanged;
-(void)_readInfo;
-(id)_syncInfoFilePath;
-(id)itemsForContainer:(id)arg1 ;
-(unsigned long long)statusForItem:(id)arg1 ;
-(float)progressForItem:(id)arg1 ;
-(BOOL)isItemOverStorageLimit:(id)arg1 ;
-(BOOL)hasDownloadableItemsWithinStorageLimitForContainer:(id)arg1 ;
-(id)userInfoForContainer:(id)arg1 ;
-(id)userInfoForItem:(id)arg1 ;
-(BOOL)_hasItemsForContainer:(id)arg1 ;
-(id)_preferencesApplicationID;
-(id)_preferencesInfoKey;
-(unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)arg1 ;
@end

