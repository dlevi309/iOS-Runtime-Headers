/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

