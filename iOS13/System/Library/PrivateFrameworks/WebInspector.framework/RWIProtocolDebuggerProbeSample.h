/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setPayload:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)payload;
-(void)setProbeId:(int)arg1 ;
-(int)probeId;
-(void)setSampleId:(int)arg1 ;
-(void)setBatchId:(int)arg1 ;
-(id)initWithProbeId:(int)arg1 sampleId:(int)arg2 batchId:(int)arg3 timestamp:(double)arg4 payload:(id)arg5 ;
-(int)sampleId;
-(int)batchId;
@end

