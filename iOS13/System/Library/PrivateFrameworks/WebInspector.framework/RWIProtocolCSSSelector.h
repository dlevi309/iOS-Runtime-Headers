/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolCSSSelector : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * specificity; 
@property (assign,nonatomic) BOOL dynamic; 
+(id)safe_initWithText:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(BOOL)dynamic;
-(void)setSpecificity:(NSArray *)arg1 ;
-(NSArray *)specificity;
@end

