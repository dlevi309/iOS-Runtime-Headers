/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/OISFUBufferedInputStream.h>

@protocol OISFUBufferedInputStream <SFUInputStream>
@required
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2;
-(BOOL)seekWithinBufferToOffset:(long long)arg1;

@end


@protocol SFUInputStream;
@class NSString;

@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream> {

	id<SFUInputStream> mStream;
	char* mBuffer;
	unsigned long long mBufferSize;
	long long mBufferOffset;
	long long mBufferStart;
	long long mBufferEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(id)initWithStream:(id)arg1 ;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
-(id)initWithStream:(id)arg1 dataLength:(long long)arg2 ;
@end

