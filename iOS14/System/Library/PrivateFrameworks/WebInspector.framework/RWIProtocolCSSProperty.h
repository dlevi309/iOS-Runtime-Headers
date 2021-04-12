/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(RWIProtocolCSSSourceRange *)range;
-(void)setText:(NSString *)arg1 ;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)text;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(NSString *)value;
-(long long)status;
-(void)setParsedOk:(BOOL)arg1 ;
-(void)setImplicit:(BOOL)arg1 ;
-(BOOL)implicit;
-(BOOL)parsedOk;
@end

