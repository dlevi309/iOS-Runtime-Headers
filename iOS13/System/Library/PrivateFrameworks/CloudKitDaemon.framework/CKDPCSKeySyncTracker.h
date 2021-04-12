/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_group;
@class NSString, NSObject, NSDate, NSNumber, NSError;

@interface CKDPCSKeySyncTracker : NSObject {

	BOOL _manatee;
	NSString* _serviceName;
	NSObject*<OS_dispatch_group> _syncGroup;
	NSDate* _completionDate;
	NSNumber* _syncStatus;
	NSError* _syncError;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,retain) NSString * serviceName;                              //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,getter=isManatee,nonatomic) BOOL manatee;                       //@synthesize manatee=_manatee - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> syncGroup;              //@synthesize syncGroup=_syncGroup - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                             //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSNumber * syncStatus;                               //@synthesize syncStatus=_syncStatus - In the implementation block
@property (nonatomic,retain) NSError * syncError;                                 //@synthesize syncError=_syncError - In the implementation block
-(unsigned long long)state;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSNumber *)syncStatus;
-(NSObject*<OS_dispatch_group>)syncGroup;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(NSError *)syncError;
-(void)waitOnSyncWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)isManatee;
-(void)setManatee:(BOOL)arg1 ;
-(void)setSyncGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSyncStatus:(NSNumber *)arg1 ;
-(void)setSyncError:(NSError *)arg1 ;
@end

