/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolCSSRule, NSArray;

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolCSSRule * rule; 
@property (nonatomic,copy) NSArray * matchingSelectors; 
+(id)safe_initWithRule:(id)arg1 matchingSelectors:(id)arg2 ;
-(RWIProtocolCSSRule *)rule;
-(void)setMatchingSelectors:(NSArray *)arg1 ;
-(NSArray *)matchingSelectors;
-(void)setRule:(RWIProtocolCSSRule *)arg1 ;
-(id)initWithRule:(id)arg1 matchingSelectors:(id)arg2 ;
@end

