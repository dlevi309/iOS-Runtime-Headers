/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSString, NSMutableArray, GPBSourceContext;

@interface GPBEnum : GPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSMutableArray * enumvalueArray; 
@property (nonatomic,readonly) unsigned long long enumvalueArray_Count; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,retain) GPBSourceContext * sourceContext; 
@property (assign,nonatomic) BOOL hasSourceContext; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end

