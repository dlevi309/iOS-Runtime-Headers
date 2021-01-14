/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemProvider.h>

@class NSDateInterval, HMHome, NSMutableSet;

@interface HUFaceRecognitionRecentEventsItemProvider : HFItemProvider {

	NSDateInterval* _dateRange;
	unsigned long long _fetchLimit;
	HMHome* _home;
	NSMutableSet* _personItems;

}

@property (nonatomic,retain) HMHome * home;                              //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableSet * personItems;                 //@synthesize personItems=_personItems - In the implementation block
@property (nonatomic,retain) NSDateInterval * dateRange;                 //@synthesize dateRange=_dateRange - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
+(BOOL)prefersNonBlockingReloads;
+(/*^block*/id)cameraSignificantEventDateComparator;
+(id)_coalescedItems:(id)arg1 ;
-(unsigned long long)fetchLimit;
-(NSDateInterval *)dateRange;
-(id)items;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(NSMutableSet *)personItems;
-(void)setPersonItems:(NSMutableSet *)arg1 ;
-(id)invalidationReasons;
-(void)setHome:(HMHome *)arg1 ;
-(void)setDateRange:(NSDateInterval *)arg1 ;
-(HMHome *)home;
@end

