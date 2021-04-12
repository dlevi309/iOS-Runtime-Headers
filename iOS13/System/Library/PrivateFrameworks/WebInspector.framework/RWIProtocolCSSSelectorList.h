/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSSelectorList : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * selectors; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
+(id)safe_initWithSelectors:(id)arg1 text:(id)arg2 ;
+(id)ik_cssSelectorListFromSelectorList:(id)arg1 forStyleMarkup:(id)arg2 withNewLineIndexSet:(id)arg3 ;
-(RWIProtocolCSSSourceRange *)range;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(NSArray *)selectors;
-(void)setSelectors:(NSArray *)arg1 ;
-(id)initWithSelectors:(id)arg1 text:(id)arg2 ;
@end

