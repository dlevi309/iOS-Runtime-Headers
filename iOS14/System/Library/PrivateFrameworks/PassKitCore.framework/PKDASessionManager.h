/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)createSession;
-(void)performBlockWithSession:(/*^block*/id)arg1 ;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(id)initWithQueue:(id)arg1 sessionCreationBlock:(/*^block*/id)arg2 ;
@end

