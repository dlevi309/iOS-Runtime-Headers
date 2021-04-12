/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject {

	NSDictionary* _trackedBagKeys;

}

@property (nonatomic,retain) NSDictionary * trackedBagKeys;              //@synthesize trackedBagKeys=_trackedBagKeys - In the implementation block
+(id)sharedTracker;
-(id)init;
-(NSDictionary *)trackedBagKeys;
-(id)isSportsEnabled;
-(void)setTrackedBagKeys:(NSDictionary *)arg1 ;
-(void)_setIsNowPlayingEnabled:(BOOL)arg1 ;
-(void)updateTrackedBagValues;
-(void)_updateBoolValueForTrackedKey:(id)arg1 ;
-(void)_updateKeys:(id)arg1 ;
-(id)isNowPlayingEnabled;
-(BOOL)_amsBagBoolValueForKey:(id)arg1 ;
-(void)_setIsSportsEnabled:(BOOL)arg1 ;
-(void)updateTrackedBagValuesWithChangedKeys:(id)arg1 ;
@end

