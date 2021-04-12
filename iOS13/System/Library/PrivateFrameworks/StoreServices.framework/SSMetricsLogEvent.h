/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (assign,nonatomic) unsigned long long logLevel; 
@property (nonatomic,retain) NSString * logSubsystem; 
@property (nonatomic,retain) NSString * message; 
+(unsigned long long)_logLevelFromString:(id)arg1 ;
+(id)_stringFromLogLevel:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(NSString *)logSubsystem;
-(void)setLogSubsystem:(NSString *)arg1 ;
@end

