/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class IKCSSRuleList, NSIndexSet, NSString, NSArray;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (setter=ik_setRuleList:,nonatomic,retain) IKCSSRuleList * ik_ruleList; 
@property (setter=ik_setTextNewLineIndexSet:,nonatomic,retain) NSIndexSet * ik_textNewLineIndexSet; 
@property (nonatomic,copy) NSString * styleSheetId; 
@property (nonatomic,copy) NSArray * rules; 
@property (nonatomic,copy) NSString * text; 
+(id)safe_initWithStyleSheetId:(id)arg1 rules:(id)arg2 ;
+(id)ik_stylesheetBodyFromRuleList:(id)arg1 forStyleMarkup:(id)arg2 withHeader:(id)arg3 ;
-(void)ik_setTextNewLineIndexSet:(id)arg1 ;
-(void)ik_setRuleList:(id)arg1 ;
-(IKCSSRuleList *)ik_ruleList;
-(NSIndexSet *)ik_textNewLineIndexSet;
-(void)setText:(NSString *)arg1 ;
-(void)setRules:(NSArray *)arg1 ;
-(NSString *)text;
-(NSArray *)rules;
-(NSString *)styleSheetId;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(id)initWithStyleSheetId:(id)arg1 rules:(id)arg2 ;
@end

