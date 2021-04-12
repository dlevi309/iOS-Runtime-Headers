/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthRecordsPlugin/HDClinicalIngestionRetryPolicy.h>

@class NSArray, NSError;

@interface HDClinicalIngestionMutableRetryPolicy : HDClinicalIngestionRetryPolicy {

	BOOL requiresNetwork;
	NSArray* accountIdentifiers;
	NSError* underlyingError;
	long long retryInterval;

}

@property (nonatomic,copy) NSArray * accountIdentifiers; 
@property (nonatomic,copy) NSError * underlyingError; 
@property (assign,nonatomic) BOOL requiresNetwork; 
@property (assign,nonatomic) long long retryInterval; 
-(long long)retryInterval;
-(void)setAccountIdentifiers:(NSArray *)arg1 ;
-(void)setRequiresNetwork:(BOOL)arg1 ;
-(void)setUnderlyingError:(NSError *)arg1 ;
-(NSError *)underlyingError;
-(BOOL)requiresNetwork;
-(NSArray *)accountIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRetryInterval:(long long)arg1 ;
@end

