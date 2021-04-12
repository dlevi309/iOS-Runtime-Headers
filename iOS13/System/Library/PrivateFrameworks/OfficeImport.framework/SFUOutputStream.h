/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol SFUOutputStream <SFUSimpleOutputStream>
@required
-(void)close;
-(long long)offset;
-(id)inputStream;
-(BOOL)canSeek;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2;
-(BOOL)canCreateInputStream;

@end

