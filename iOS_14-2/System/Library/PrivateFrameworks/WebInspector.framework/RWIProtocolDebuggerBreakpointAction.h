/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * data; 
@property (assign,nonatomic) int identifier; 
-(id)initWithType:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setData:(NSString *)arg1 ;
-(NSString *)data;
-(long long)type;
-(void)setIdentifier:(int)arg1 ;
-(int)identifier;
@end

