/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dispatchBlock:(/*^block*/id)arg1 name:(id)arg2 ;
-(id)initWithMaintenanceWorkCoordinator:(id)arg1 ;
@end

