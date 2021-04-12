/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * data; 
@property (assign,nonatomic) int identifier; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)data;
-(int)identifier;
-(void)setData:(NSString *)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(id)initWithType:(long long)arg1 ;
@end

