/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSData, TRIFile;

@interface TRILevel : TRIPBMessage

@property (nonatomic,readonly) int levelOneOfCase; 
@property (assign,nonatomic) BOOL booleanValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) int intValue; 
@property (assign,nonatomic) long long longValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,copy) NSData * binaryValue; 
@property (nonatomic,retain) TRIFile * fileValue; 
+(id)descriptor;
-(id)object;
@end

