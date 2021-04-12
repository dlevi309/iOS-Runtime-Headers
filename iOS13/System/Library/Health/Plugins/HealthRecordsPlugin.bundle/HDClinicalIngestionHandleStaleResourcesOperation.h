/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(void)_cancelWithError:(id)arg1 ;
-(NSError *)operationError;
-(BOOL)_ensureHasIngestStartDate;
-(BOOL)_ensureProtectedDataAvailable;
-(BOOL)_addExtractionHintToStaleResources;
-(id)initWithTask:(id)arg1 account:(id)arg2 ingestStartDate:(id)arg3 nextOperation:(id)arg4 ;
-(NSDate *)ingestStartDate;
-(NSNumber *)numberOfAffectedResources;
@end

