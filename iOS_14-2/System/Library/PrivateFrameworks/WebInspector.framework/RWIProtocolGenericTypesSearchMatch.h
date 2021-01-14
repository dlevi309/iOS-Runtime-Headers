/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

