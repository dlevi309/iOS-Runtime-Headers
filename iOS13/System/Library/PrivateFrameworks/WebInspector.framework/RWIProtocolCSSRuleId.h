/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSRuleId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (assign,nonatomic) int ordinal; 
+(id)safe_initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
-(int)ordinal;
-(void)setOrdinal:(int)arg1 ;
-(NSString *)styleSheetId;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
@end

