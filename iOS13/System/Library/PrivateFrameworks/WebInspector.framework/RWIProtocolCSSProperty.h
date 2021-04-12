/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSProperty : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * priority; 
@property (assign,nonatomic) BOOL implicit; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL parsedOk; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
+(id)safe_initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)status;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)priority;
-(RWIProtocolCSSSourceRange *)range;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(void)setParsedOk:(BOOL)arg1 ;
-(void)setImplicit:(BOOL)arg1 ;
-(BOOL)implicit;
-(BOOL)parsedOk;
@end

