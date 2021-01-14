/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDTaskScheduler.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ASDDispatchQueue : NSObject <ASDTaskScheduler> {

	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultQueue;
-(id)initWithQueue:(id)arg1 ;
-(id)init;
-(void)scheduleBlock:(/*^block*/id)arg1 ;
-(void)syncUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)asyncUsingBlock:(/*^block*/id)arg1 ;
-(void)assertQueue;
@end

