/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (assign,nonatomic) double lineNumber; 
@property (nonatomic,copy) NSString * lineContent; 
-(double)lineNumber;
-(void)setLineNumber:(double)arg1 ;
-(void)setLineContent:(NSString *)arg1 ;
-(id)initWithLineNumber:(double)arg1 lineContent:(id)arg2 ;
-(NSString *)lineContent;
@end

