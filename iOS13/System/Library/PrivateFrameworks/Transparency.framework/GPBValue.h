/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/GPBMessage.h>

@class NSString, GPBStruct, GPBListValue;

@interface GPBValue : GPBMessage

@property (nonatomic,readonly) int kindOneOfCase; 
@property (assign,nonatomic) int nullValue; 
@property (assign,nonatomic) double numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) GPBStruct * structValue; 
@property (nonatomic,retain) GPBListValue * listValue; 
+(id)descriptor;
@end

