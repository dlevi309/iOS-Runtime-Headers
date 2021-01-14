/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)description;
-(id)initWithNotificationName:(id)arg1 timeout:(double)arg2 ;
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

