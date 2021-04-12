/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRequiresNetwork:(BOOL)arg1 ;
-(void)setUnderlyingError:(NSError *)arg1 ;
-(NSError *)underlyingError;
-(BOOL)requiresNetwork;
-(NSArray *)accountIdentifiers;
-(long long)retryInterval;
-(void)setRetryInterval:(long long)arg1 ;
-(void)setAccountIdentifiers:(NSArray *)arg1 ;
@end

