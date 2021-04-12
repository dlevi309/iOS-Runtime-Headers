/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSArray;

@interface HDClinicalRecordsBatch : NSObject {

	NSArray* _clinicalRecords;
	NSArray* _obsoleteResourceIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * clinicalRecords;                          //@synthesize clinicalRecords=_clinicalRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * obsoleteResourceIdentifiers;              //@synthesize obsoleteResourceIdentifiers=_obsoleteResourceIdentifiers - In the implementation block
-(NSArray *)clinicalRecords;
-(id)initWithClinicalRecords:(id)arg1 obsoleteResourceIdentifiers:(id)arg2 ;
-(NSArray *)obsoleteResourceIdentifiers;
@end

