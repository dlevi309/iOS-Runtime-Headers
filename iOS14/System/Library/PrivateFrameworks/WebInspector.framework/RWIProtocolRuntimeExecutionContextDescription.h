/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (assign,nonatomic) int identifier; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * frameId; 
-(void)setType:(long long)arg1 ;
-(NSString *)name;
-(long long)type;
-(NSString *)frameId;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(int)identifier;
-(void)setFrameId:(NSString *)arg1 ;
-(id)initWithIdentifier:(int)arg1 type:(long long)arg2 name:(id)arg3 frameId:(id)arg4 ;
@end

