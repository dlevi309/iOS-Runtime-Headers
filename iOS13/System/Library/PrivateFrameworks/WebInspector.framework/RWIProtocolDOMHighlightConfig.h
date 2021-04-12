/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setBorderColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)borderColor;
-(void)setContentColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)contentColor;
-(RWIProtocolDOMRGBAColor *)paddingColor;
-(RWIProtocolDOMRGBAColor *)marginColor;
-(BOOL)showInfo;
-(void)setShowInfo:(BOOL)arg1 ;
-(void)setPaddingColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(void)setMarginColor:(RWIProtocolDOMRGBAColor *)arg1 ;
@end

