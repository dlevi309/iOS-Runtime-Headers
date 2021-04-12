/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didLoseInheritances:(id)arg1 ;
-(void)didReceiveInheritances:(id)arg1 ;
-(id)inheritances;
-(void)dealloc;
@end

