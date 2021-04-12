/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeight:(NSString *)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(NSString *)width;
-(RWIProtocolCSSSourceRange *)range;
-(void)setWidth:(NSString *)arg1 ;
-(NSString *)height;
-(void)setCssText:(NSString *)arg1 ;
-(NSString *)cssText;
-(RWIProtocolCSSStyleId *)styleId;
-(void)setCssProperties:(NSArray *)arg1 ;
-(void)setStyleId:(RWIProtocolCSSStyleId *)arg1 ;
-(NSArray *)cssProperties;
-(void)setShorthandEntries:(NSArray *)arg1 ;
-(id)initWithCssProperties:(id)arg1 shorthandEntries:(id)arg2 ;
-(NSArray *)shorthandEntries;
@end

