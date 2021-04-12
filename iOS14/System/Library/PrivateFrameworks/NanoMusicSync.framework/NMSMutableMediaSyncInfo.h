/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMSMediaSyncInfo.h>

@class NSMutableDictionary;

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {

	BOOL _needsUpdateAggregateInfo;

}

@property (nonatomic,retain) NSMutableDictionary * info; 
-(void)setUserInfo:(id)arg1 forItem:(id)arg2 ;
-(float)progress;
-(id)_infoForItem:(id)arg1 ;
-(id)initWithTarget:(unsigned long long)arg1 ;
-(BOOL)hasItemsOverStorageLimitForContainer:(id)arg1 ;
-(void)synchronize;
-(void)setOverStorageLimit:(BOOL)arg1 forItem:(id)arg2 ;
-(void)setItems:(id)arg1 forContainer:(id)arg2 ;
-(void)setProgressBytes:(unsigned long long)arg1 totalBytes:(unsigned long long)arg2 forItem:(id)arg3 ;
-(BOOL)hasItemsOverStorageLimit;
-(unsigned long long)statusForContainer:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 forItem:(id)arg2 ;
-(void)_writeInfo;
-(void)setOverStorageLimitBehavior:(unsigned long long)arg1 forContainer:(id)arg2 ;
-(float)progressForContainer:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forContainer:(id)arg2 ;
-(void)_updateAggregateInfoIfNeeded;
-(unsigned long long)_persistingOptions;
-(void)_notifyInfoChanged;
-(unsigned long long)status;
-(unsigned long long)playabilityForContainer:(id)arg1 ;
-(id)_info;
-(id)_infoForContainer:(id)arg1 ;
@end

