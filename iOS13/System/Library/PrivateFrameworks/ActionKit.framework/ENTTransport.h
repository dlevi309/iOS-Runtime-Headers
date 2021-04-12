/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol ENTTransport <NSObject>
@required
-(void)cancel;
-(void)flush;
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3;

@end

