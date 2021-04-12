/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_group;
#import <AuthKit/AuthKit-Structs.h>
@class NSObject;

@interface AKCoordinatedDataBlock : NSObject {

	/*^block*/id _block;
	/*^block*/id _completionHandler;
	BOOL _started;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_group> _group;

}
+(id)startCoordinatingBlock:(/*^block*/id)arg1 ;
-(void)start;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)_start;
-(void)setCompletion:(/*^block*/id)arg1 ;
-(void)_callCompletionWithData:(id)arg1 error:(id)arg2 ;
@end

