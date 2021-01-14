/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@interface CMFall : NSObject
+(BOOL)areStatsAvailable;
-(BOOL)setStatsEnabled:(BOOL)arg1 ;
-(unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1 ;
-(id)fallConfig;
-(id)sendStatsDataToUrl:(id)arg1 ;
-(void)sendStatsDataToUrl:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)simulateEvent:(unsigned long long)arg1 ;
@end

