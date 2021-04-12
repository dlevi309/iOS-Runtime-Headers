/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLifetime:(DNDModeAssertionLifetime *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserVisibleEndDate:(NSDate *)arg1 ;
-(void)setModeIdentifier:(NSString *)arg1 ;
@end

