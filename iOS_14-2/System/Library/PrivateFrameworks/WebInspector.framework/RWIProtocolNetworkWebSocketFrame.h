/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)opcode;
-(void)setMask:(BOOL)arg1 ;
-(NSString *)payloadData;
-(void)setPayloadData:(NSString *)arg1 ;
-(void)setOpcode:(double)arg1 ;
-(void)setPayloadLength:(double)arg1 ;
-(double)payloadLength;
-(id)initWithOpcode:(double)arg1 mask:(BOOL)arg2 payloadData:(id)arg3 payloadLength:(double)arg4 ;
@end

