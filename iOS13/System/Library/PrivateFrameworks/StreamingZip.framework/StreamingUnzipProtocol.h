/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
*/


@protocol StreamingUnzipProtocol
@required
-(void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char*)arg2 options:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)supplyBytes:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)suspendStreamWithReply:(/*^block*/id)arg1;
-(void)finishStreamWithReply:(/*^block*/id)arg1;
-(void)terminateStreamWithReply:(/*^block*/id)arg1;
-(void)setActiveDelegateMethods:(int)arg1;

@end

