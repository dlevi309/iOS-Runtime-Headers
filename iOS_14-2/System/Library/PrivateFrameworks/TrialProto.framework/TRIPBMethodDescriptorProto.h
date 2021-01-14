/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,copy) NSString * inputType; 
@property (assign,nonatomic) BOOL hasInputType; 
@property (nonatomic,copy) NSString * outputType; 
@property (assign,nonatomic) BOOL hasOutputType; 
@property (nonatomic,retain) TRIPBMethodOptions * options; 
@property (assign,nonatomic) BOOL hasOptions; 
@property (assign,nonatomic) BOOL clientStreaming; 
@property (assign,nonatomic) BOOL hasClientStreaming; 
@property (assign,nonatomic) BOOL serverStreaming; 
@property (assign,nonatomic) BOOL hasServerStreaming; 
+(id)descriptor;
@end

