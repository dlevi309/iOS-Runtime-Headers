/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSScheduleManagerDataSource;
@class DNDSModeAssertionManager, DNDSScheduleSettings;

@interface DNDSScheduleManager : NSObject {

	DNDSModeAssertionManager* _modeAssertionManager;
	DNDSScheduleSettings* _currentScheduleSettings;
	id<DNDSScheduleManagerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<DNDSScheduleManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)refresh;
-(id<DNDSScheduleManagerDataSource>)dataSource;
-(void)setDataSource:(id<DNDSScheduleManagerDataSource>)arg1 ;
-(void)_refreshWithScheduleSettings:(id)arg1 context:(id)arg2 ;
-(id)initWithModeAssertionManager:(id)arg1 ;
@end

