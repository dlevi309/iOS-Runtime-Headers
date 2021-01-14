/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@protocol PFStream <NSObject,NSLocking>
@required
-(BOOL)openStream;
-(void)closeStream;
-(long long)streamLength;
-(long long)streamPosition;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(long long)arg1;
-(BOOL)advanceStream;
-(BOOL)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2;
-(id)getStreamError;
-(unsigned long long)preferredStreamBlockSize;

@end

