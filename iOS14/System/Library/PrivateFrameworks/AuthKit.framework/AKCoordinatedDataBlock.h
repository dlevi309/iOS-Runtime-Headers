/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletion:(/*^block*/id)arg1 ;
-(void)start;
-(void)_start;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)_callCompletionWithData:(id)arg1 error:(id)arg2 ;
@end

