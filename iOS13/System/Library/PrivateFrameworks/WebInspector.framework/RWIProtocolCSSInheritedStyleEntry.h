/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * matchedCSSRules; 
@property (nonatomic,retain) RWIProtocolCSSStyle * inlineStyle; 
+(id)safe_initWithMatchedCSSRules:(id)arg1 ;
-(void)setMatchedCSSRules:(NSArray *)arg1 ;
-(id)initWithMatchedCSSRules:(id)arg1 ;
-(void)setInlineStyle:(RWIProtocolCSSStyle *)arg1 ;
-(RWIProtocolCSSStyle *)inlineStyle;
-(NSArray *)matchedCSSRules;
@end

