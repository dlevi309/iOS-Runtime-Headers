/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCOperationRetrySignal.h>

@protocol OS_dispatch_group, NSObject;
@class NSObject, NSString;

@interface FCOperationNotificationRetrySignal : NSObject <FCOperationRetrySignal> {

	NSObject*<OS_dispatch_group> _group;
	unsigned long long _timeoutTime;
	id<NSObject> _notificationObserver;
	NSString* _notificationName;
	double _timeout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
-(id)initWithNotificationName:(id)arg1 timeout:(double)arg2 ;
@end

