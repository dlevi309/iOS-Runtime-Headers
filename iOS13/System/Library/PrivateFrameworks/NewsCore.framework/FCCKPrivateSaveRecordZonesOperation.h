/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)recordZonesToSave;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)performOperation;
-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setSaveRecordZonesCompletionBlock:(id)arg1 ;
-(void)setResultSavedRecordZones:(NSArray *)arg1 ;
-(id)saveRecordZonesCompletionBlock;
-(NSArray *)resultSavedRecordZones;
@end

