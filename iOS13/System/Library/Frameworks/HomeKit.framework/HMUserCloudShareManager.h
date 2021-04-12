/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(BOOL)isRegistered;
-(id<HMUserCloudShareManagerDelegate>)delegate;
-(void)setDelegate:(id<HMUserCloudShareManagerDelegate>)arg1 ;
-(NSUUID *)identifier;
-(_HMContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)setRegistered:(BOOL)arg1 ;
-(void)configure;
-(void)reconnect;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(NSArray *)containerIDs;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)messageDestination;
-(void)__registerForMessages;
-(void)_handleDidReceiveShare:(id)arg1 ;
-(void)_registerWithCompletion:(/*^block*/id)arg1 ;
-(void)registerForContainerIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

