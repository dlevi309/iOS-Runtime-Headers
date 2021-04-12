/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) TRIFile * directoryValue; 
+(id)descriptor;
-(id)object;
-(id)fileOrDirectoryLevelWithIsDir:(BOOL*)arg1 ;
@end

