/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject {

	NSDictionary* _trackedBagKeys;

}

@property (nonatomic,retain) NSDictionary * trackedBagKeys;              //@synthesize trackedBagKeys=_trackedBagKeys - In the implementation block
+(id)sharedTracker;
-(id)init;
-(void)_updateKeys:(id)arg1 ;
-(BOOL)_amsBagBoolValueForKey:(id)arg1 ;
-(void)_setIsNowPlayingEnabled:(BOOL)arg1 ;
-(void)_setIsSportsEnabled:(BOOL)arg1 ;
-(void)_updateBoolValueForTrackedKey:(id)arg1 ;
-(void)updateTrackedBagValues;
-(void)updateTrackedBagValuesWithChangedKeys:(id)arg1 ;
-(id)isNowPlayingEnabled;
-(id)isSportsEnabled;
-(NSDictionary *)trackedBagKeys;
-(void)setTrackedBagKeys:(NSDictionary *)arg1 ;
@end

