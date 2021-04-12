/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SSVMediaSocialAdminPermissionsCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _refreshPeriod;

}

@property (nonatomic,readonly) BOOL isCurrentUserAdmin; 
@property (assign) double refreshPeriod;                             //@synthesize refreshPeriod=_refreshPeriod - In the implementation block
+(id)sharedCoordinator;
-(id)init;
-(void)reset;
-(void)getAdminStatusWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(id)_adminStatusForAccountID:(id)arg1 ;
-(BOOL)_statusIsFresh:(id)arg1 ;
-(void)_setAdminStatus:(id)arg1 forAccountID:(id)arg2 ;
-(void)setRefreshPeriod:(double)arg1 ;
-(double)refreshPeriod;
-(void)getAdminStatusAndWaitWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(BOOL)isCurrentUserAdmin;
@end

