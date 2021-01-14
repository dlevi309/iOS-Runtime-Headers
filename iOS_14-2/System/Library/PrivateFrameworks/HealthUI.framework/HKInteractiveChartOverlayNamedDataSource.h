/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKChartCacheDataSource;
@class NSString;

@interface HKInteractiveChartOverlayNamedDataSource : NSObject {

	id<HKChartCacheDataSource> _dataSource;
	NSString* _name;
	/*^block*/id _contextTitleForTimeScope;

}

@property (nonatomic,retain) id<HKChartCacheDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id contextTitleForTimeScope;                          //@synthesize contextTitleForTimeScope=_contextTitleForTimeScope - In the implementation block
-(id<HKChartCacheDataSource>)dataSource;
-(NSString *)name;
-(void)setDataSource:(id<HKChartCacheDataSource>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)contextTitleForTimeScope;
-(id)initWithDataSource:(id)arg1 named:(id)arg2 withContextTitleForTimeScope:(/*^block*/id)arg3 ;
-(void)setContextTitleForTimeScope:(id)arg1 ;
@end

