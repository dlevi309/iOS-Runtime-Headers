/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * specificity; 
@property (assign,nonatomic) BOOL dynamic; 
+(id)safe_initWithText:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setDynamic:(BOOL)arg1 ;
-(BOOL)dynamic;
-(void)setSpecificity:(NSArray *)arg1 ;
-(NSArray *)specificity;
@end

