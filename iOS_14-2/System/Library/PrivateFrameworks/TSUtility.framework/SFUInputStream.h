/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol SFUInputStream <NSObject>
@required
-(void)close;
-(BOOL)canSeek;
-(long long)offset;
-(void)seekToOffset:(long long)arg1;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;

@end

