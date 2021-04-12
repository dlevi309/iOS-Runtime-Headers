/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/SFUInputStream.h>

@protocol SFUBufferedInputStream;
@class NSString;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream> {

	z_stream_s* mStream;
	long long mOffset;
	id<SFUBufferedInputStream> mInput;
	char* mOutBuffer;
	unsigned long long mOutBufferSize;
	BOOL mReachedEnd;
	BOOL mIsFromZip;
	unsigned long long mCalculatedCrc;
	unsigned long long mCheckCrc;

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
-(id)initWithInput:(id)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5 ;
-(void)setupInflateStream;
-(long long)totalCompressedBytesConsumed;
@end

