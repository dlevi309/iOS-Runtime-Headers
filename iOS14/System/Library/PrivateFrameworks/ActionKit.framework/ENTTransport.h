/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol ENTTransport <NSObject>
@required
-(void)flush;
-(void)cancel;
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3;

@end

