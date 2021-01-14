/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isCurrentUserAdmin;
-(void)_setAdminStatus:(id)arg1 forAccountID:(id)arg2 ;
-(double)refreshPeriod;
-(BOOL)_statusIsFresh:(id)arg1 ;
-(id)_adminStatusForAccountID:(id)arg1 ;
-(void)getAdminStatusAndWaitWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
-(void)setRefreshPeriod:(double)arg1 ;
-(void)reset;
-(void)getAdminStatusWithOptions:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
@end

