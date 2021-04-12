/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDHomeRemoteNotificationHandler : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logID;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                    //@synthesize logID=_logID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)logID;
-(id)logIdentifier;
-(id)initWithHome:(id)arg1 ;
-(void)sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(void)_sendNotifications:(id)arg1 notificationUpdateIdentifier:(id)arg2 ;
-(void)sendConfigureBulletinNotification:(id)arg1 ;
@end

