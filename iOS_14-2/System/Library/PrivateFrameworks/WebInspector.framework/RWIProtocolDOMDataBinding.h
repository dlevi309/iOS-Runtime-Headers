/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * binding; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * type; 
+(id)safe_initWithBinding:(id)arg1 value:(id)arg2 ;
-(NSString *)binding;
-(void)setType:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)value;
-(void)setBinding:(NSString *)arg1 ;
-(id)initWithBinding:(id)arg1 value:(id)arg2 ;
@end

