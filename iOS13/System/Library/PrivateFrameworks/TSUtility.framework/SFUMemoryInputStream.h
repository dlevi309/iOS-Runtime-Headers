/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/SFUBufferedInputStream.h>

@class NSData, NSString;

@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream> {

	NSData* mData;
	const char* mStart;
	const char* mCurrent;
	const char* mEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)close;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
-(id)initWithData:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
@end

