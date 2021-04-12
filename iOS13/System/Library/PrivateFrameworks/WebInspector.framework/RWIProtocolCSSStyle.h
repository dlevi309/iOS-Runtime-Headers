/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyleId, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSStyle : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * cssProperties; 
@property (nonatomic,copy) NSArray * shorthandEntries; 
@property (nonatomic,retain) RWIProtocolCSSStyleId * styleId; 
@property (nonatomic,copy) NSString * cssText; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
@property (nonatomic,copy) NSString * width; 
@property (nonatomic,copy) NSString * height; 
+(id)safe_initWithCssProperties:(id)arg1 shorthandEntries:(id)arg2 ;
+(id)ik_cssStyleFromDeclarationList:(id)arg1 forStyleMarkup:(id)arg2 withNewLineIndexSet:(id)arg3 existingStyle:(id)arg4 ;
-(RWIProtocolCSSSourceRange *)range;
-(NSString *)width;
-(NSString *)height;
-(void)setWidth:(NSString *)arg1 ;
-(void)setHeight:(NSString *)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(void)setCssText:(NSString *)arg1 ;
-(NSString *)cssText;
-(void)setCssProperties:(NSArray *)arg1 ;
-(RWIProtocolCSSStyleId *)styleId;
-(void)setStyleId:(RWIProtocolCSSStyleId *)arg1 ;
-(NSArray *)cssProperties;
-(void)setShorthandEntries:(NSArray *)arg1 ;
-(id)initWithCssProperties:(id)arg1 shorthandEntries:(id)arg2 ;
-(NSArray *)shorthandEntries;
@end

