/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordZonesToSave;
	/*^block*/id _saveRecordZonesCompletionBlock;
	NSArray* _resultSavedRecordZones;

}

@property (nonatomic,retain) NSArray * resultSavedRecordZones;              //@synthesize resultSavedRecordZones=_resultSavedRecordZones - In the implementation block
@property (nonatomic,copy) NSArray * recordZonesToSave;                     //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,copy) id saveRecordZonesCompletionBlock;               //@synthesize saveRecordZonesCompletionBlock=_saveRecordZonesCompletionBlock - In the implementation block
-(BOOL)validateOperation;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(NSArray *)recordZonesToSave;
-(void)setSaveRecordZonesCompletionBlock:(id)arg1 ;
-(void)setResultSavedRecordZones:(NSArray *)arg1 ;
-(id)saveRecordZonesCompletionBlock;
-(NSArray *)resultSavedRecordZones;
@end

