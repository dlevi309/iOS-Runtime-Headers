/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>

@protocol CDPDBackupRecoveryResultsParser, CDPDBackupRecoveryErrorProvider;
@class NSArray;

@interface CDPDBackupInfoRecoveryFlowController : CDPDRecoveryFlowController {

	id<CDPDBackupRecoveryResultsParser> _resultParser;
	id<CDPDBackupRecoveryErrorProvider> _errorProvider;
	NSArray* _recoveryRecords;

}

@property (nonatomic,retain) NSArray * recoveryRecords;                                      //@synthesize recoveryRecords=_recoveryRecords - In the implementation block
@property (nonatomic,retain) id<CDPDBackupRecoveryResultsParser> resultParser;               //@synthesize resultParser=_resultParser - In the implementation block
@property (nonatomic,retain) id<CDPDBackupRecoveryErrorProvider> errorProvider;              //@synthesize errorProvider=_errorProvider - In the implementation block
-(id<CDPDBackupRecoveryErrorProvider>)errorProvider;
-(void)retrieveInflatedDevices:(/*^block*/id)arg1 ;
-(BOOL)secretValidator:(id)arg1 shouldContinueValidationAfterError:(id)arg2 ;
-(void)secretValidator:(id)arg1 didFailRecoveryWithErrors:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<CDPDBackupRecoveryResultsParser>)resultParser;
-(id)_recoveryListFromDevices:(id)arg1 ;
-(void)setRecoveryRecords:(NSArray *)arg1 ;
-(void)_updateRecordRecoveryStatusForRecordDictionary:(id)arg1 ;
-(void)beginRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)setResultParser:(id<CDPDBackupRecoveryResultsParser>)arg1 ;
-(void)setErrorProvider:(id<CDPDBackupRecoveryErrorProvider>)arg1 ;
-(NSArray *)recoveryRecords;
@end

