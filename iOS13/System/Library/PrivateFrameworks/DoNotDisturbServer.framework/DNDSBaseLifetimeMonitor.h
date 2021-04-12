/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>
#import <libobjc.A.dylib/DNDSLifetimeMonitor.h>

@protocol OS_dispatch_queue, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;
@class NSArray, NSObject, NSString;

@interface DNDSBaseLifetimeMonitor : NSObject <DNDSSysdiagnoseDataProvider, DNDSLifetimeMonitor> {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _activeLifetimeAssertionUUIDs;
	id<DNDSLifetimeMonitorDataSource> _dataSource;
	id<DNDSLifetimeMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs;                    //@synthesize activeLifetimeAssertionUUIDs=_activeLifetimeAssertionUUIDs - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(Class)lifetimeClass;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DNDSLifetimeMonitorDelegate>)delegate;
-(void)setDelegate:(id<DNDSLifetimeMonitorDelegate>)arg1 ;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(void)setDataSource:(id<DNDSLifetimeMonitorDataSource>)arg1 ;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(NSString *)sysdiagnoseDataIdentifier;
-(void)refreshMonitorFromQueueForDate:(id)arg1 ;
-(id)updateForModeAssertions:(id)arg1 date:(id)arg2 ;
-(NSArray *)activeLifetimeAssertionUUIDs;
-(void)refreshMonitorForDate:(id)arg1 ;
@end

