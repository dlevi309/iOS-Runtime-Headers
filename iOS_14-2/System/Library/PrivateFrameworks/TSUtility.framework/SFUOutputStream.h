/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol SFUOutputStream <SFUSimpleOutputStream>
@required
-(void)close;
-(BOOL)canSeek;
-(long long)offset;
-(id)inputStream;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2;
-(BOOL)canCreateInputStream;

@end

