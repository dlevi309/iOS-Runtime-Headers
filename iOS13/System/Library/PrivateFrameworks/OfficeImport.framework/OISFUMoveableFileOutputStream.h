/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)close;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(long long)offset;
-(void)flush;
-(id)inputStream;
-(BOOL)canSeek;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
-(id)initWithTemporaryFile:(id)arg1 ;
-(BOOL)moveToPath:(id)arg1 ;
-(void)truncateToLength:(long long)arg1 ;
@end

