/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(RWIProtocolCSSStyle *)style;
-(id)initWithName:(id)arg1 style:(id)arg2 ;
@end

