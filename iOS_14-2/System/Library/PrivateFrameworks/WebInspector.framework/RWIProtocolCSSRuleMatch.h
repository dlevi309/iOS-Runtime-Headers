/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolCSSRule, NSArray;

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolCSSRule * rule; 
@property (nonatomic,copy) NSArray * matchingSelectors; 
+(id)safe_initWithRule:(id)arg1 matchingSelectors:(id)arg2 ;
-(RWIProtocolCSSRule *)rule;
-(void)setRule:(RWIProtocolCSSRule *)arg1 ;
-(void)setMatchingSelectors:(NSArray *)arg1 ;
-(NSArray *)matchingSelectors;
-(id)initWithRule:(id)arg1 matchingSelectors:(id)arg2 ;
@end

