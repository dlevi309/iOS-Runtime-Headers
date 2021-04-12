/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSArray, NSMutableArray;

@interface HMDUserActionPredictionContainer : HMFObject {

	HMFUnfairLock* _lock;
	BOOL _sortedPredictionsByServiceGroupNeedsUpdate;
	NSArray* _sortedPredictionsByServiceGroup;
	NSMutableArray* _sortedPredictionGroups;

}

@property (nonatomic,retain) NSMutableArray * sortedPredictionGroups;              //@synthesize sortedPredictionGroups=_sortedPredictionGroups - In the implementation block
@property (copy) NSArray * sortedPredictionsByServiceGroup;                        //@synthesize sortedPredictionsByServiceGroup=_sortedPredictionsByServiceGroup - In the implementation block
@property (copy,readonly) NSArray * allPredictions; 
-(id)init;
-(NSArray *)sortedPredictionsByServiceGroup;
-(unsigned long long)addOrUpdatePrediction:(id)arg1 ;
-(unsigned long long)removePrediction:(id)arg1 ;
-(NSArray *)allPredictions;
-(NSMutableArray *)sortedPredictionGroups;
-(id)createPredictionGroupForPrediction:(id)arg1 ;
-(id)_movePrediction:(id)arg1 fromGroup:(id)arg2 intoGroup:(id)arg3 ;
-(unsigned long long)_insertPredictionGroup:(id)arg1 ;
-(void)setSortedPredictionsByServiceGroup:(NSArray *)arg1 ;
-(void)setSortedPredictionGroups:(NSMutableArray *)arg1 ;
@end

