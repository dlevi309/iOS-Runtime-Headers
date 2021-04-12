/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DSUsageLogLine : DSLogLine

@property (nonatomic,readonly) NSString * eventType; 
@property (nonatomic,readonly) int usageTime; 
@property (nonatomic,readonly) int standbyTime; 
@property (nonatomic,readonly) int batteryLevel; 
@property (nonatomic,readonly) BOOL isReset; 
@property (nonatomic,readonly) BOOL isOnPower; 
@property (nonatomic,readonly) BOOL isOffPower; 
-(NSString *)eventType;
-(int)batteryLevel;
-(int)usageTime;
-(BOOL)isReset;
-(int)standbyTime;
-(BOOL)isOnPower;
-(BOOL)isOffPower;
@end

