/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)init;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)targetDispatchQueue;
@end

