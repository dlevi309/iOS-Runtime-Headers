/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSArray * stackTrace; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) double lineNumber; 
@property (assign,nonatomic) int nodeId; 
+(id)safe_initWithType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(double)lineNumber;
-(int)nodeId;
-(void)setType:(long long)arg1 ;
-(NSString *)url;
-(void)setLineNumber:(double)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(long long)type;
-(void)setNodeId:(int)arg1 ;
-(void)setStackTrace:(NSArray *)arg1 ;
-(NSArray *)stackTrace;
@end

