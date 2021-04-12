/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class HDReferenceExtractionResult, NSError, NSArray;

@interface HDClinicalIngestionExtractReferencesOperation : HDClinicalIngestionPerAccountOperation {

	HDReferenceExtractionResult* _extractionResult;
	NSError* _resolutionError;
	NSArray* _FHIRResourceData;
	NSArray* _sourceResourceObjects;

}

@property (nonatomic,copy,readonly) NSArray * FHIRResourceData;                         //@synthesize FHIRResourceData=_FHIRResourceData - In the implementation block
@property (nonatomic,copy) NSArray * sourceResourceObjects;                             //@synthesize sourceResourceObjects=_sourceResourceObjects - In the implementation block
@property (nonatomic,copy) HDReferenceExtractionResult * extractionResult;              //@synthesize extractionResult=_extractionResult - In the implementation block
@property (nonatomic,copy) NSError * resolutionError;                                   //@synthesize resolutionError=_resolutionError - In the implementation block
-(void)main;
-(NSArray *)FHIRResourceData;
-(id)initWithTask:(id)arg1 account:(id)arg2 resourceData:(id)arg3 sourceResourceObjects:(id)arg4 nextOperation:(id)arg5 ;
-(HDReferenceExtractionResult *)extractionResult;
-(NSError *)resolutionError;
-(void)setExtractionResult:(HDReferenceExtractionResult *)arg1 ;
-(void)setResolutionError:(NSError *)arg1 ;
-(NSArray *)sourceResourceObjects;
-(void)setSourceResourceObjects:(NSArray *)arg1 ;
@end

