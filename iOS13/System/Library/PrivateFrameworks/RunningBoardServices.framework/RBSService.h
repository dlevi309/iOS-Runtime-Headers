/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSConnectionServiceDelegate.h>

@protocol RBSServiceDelegate, OS_dispatch_queue;
@class NSMutableSet, RBSConnection, NSObject, NSString;

@interface RBSService : NSObject <RBSConnectionServiceDelegate> {

	id<RBSServiceDelegate> _delegate;
	os_unfair_lock_s _lock;
	NSMutableSet* _inheritances;
	RBSConnection* _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)didReceiveInheritances:(id)arg1 ;
-(void)didLoseInheritances:(id)arg1 ;
-(void)willTerminateProcessWithAcknowledgement:(/*^block*/id)arg1 ;
-(id)inheritances;
@end

