/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (assign,nonatomic) double opcode; 
@property (assign,nonatomic) BOOL mask; 
@property (nonatomic,copy) NSString * payloadData; 
@property (assign,nonatomic) double payloadLength; 
+(id)safe_initWithOpcode:(double)arg1 mask:(BOOL)arg2 payloadData:(id)arg3 payloadLength:(double)arg4 ;
-(BOOL)mask;
-(void)setMask:(BOOL)arg1 ;
-(void)setPayloadData:(NSString *)arg1 ;
-(NSString *)payloadData;
-(double)payloadLength;
-(void)setPayloadLength:(double)arg1 ;
-(void)setOpcode:(double)arg1 ;
-(id)initWithOpcode:(double)arg1 mask:(BOOL)arg2 payloadData:(id)arg3 payloadLength:(double)arg4 ;
-(double)opcode;
@end

