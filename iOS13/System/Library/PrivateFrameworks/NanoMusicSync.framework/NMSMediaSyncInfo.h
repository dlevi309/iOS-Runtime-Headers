/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)target;
-(float)progress;
-(unsigned long long)status;
-(id)initWithTarget:(unsigned long long)arg1 ;
-(NSDictionary *)info;
-(BOOL)_isValid;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)_notificationName;
-(void)_readInfo;
-(id)containers;
-(id)_targetIdentifier;
-(id)_initWithTarget:(unsigned long long)arg1 readAndObserveChanges:(BOOL)arg2 ;
-(void)_registerForInfoChanged;
-(id)_syncInfoFilePath;
-(id)itemsForContainer:(id)arg1 ;
-(unsigned long long)statusForContainer:(id)arg1 ;
-(unsigned long long)statusForItem:(id)arg1 ;
-(float)progressForContainer:(id)arg1 ;
-(float)progressForItem:(id)arg1 ;
-(unsigned long long)playabilityForContainer:(id)arg1 ;
-(unsigned long long)numberOfItemsOverStorageLimitForContainer:(id)arg1 ;
-(unsigned long long)numberOfItemsOverStorageLimit;
-(id)userInfoForContainer:(id)arg1 ;
-(id)userInfoForItem:(id)arg1 ;
-(BOOL)_hasItemsForContainer:(id)arg1 ;
-(id)_preferencesApplicationID;
-(id)_preferencesInfoKey;
@end

