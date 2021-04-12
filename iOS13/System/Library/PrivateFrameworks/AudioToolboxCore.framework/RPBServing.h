/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol RPBServing
@required
-(void)getProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 intoReply:(/*^block*/id)arg3;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 inData:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)getRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 property:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 inReply:(/*^block*/id)arg6;
-(void)setRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 property:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 inData:(id)arg6 withReply:(/*^block*/id)arg7;
-(void)getRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 parameter:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 inReply:(/*^block*/id)arg6;
-(void)setRPBItem:(unsigned)arg1 rpbID:(unsigned)arg2 parameter:(unsigned)arg3 onScope:(unsigned)arg4 element:(unsigned)arg5 value:(float)arg6 withReply:(/*^block*/id)arg7;

@end

