/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray;

@interface TRIPBMethod : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * requestTypeURL; 
@property (assign,nonatomic) BOOL requestStreaming; 
@property (nonatomic,copy) NSString * responseTypeURL; 
@property (assign,nonatomic) BOOL responseStreaming; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end

