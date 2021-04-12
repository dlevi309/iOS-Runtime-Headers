/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol PFOStream <NSObject,PFStream>
@required
-(BOOL)reserveLength:(long long)arg1;
-(BOOL)writeStream:(const char*)arg1 length:(unsigned long long)arg2 written:(unsigned long long*)arg3;
-(BOOL)writeStream:(id)arg1;
-(BOOL)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;
-(BOOL)truncateLength:(long long)arg1;

@end

