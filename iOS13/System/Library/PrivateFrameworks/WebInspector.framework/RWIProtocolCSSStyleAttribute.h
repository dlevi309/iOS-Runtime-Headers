/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSStyle;

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolCSSStyle * style; 
+(id)safe_initWithName:(id)arg1 style:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(RWIProtocolCSSStyle *)style;
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(id)initWithName:(id)arg1 style:(id)arg2 ;
@end

