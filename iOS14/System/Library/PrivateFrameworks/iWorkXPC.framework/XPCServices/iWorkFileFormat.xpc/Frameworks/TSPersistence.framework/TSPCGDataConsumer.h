/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol OS_dispatch_queue, TSUStreamWriteChannel;
#import <TSPersistence/TSPersistence-Structs.h>
@class NSObject, NSError;

@interface TSPCGDataConsumer : NSObject {

	NSObject*<OS_dispatch_queue> _writeQueue;
	id<TSUStreamWriteChannel> _writeChannel;
	NSError* _error;

}
+(CGDataConsumerRef)newCGDataConsumerForWriteChannel:(id)arg1 ;
-(void)_close;
-(id)init;
-(void)close;
-(id)initWithWriteChannel:(id)arg1 ;
-(unsigned long long)putBytes:(const void*)arg1 count:(unsigned long long)arg2 ;
@end

