/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCacheCoordinatorLocking.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface FCCacheCoordinatorGCDSerialLock : NSObject <FCCacheCoordinatorLocking> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(void)performReadSync:(/*^block*/id)arg1 ;
@end

