/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)init;
-(NSString *)logSubsystem;
-(void)setLogSubsystem:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)logLevel;
-(void)setLogLevel:(unsigned long long)arg1 ;
@end

