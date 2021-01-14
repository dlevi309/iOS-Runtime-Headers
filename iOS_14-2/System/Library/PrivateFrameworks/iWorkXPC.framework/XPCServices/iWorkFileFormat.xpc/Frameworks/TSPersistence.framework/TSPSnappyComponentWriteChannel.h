/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue, TSPComponentWriteChannel;
@class NSObject, NSString;

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _writeQueue;
	char _uncompressedBuffer[65536];
	unsigned long long _uncompressedLength;
	id<TSPComponentWriteChannel> _writeChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)writeBlock;
-(void)writeData:(id)arg1 ;
-(void)dealloc;
-(id)initWithWriteChannel:(id)arg1 ;
@end

