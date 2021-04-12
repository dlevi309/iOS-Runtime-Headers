/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolCSSSelectorList, RWIProtocolCSSStyle, RWIProtocolCSSRuleId, NSString, NSArray;

@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolCSSSelectorList * selectorList; 
@property (assign,nonatomic) int sourceLine; 
@property (assign,nonatomic) long long origin; 
@property (nonatomic,retain) RWIProtocolCSSStyle * style; 
@property (nonatomic,retain) RWIProtocolCSSRuleId * ruleId; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (nonatomic,copy) NSArray * groupings; 
+(id)ik_cssRuleForRule:(id)arg1 withOrdinal:(int)arg2 forStyleSheetHeader:(id)arg3 forStyleMarkup:(id)arg4 withNewLineIndexSet:(id)arg5 ;
+(id)safe_initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4 ;
-(id)ik_ruleMatchForClassSelectors:(id)arg1 andIdSelector:(id)arg2 ;
-(RWIProtocolCSSStyle *)style;
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(long long)origin;
-(void)setOrigin:(long long)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(RWIProtocolCSSSelectorList *)selectorList;
-(void)setRuleId:(RWIProtocolCSSRuleId *)arg1 ;
-(void)setGroupings:(NSArray *)arg1 ;
-(void)setSelectorList:(RWIProtocolCSSSelectorList *)arg1 ;
-(RWIProtocolCSSRuleId *)ruleId;
-(NSArray *)groupings;
-(int)sourceLine;
-(void)setSourceLine:(int)arg1 ;
-(id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4 ;
@end

