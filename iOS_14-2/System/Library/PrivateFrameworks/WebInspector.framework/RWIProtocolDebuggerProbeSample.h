/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerProbeSample : RWIProtocolJSONObject

@property (assign,nonatomic) int probeId; 
@property (assign,nonatomic) int sampleId; 
@property (assign,nonatomic) int batchId; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * payload; 
-(void)setPayload:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(double)timestamp;
-(RWIProtocolRuntimeRemoteObject *)payload;
-(int)probeId;
-(void)setTimestamp:(double)arg1 ;
-(void)setProbeId:(int)arg1 ;
-(void)setSampleId:(int)arg1 ;
-(void)setBatchId:(int)arg1 ;
-(id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5 ;
-(int)sampleId;
-(int)batchId;
@end

