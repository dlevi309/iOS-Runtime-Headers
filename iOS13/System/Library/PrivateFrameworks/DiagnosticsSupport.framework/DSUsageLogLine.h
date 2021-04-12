/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isReset;
-(BOOL)isOnPower;
-(NSString *)eventType;
-(int)batteryLevel;
-(int)usageTime;
-(int)standbyTime;
-(BOOL)isOffPower;
@end

