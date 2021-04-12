/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUFileIOChannel, NSError, NSString;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _queue;
	TSUFileIOChannel* _channel;
	/*^block*/id _handler;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_close;
-(void)close;
-(void)setError:(id)arg1 ;
-(void)writeData:(id)arg1 ;
-(id)initWithChannel:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

