/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (nonatomic,copy) NSString * frameId; 
@property (nonatomic,copy) NSString * sourceURL; 
@property (assign,nonatomic) long long origin; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL isInline; 
@property (assign,nonatomic) double startLine; 
@property (assign,nonatomic) double startColumn; 
+(id)safe_initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(BOOL)arg6 isInline:(BOOL)arg7 startLine:(double)arg8 startColumn:(double)arg9 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)origin;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setOrigin:(long long)arg1 ;
-(NSString *)sourceURL;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)isInline;
-(NSString *)styleSheetId;
-(double)startLine;
-(double)startColumn;
-(void)setFrameId:(NSString *)arg1 ;
-(void)setIsInline:(BOOL)arg1 ;
-(NSString *)frameId;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(void)setStartLine:(double)arg1 ;
-(void)setStartColumn:(double)arg1 ;
-(id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(BOOL)arg6 isInline:(BOOL)arg7 startLine:(double)arg8 startColumn:(double)arg9 ;
@end

