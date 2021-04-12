/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSNumber;

@interface SBUsageDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSNumber * standbyTime; 
@property (nonatomic,retain) NSNumber * batteryUsageTime; 
@property (assign,nonatomic) BOOL hasChargedPartially; 
-(void)setHasChargedPartially:(BOOL)arg1 ;
-(BOOL)hasChargedPartially;
-(void)setBatteryUsageTime:(NSNumber *)arg1 ;
-(NSNumber *)batteryUsageTime;
-(void)setStandbyTime:(NSNumber *)arg1 ;
-(NSNumber *)standbyTime;
-(void)_bindAndRegisterDefaults;
-(void)clearUsageDefaults;
@end

