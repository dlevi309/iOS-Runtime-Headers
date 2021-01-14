/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (assign,nonatomic) int ordinal; 
+(id)safe_initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
-(int)ordinal;
-(void)setOrdinal:(int)arg1 ;
-(NSString *)styleSheetId;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
@end

