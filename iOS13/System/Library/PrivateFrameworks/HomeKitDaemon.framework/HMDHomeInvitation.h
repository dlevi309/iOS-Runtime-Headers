/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, HMDHome, HMHomeInvitationData, HMFTimer, NSArray, NSUUID, NSDate, NSString;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding> {

	long long _invitationState;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDHome* _home;
	HMHomeInvitationData* _invitationData;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _resolutionHandler;
	/*^block*/id _expirationHandler;
	HMFTimer* _timer;
	NSArray* _operations;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMHomeInvitationData * invitationData;                     //@synthesize invitationData=_invitationData - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                  //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id resolutionHandler;                                        //@synthesize resolutionHandler=_resolutionHandler - In the implementation block
@property (nonatomic,copy) id expirationHandler;                                        //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (nonatomic,retain) HMFTimer * timer;                                          //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSArray * operations;                                      //@synthesize operations=_operations - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy) NSDate * endDate; 
@property (assign,nonatomic) long long invitationState;                                 //@synthesize invitationState=_invitationState - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (getter=isAccepted,nonatomic,readonly) BOOL accepted; 
@property (getter=isDeclined,nonatomic,readonly) BOOL declined; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)operations;
-(HMFTimer *)timer;
-(void)setTimer:(HMFTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(BOOL)isPending;
-(void)setEndDate:(NSDate *)arg1 ;
-(HMDHome *)home;
-(BOOL)isExpired;
-(void)setOperations:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)_clearTimer;
-(void)setHome:(HMDHome *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)expire;
-(long long)invitationState;
-(void)setInvitationState:(long long)arg1 ;
-(void)_configureTimer;
-(void)accept;
-(id)resolutionHandler;
-(void)setResolutionHandler:(id)arg1 ;
-(BOOL)isDeclined;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMHomeInvitationData *)invitationData;
-(id)initWithCoder:(id)arg1 invitationData:(id)arg2 ;
-(void)setInvitationData:(HMHomeInvitationData *)arg1 ;
-(void)decline;
-(void)setExpirationHandler:(id)arg1 ;
-(id)expirationHandler;
-(id)initWithInvitationData:(id)arg1 forHome:(id)arg2 ;
-(void)_resolve:(BOOL)arg1 ;
-(void)updateInvitationState:(long long)arg1 ;
-(BOOL)refreshDisplayName;
-(BOOL)isAccepted;
-(void)notifyStateChangedForMessage:(id)arg1 ;
-(void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2 ;
-(id)describeWithFormat;
@end

