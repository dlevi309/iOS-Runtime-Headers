/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs;                    //@synthesize activeLifetimeAssertionUUIDs=_activeLifetimeAssertionUUIDs - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(Class)lifetimeClass;
-(id)init;
-(id<DNDSLifetimeMonitorDelegate>)delegate;
-(NSString *)sysdiagnoseDataIdentifier;
-(NSArray *)activeLifetimeAssertionUUIDs;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(void)setDelegate:(id<DNDSLifetimeMonitorDelegate>)arg1 ;
-(void)setDataSource:(id<DNDSLifetimeMonitorDataSource>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)refreshMonitorForDate:(id)arg1 ;
-(void)dealloc;
-(void)refreshMonitorFromQueueForDate:(id)arg1 ;
-(id)updateForModeAssertions:(id)arg1 date:(id)arg2 ;
@end

