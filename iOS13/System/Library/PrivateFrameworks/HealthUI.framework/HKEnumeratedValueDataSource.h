/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSArray;

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource {

	NSArray* _enumeratedValueOrder;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,retain) NSArray * enumeratedValueOrder;              //@synthesize enumeratedValueOrder=_enumeratedValueOrder - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                      //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(id)_enumeratedValueOrderMapping;
-(id)_enumeratedValuesToIndices:(id)arg1 mapping:(id)arg2 ;
-(NSArray *)enumeratedValueOrder;
-(void)setEnumeratedValueOrder:(NSArray *)arg1 ;
@end

