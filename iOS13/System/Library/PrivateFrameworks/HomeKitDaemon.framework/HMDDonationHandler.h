/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface HMDDonationHandler : HMFObject <HMFLogging> {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedDonationHandler;
-(id)init;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)donateActionSet:(id)arg1 withMessage:(id)arg2 ;
-(void)removeIntentForActionSet:(id)arg1 ;
-(void)_donateActionSet:(id)arg1 withMessage:(id)arg2 ;
-(void)_removeIntentForActionSet:(id)arg1 ;
-(void)_donateIntent:(id)arg1 withActionSet:(id)arg2 ;
@end

