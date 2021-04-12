/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSArray, HDCodableObjectCollection;

@interface HDMedicalRecordsBatch : NSObject {

	NSArray* _medicalRecords;

}

@property (nonatomic,copy,readonly) NSArray * medicalRecords;                                  //@synthesize medicalRecords=_medicalRecords - In the implementation block
@property (nonatomic,copy,readonly) HDCodableObjectCollection * objectCollection; 
+(id)medicalRecordsBatchFromObjectCollection:(id)arg1 ;
-(NSArray *)medicalRecords;
-(HDCodableObjectCollection *)objectCollection;
-(id)initWithMedicalRecords:(id)arg1 ;
@end

