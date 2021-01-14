/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMUserCloudShareManagerDelegate;
@class _HMContext, NSUUID, NSArray, NSString;

@interface HMUserCloudShareManager : NSObject <HMFMessageReceiver> {

	BOOL _registered;
	id<HMUserCloudShareManagerDelegate> _delegate;
	_HMContext* _context;
	NSUUID* _identifier;
	NSArray* _containerIDs;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isRegistered,nonatomic) BOOL registered;                             //@synthesize registered=_registered - In the implementation block
@property (nonatomic,retain) NSArray * containerIDs;                                          //@synthesize containerIDs=_containerIDs - In the implementation block
@property (__weak) id<HMUserCloudShareManagerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isRegistered;
-(void)setRegistered:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(void)reconnect;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(void)configure;
-(id)init;
-(void)__registerForMessages;
-(id<HMUserCloudShareManagerDelegate>)delegate;
-(id)initWithContext:(id)arg1 ;
-(_HMContext *)context;
-(void)setDelegate:(id<HMUserCloudShareManagerDelegate>)arg1 ;
-(id)messageDestination;
-(void)_registerWithCompletion:(/*^block*/id)arg1 ;
-(void)registerForContainerIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSUUID *)identifier;
-(NSArray *)containerIDs;
-(void)dealloc;
-(void)_handleDidReceiveShare:(id)arg1 ;
-(void)_handleDidReceiveRepairRequest:(id)arg1 ;
@end

