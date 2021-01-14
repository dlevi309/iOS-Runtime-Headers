/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(RWIProtocolCSSSourceRange *)range;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSArray *)selectors;
-(void)setSelectors:(NSArray *)arg1 ;
-(id)initWithSelectors:(id)arg1 text:(id)arg2 ;
@end

