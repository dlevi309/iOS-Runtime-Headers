/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * binding; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * type; 
+(id)safe_initWithBinding:(id)arg1 value:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)binding;
-(void)setBinding:(NSString *)arg1 ;
-(id)initWithBinding:(id)arg1 value:(id)arg2 ;
@end

