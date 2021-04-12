/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<DNDSScheduleManagerDataSource>)dataSource;
-(void)setDataSource:(id<DNDSScheduleManagerDataSource>)arg1 ;
-(void)refresh;
-(void)_refreshWithScheduleSettings:(id)arg1 context:(id)arg2 ;
-(id)initWithModeAssertionManager:(id)arg1 ;
@end

