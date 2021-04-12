/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <libobjc.A.dylib/BUInputStream.h>

@protocol BUReadChannel, OS_dispatch_data;
@class NSObject, NSString;

@interface BUReadChannelInputStreamAdapter : NSObject <BUInputStream> {

	id<BUReadChannel> _readChannel;
	NSObject*<OS_dispatch_data> _leftoverData;
	long long _offset;

}

@property (nonatomic,retain) id<BUReadChannel> readChannel;                         //@synthesize readChannel=_readChannel - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_data> leftoverData;              //@synthesize leftoverData=_leftoverData - In the implementation block
@property (assign,nonatomic) long long offset;                                      //@synthesize offset=_offset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(void)setOffset:(long long)arg1 ;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(id)initWithReadChannel:(id)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id<BUReadChannel>)readChannel;
-(void)setLeftoverData:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSObject*<OS_dispatch_data>)leftoverData;
-(void)setReadChannel:(id<BUReadChannel>)arg1 ;
@end

