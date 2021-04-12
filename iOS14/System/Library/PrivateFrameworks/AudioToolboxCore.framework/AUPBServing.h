/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
*/


@protocol AUPBServing
@required
-(void)getAudioUnit:(unsigned)arg1 propertyInfo:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5;
-(void)getAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 value:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)setAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(float)arg5 withReply:(/*^block*/id)arg6;
-(void)getAudioUnit:(unsigned)arg1 parameter:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 inReply:(/*^block*/id)arg5;
-(void)setAudioUnit:(unsigned)arg1 property:(unsigned)arg2 onScope:(unsigned)arg3 element:(unsigned)arg4 value:(id)arg5 withReply:(/*^block*/id)arg6;
-(void)copyProcessingBlock:(unsigned)arg1 property:(unsigned)arg2 intoReply:(/*^block*/id)arg3;

@end

