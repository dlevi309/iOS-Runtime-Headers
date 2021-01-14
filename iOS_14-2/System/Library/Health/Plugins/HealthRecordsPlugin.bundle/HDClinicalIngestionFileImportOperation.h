/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class NSData, NSError;

@interface HDClinicalIngestionFileImportOperation : HDClinicalIngestionPerAccountOperation {

	NSData* _documentData;
	NSError* _ingestionError;

}

@property (nonatomic,copy) NSData * documentData;                 //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,copy) NSError * ingestionError;              //@synthesize ingestionError=_ingestionError - In the implementation block
-(void)main;
-(NSData *)documentData;
-(void)_cancelWithError:(id)arg1 ;
-(void)setDocumentData:(NSData *)arg1 ;
-(void)setIngestionError:(NSError *)arg1 ;
-(NSError *)ingestionError;
@end

