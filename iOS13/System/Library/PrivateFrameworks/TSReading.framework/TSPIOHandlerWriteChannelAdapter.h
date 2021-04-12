/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError, NSString;

@interface TSPIOHandlerWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

