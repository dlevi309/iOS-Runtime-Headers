/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSArray, HDCodableObjectCollection;

@interface HDClinicalRecordsBatch : NSObject {

	NSArray* _clinicalRecords;
	NSArray* _obsoleteResourceIdentifiers;

}

@property (nonatomic,copy,readonly) NSArray * clinicalRecords;                                                          //@synthesize clinicalRecords=_clinicalRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * obsoleteResourceIdentifiers;                                              //@synthesize obsoleteResourceIdentifiers=_obsoleteResourceIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) HDCodableObjectCollection * objectCollectionContainingClinicalRecords; 
+(id)clinicalRecordsBatchFromObjectCollection:(id)arg1 obsoleteResourceIdentifiers:(id)arg2 ;
-(NSArray *)clinicalRecords;
-(id)initWithClinicalRecords:(id)arg1 obsoleteResourceIdentifiers:(id)arg2 ;
-(HDCodableObjectCollection *)objectCollectionContainingClinicalRecords;
-(NSArray *)obsoleteResourceIdentifiers;
@end

