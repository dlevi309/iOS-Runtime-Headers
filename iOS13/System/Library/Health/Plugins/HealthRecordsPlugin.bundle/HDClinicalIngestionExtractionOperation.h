/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@protocol OS_dispatch_queue;
@class HDFHIRResourceDocument, NSObject, NSNumber, NSError;

@interface HDClinicalIngestionExtractionOperation : HDClinicalIngestionPerAccountOperation {

	HDFHIRResourceDocument* _document;
	NSObject*<OS_dispatch_queue> _extractionResponseQueue;
	NSNumber* _batchSize;
	unsigned long long _countOfExtractedResources;
	unsigned long long _countOfExtractedClinicalRecords;
	unsigned long long _countOfExtractedMedicalRecords;
	unsigned long long _countOfInsertedMedicalRecords;
	unsigned long long _countOfUpdatedMedicalRecords;
	NSError* _extractionError;
	/*^block*/id _unitTest_didCompleteExtractionFromResource;

}

@property (assign,nonatomic) unsigned long long countOfExtractedResources;                    //@synthesize countOfExtractedResources=_countOfExtractedResources - In the implementation block
@property (assign,nonatomic) unsigned long long countOfExtractedClinicalRecords;              //@synthesize countOfExtractedClinicalRecords=_countOfExtractedClinicalRecords - In the implementation block
@property (assign,nonatomic) unsigned long long countOfExtractedMedicalRecords;               //@synthesize countOfExtractedMedicalRecords=_countOfExtractedMedicalRecords - In the implementation block
@property (assign,nonatomic) unsigned long long countOfInsertedMedicalRecords;                //@synthesize countOfInsertedMedicalRecords=_countOfInsertedMedicalRecords - In the implementation block
@property (assign,nonatomic) unsigned long long countOfUpdatedMedicalRecords;                 //@synthesize countOfUpdatedMedicalRecords=_countOfUpdatedMedicalRecords - In the implementation block
@property (nonatomic,retain) NSError * extractionError;                                       //@synthesize extractionError=_extractionError - In the implementation block
@property (nonatomic,copy) NSNumber * batchSize;                                              //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,copy) id unitTest_didCompleteExtractionFromResource;                     //@synthesize unitTest_didCompleteExtractionFromResource=_unitTest_didCompleteExtractionFromResource - In the implementation block
-(void)main;
-(NSNumber *)batchSize;
-(void)setBatchSize:(NSNumber *)arg1 ;
-(void)_cancelWithError:(id)arg1 ;
-(void)_setDocument:(id)arg1 ;
-(id)initWithTask:(id)arg1 account:(id)arg2 nextOperation:(id)arg3 ;
-(unsigned long long)countOfInsertedMedicalRecords;
-(unsigned long long)countOfExtractedResources;
-(NSError *)extractionError;
-(id)_extractionBatchWithRulesVersion:(id)arg1 error:(id*)arg2 ;
-(void)_didCompleteExtractionWithRequest:(id)arg1 result:(id)arg2 highestRowID:(id)arg3 extractionRulesVersion:(id)arg4 error:(id)arg5 ;
-(void)_lookupDisplayNameForExtractedItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCountOfExtractedResources:(unsigned long long)arg1 ;
-(BOOL)_processClinicalRecordsBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processMedicalRecordsBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateAccountLastExtractedRowID:(id)arg1 extractionRulesVersion:(id)arg2 error:(id*)arg3 ;
-(void)setCountOfExtractedClinicalRecords:(unsigned long long)arg1 ;
-(void)setCountOfExtractedMedicalRecords:(unsigned long long)arg1 ;
-(void)setExtractionError:(NSError *)arg1 ;
-(unsigned long long)countOfExtractedClinicalRecords;
-(unsigned long long)countOfExtractedMedicalRecords;
-(void)setCountOfInsertedMedicalRecords:(unsigned long long)arg1 ;
-(unsigned long long)countOfUpdatedMedicalRecords;
-(void)setCountOfUpdatedMedicalRecords:(unsigned long long)arg1 ;
-(id)unitTest_didCompleteExtractionFromResource;
-(void)setUnitTest_didCompleteExtractionFromResource:(id)arg1 ;
@end

