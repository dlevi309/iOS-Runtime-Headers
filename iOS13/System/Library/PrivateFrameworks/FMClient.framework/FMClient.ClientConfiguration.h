/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSString;

@interface FMClient.ClientConfiguration : NSObject <NSSecureCoding> {

	 nearbyScanDuration;
	 nearbyScanEnabled;
	 nearbyScanWhileAuthenticated;
	??? deviceNameSyncInterval;
	 deviceNameSyncEnabled;

}

@property (readonly,nonatomic) double nearbyScanDuration; 
@property (readonly,nonatomic) BOOL nearbyScanEnabled; 
@property (readonly,nonatomic) BOOL nearbyScanWhileAuthenticated; 
@property (readonly,nonatomic) NSDateComponents * deviceNameSyncInterval; 
@property (readonly,nonatomic) BOOL deviceNameSyncEnabled; 
@property (readonly,nonatomic) NSString * description; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)nearbyScanDuration;
-(BOOL)nearbyScanEnabled;
-(BOOL)nearbyScanWhileAuthenticated;
-(NSDateComponents *)deviceNameSyncInterval;
-(BOOL)deviceNameSyncEnabled;
-(id)initWithNearbyScanDuration:(double)arg1 nearbyScanEnabled:(BOOL)arg2 nearbyScanWhileAuthenticated:(BOOL)arg3 deviceNameSyncInterval:(id)arg4 deviceNameSyncEnabled:(BOOL)arg5 ;
@end

