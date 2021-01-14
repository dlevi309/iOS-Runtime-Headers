/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray, TRIPBSourceContext;

@interface TRIPBApi : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSMutableArray * methodsArray; 
@property (nonatomic,readonly) unsigned long long methodsArray_Count; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,copy) NSString * version; 
@property (nonatomic,retain) TRIPBSourceContext * sourceContext; 
@property (assign,nonatomic) BOOL hasSourceContext; 
@property (nonatomic,retain) NSMutableArray * mixinsArray; 
@property (nonatomic,readonly) unsigned long long mixinsArray_Count; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end

