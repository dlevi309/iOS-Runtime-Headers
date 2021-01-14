/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSString;

@interface FMClient.ClientConfiguration : NSObject <NSSecureCoding> {

	 nearbyScanDuration;
	 nearbyScanEnabled;
	 nearbyScanWhileAuthenticated;
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
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)nearbyScanWhileAuthenticated;
-(double)nearbyScanDuration;
-(BOOL)nearbyScanEnabled;
-(NSDateComponents *)deviceNameSyncInterval;
-(BOOL)deviceNameSyncEnabled;
-(id)initWithNearbyScanDuration:(double)arg1 nearbyScanEnabled:(BOOL)arg2 nearbyScanWhileAuthenticated:(BOOL)arg3 deviceNameSyncInterval:(id)arg4 deviceNameSyncEnabled:(BOOL)arg5 ;
@end

