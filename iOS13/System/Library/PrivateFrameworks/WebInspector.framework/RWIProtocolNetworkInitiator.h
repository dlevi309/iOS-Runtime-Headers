/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSString *)url;
-(double)lineNumber;
-(id)initWithType:(long long)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(int)nodeId;
-(void)setLineNumber:(double)arg1 ;
-(void)setNodeId:(int)arg1 ;
-(void)setStackTrace:(NSArray *)arg1 ;
-(NSArray *)stackTrace;
@end

