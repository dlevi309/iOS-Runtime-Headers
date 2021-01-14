/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSUStreamWriteChannel.h>

@protocol OS_dispatch_queue;
@class TSUZipFileWriter, NSObject, NSString;

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {

	TSUZipFileWriter* _archiveWriter;
	NSObject*<OS_dispatch_queue> _writerQueue;
	BOOL _isClosed;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)flushWithCompletion:(/*^block*/id)arg1 ;
-(void)close;
-(BOOL)isValid;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initWithArchiveWriter:(id)arg1 ;
@end

