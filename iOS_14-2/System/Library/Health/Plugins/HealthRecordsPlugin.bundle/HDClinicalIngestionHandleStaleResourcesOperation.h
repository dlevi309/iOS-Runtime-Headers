/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class NSDate, NSNumber, NSError;

@interface HDClinicalIngestionHandleStaleResourcesOperation : HDClinicalIngestionPerAccountOperation {

	os_unfair_lock_s _ivarLock;
	NSDate* _ingestStartDate;
	NSNumber* _numberOfAffectedResources;
	NSError* _operationError;

}

@property (nonatomic,copy,readonly) NSDate * ingestStartDate;                          //@synthesize ingestStartDate=_ingestStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfAffectedResources;              //@synthesize numberOfAffectedResources=_numberOfAffectedResources - In the implementation block
@property (nonatomic,copy,readonly) NSError * operationError;                          //@synthesize operationError=_operationError - In the implementation block
-(NSError *)operationError;
-(void)main;
-(void)_cancelWithError:(id)arg1 ;
-(BOOL)_ensureHasIngestStartDate;
-(BOOL)_ensureProtectedDataAvailable;
-(BOOL)_addExtractionHintToStaleResources;
-(id)initWithTask:(id)arg1 account:(id)arg2 ingestStartDate:(id)arg3 nextOperation:(id)arg4 ;
-(NSDate *)ingestStartDate;
-(NSNumber *)numberOfAffectedResources;
@end

