/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


@protocol OS_os_log;
#import <ClassKit/ClassKit-Structs.h>
@class NSMutableArray, NSObject;

@interface CLSPendingOperations : NSObject {

	os_unfair_recursive_lock_s _lock;
	NSMutableArray* _operations;
	NSObject*<OS_os_log> _logType;

}
-(void)unlock;
-(void)addOperation:(id)arg1 ;
-(void)lock;
-(unsigned long long)count;
-(void)removeOperation:(id)arg1 ;
-(void)performOperation:(id)arg1 onOperationQueue:(id)arg2 withTimeOut:(double)arg3 ;
-(id)initWithLogType:(id)arg1 ;
@end

