/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKSessionDelegate.h>

@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, PKDASession, NSMutableArray, NSString;

@interface PKDASessionManager : NSObject <PKSessionDelegate> {

	NSObject*<OS_dispatch_group> _dispatchGroup;
	/*^block*/id _sessionCreationBlock;
	PKDASession* _session;
	NSMutableArray* _workItems;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)createSession;
-(id)initWithQueue:(id)arg1 sessionCreationBlock:(/*^block*/id)arg2 ;
-(void)performBlockWithSession:(/*^block*/id)arg1 ;
@end

