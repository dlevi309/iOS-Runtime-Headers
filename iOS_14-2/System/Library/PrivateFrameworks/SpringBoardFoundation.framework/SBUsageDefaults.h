/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clearUsageDefaults;
-(void)_bindAndRegisterDefaults;
@end

