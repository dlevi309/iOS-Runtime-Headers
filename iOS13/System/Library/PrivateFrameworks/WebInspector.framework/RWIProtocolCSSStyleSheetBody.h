/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
-(NSString *)styleSheetId;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(id)initWithStyleSheetId:(id)arg1 rules:(id)arg2 ;
@end

