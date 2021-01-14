/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@class NSString;

@interface OISFUMoveableFileOutputStream : NSObject <SFUOutputStream> {

	int mFd;
	NSString* mPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flush;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)canSeek;
-(id)path;
-(long long)offset;
-(BOOL)moveToPath:(id)arg1 ;
-(id)inputStream;
-(void)dealloc;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithTemporaryFile:(id)arg1 ;
-(void)truncateToLength:(long long)arg1 ;
@end

