/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSObject;

@interface OITSUWidthLimitedQueue : NSObject {

	int mReaderCount;
	int mLimit;
	NSObject*<OS_dispatch_queue> mManagerQueue;
	NSObject*<OS_dispatch_queue> mTargetQueue;
	os_unfair_lock_s mUnfairLock;

}
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)targetDispatchQueue;
@end

