/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL showInfo; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * contentColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * paddingColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * borderColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * marginColor; 
-(RWIProtocolDOMRGBAColor *)contentColor;
-(RWIProtocolDOMRGBAColor *)borderColor;
-(void)setContentColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(void)setBorderColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)paddingColor;
-(RWIProtocolDOMRGBAColor *)marginColor;
-(BOOL)showInfo;
-(void)setShowInfo:(BOOL)arg1 ;
-(void)setPaddingColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(void)setMarginColor:(RWIProtocolDOMRGBAColor *)arg1 ;
@end

