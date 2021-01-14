/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject

@property (assign,nonatomic) long long source; 
@property (assign,nonatomic) long long level; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) int line; 
@property (assign,nonatomic) int column; 
@property (assign,nonatomic) int repeatCount; 
@property (nonatomic,copy) NSArray * parameters; 
@property (nonatomic,copy) NSArray * stackTrace; 
@property (nonatomic,copy) NSString * networkRequestId; 
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(int)repeatCount;
-(void)setLine:(int)arg1 ;
-(void)setRepeatCount:(int)arg1 ;
-(int)column;
-(void)setText:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)url;
-(void)setSource:(long long)arg1 ;
-(long long)level;
-(NSString *)text;
-(void)setUrl:(NSString *)arg1 ;
-(long long)type;
-(void)setLevel:(long long)arg1 ;
-(int)line;
-(long long)source;
-(void)setColumn:(int)arg1 ;
-(id)initWithSource:(long long)arg1 level:(long long)arg2 text:(id)arg3 ;
-(void)setStackTrace:(NSArray *)arg1 ;
-(NSArray *)stackTrace;
-(void)setNetworkRequestId:(NSString *)arg1 ;
-(NSString *)networkRequestId;
@end

