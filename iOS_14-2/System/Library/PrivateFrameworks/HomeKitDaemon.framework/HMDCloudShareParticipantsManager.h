/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, OS_dispatch_queue;
@class NSObject, HMBCloudZone, HMDHome, NSSet, NSString;

@interface HMDCloudShareParticipantsManager : HMFObject <HMFLogging> {

	id<HMDCloudShareParticipantsManagerDataSource> _dataSource;
	id<HMDCloudShareParticipantsManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMBCloudZone* _cloudZone;
	HMDHome* _home;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMBCloudZone * cloudZone;                                             //@synthesize cloudZone=_cloudZone - In the implementation block
@property (__weak) HMDHome * home;                                                         //@synthesize home=_home - In the implementation block
@property (__weak) id<HMDCloudShareParticipantsManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDCloudShareParticipantsManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSSet * participatingUsers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)configure;
-(id<HMDCloudShareParticipantsManagerDelegate>)delegate;
-(id<HMDCloudShareParticipantsManagerDataSource>)dataSource;
-(id)logIdentifier;
-(void)clearParticipants;
-(void)setDelegate:(id<HMDCloudShareParticipantsManagerDelegate>)arg1 ;
-(void)setDataSource:(id<HMDCloudShareParticipantsManagerDataSource>)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(HMBCloudZone *)cloudZone;
-(void)updateShareParticipants;
-(id)initWithQueue:(id)arg1 cloudZone:(id)arg2 home:(id)arg3 ;
-(void)handleHomeUserAddedNotification:(id)arg1 ;
-(void)handleHomeUserRemovedNotification:(id)arg1 ;
-(id)fetchInvitationToUser:(id)arg1 shouldGrantWriteAccess:(BOOL)arg2 ;
-(id)fetchInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(BOOL)arg2 ;
-(id)_untrustedInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(BOOL)arg2 ;
-(NSSet *)participatingUsers;
@end

