/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_cancelWithError:(id)arg1 ;
-(NSData *)documentData;
-(void)setDocumentData:(NSData *)arg1 ;
-(void)setIngestionError:(NSError *)arg1 ;
-(NSError *)ingestionError;
@end

