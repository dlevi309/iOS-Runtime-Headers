/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol AUPBServing
@required
-(void)copyProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 intoReply:(/*^block*/id)arg3;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 value:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)getAudioUnit:(unsigned)arg1 propertyInfo:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5;
-(void)getAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5;
-(void)setAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(id)arg5 withReply:(/*^block*/id)arg6;
-(void)getAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5;
-(void)setAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(float)arg5 withReply:(/*^block*/id)arg6;

@end

