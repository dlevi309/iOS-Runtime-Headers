/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBStruct, TRIPBListValue;

@interface TRIPBValue : TRIPBMessage

@property (nonatomic,readonly) int kindOneOfCase; 
@property (assign,nonatomic) int nullValue; 
@property (assign,nonatomic) double numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) TRIPBStruct * structValue; 
@property (nonatomic,retain) TRIPBListValue * listValue; 
+(id)descriptor;
@end

