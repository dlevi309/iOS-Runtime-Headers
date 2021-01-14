/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)syncStatus;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(BOOL)isManatee;
-(NSString *)serviceName;
-(unsigned long long)state;
-(void)setServiceName:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_group>)syncGroup;
-(NSDate *)completionDate;
-(void)setSyncStatus:(NSNumber *)arg1 ;
-(NSError *)syncError;
-(void)waitOnSyncWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setManatee:(BOOL)arg1 ;
-(void)setSyncGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSyncError:(NSError *)arg1 ;
@end

