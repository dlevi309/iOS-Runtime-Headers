/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <DoNotDisturb/DNDModeAssertionDetails.h>

@class NSDate, NSString, DNDModeAssertionLifetime;

@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails

@property (nonatomic,copy) NSDate * userVisibleEndDate; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * modeIdentifier; 
@property (nonatomic,copy) DNDModeAssertionLifetime * lifetime; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLifetime:(DNDModeAssertionLifetime *)arg1 ;
-(void)setModeIdentifier:(NSString *)arg1 ;
-(void)setUserVisibleEndDate:(NSDate *)arg1 ;
@end

