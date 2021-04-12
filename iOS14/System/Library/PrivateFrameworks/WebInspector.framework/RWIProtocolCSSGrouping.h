/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSGrouping : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * sourceURL; 
+(id)safe_initWithText:(id)arg1 type:(long long)arg2 ;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(void)setText:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)text;
-(long long)type;
-(id)initWithText:(id)arg1 type:(long long)arg2 ;
@end

