/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
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
-(void)close;
-(BOOL)canSeek;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(id)initWithInput:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(void)setupInflateStream;
-(id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5 ;
-(long long)totalCompressedBytesConsumed;
@end

