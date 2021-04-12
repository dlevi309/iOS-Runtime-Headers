/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@protocol SFUInputBundle <NSObject>
@required
-(BOOL)hasEntryWithName:(id)arg1;
-(id)inputStreamForEntry:(id)arg1;
-(id)bufferedInputStreamForEntry:(id)arg1;
-(long long)lengthOfEntry:(id)arg1;
-(unsigned)crc32ForEntry:(id)arg1;
-(void)copyEntry:(id)arg1 toFile:(id)arg2;

@end

