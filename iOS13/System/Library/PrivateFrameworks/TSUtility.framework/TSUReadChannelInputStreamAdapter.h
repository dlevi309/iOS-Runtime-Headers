/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@protocol TSUReadChannel, TSUStreamReadChannel, OS_dispatch_data, OS_dispatch_queue;
@class NSObject, NSString;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {

	id<TSUReadChannel> _readChannel;
	id<TSUStreamReadChannel> _streamReadChannel;
	NSObject*<OS_dispatch_data> _leftoverData;
	NSObject*<OS_dispatch_queue> _readQueue;
	long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(id)initWithReadChannel:(id)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)_initWithReadChannel:(id)arg1 streamReadChannel:(id)arg2 ;
-(id)initWithStreamReadChannel:(id)arg1 ;
@end

