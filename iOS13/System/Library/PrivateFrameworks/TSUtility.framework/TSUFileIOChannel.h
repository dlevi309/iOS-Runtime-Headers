/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUReadChannel.h>
#import <TSUtility/TSUStreamReadChannel.h>
#import <TSUtility/TSUStreamWriteChannel.h>
#import <TSUtility/TSURandomWriteChannel.h>

@protocol OS_dispatch_io;
@class NSObject, NSString;

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel> {

	NSObject*<OS_dispatch_io> _channel;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(id)initForReadingURL:(id)arg1 ;
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initForStreamWritingURL:(id)arg1 ;
-(void)writeData:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initForRandomWritingURL:(id)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithType:(unsigned long long)arg1 URL:(id)arg2 oflag:(int)arg3 mode:(unsigned short)arg4 ;
-(id)initWithType:(unsigned long long)arg1 channel:(id)arg2 ;
-(id)createRandomAccessChannel;
@end
