/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDBlockDispatcher.h>

@class HDMaintenanceWorkCoordinator, NSString;

@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject <HDBlockDispatcher> {

	HDMaintenanceWorkCoordinator* _maintenanceWorkCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMaintenanceWorkCoordinator:(id)arg1 ;
-(id)init;
-(void)dispatchBlock:(/*^block*/id)arg1 name:(id)arg2 ;
@end

