/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class NSString;

@interface OISFUZipDeflateOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mOutputStream;
	z_stream_s* mDeflateStream;
	char* mOutBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(BOOL)canSeek;
-(long long)offset;
-(id)inputStream;
-(id)initWithOutputStream:(id)arg1 ;
-(void)dealloc;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
@end

