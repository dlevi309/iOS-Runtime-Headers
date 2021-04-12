/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/SFUOutputStream.h>

@protocol SFUOutputStream;
@class NSString;

@interface OISFUOffsetOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mOutputStream;
	long long mInitialOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(long long)offset;
-(id)initWithOutputStream:(id)arg1 ;
-(id)inputStream;
-(BOOL)canSeek;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(BOOL)canCreateInputStream;
@end

