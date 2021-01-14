/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation {

	BOOL _secureDatabaseOnly;
	NSArray* _recordZoneIDsToDelete;
	/*^block*/id _deleteRecordZonesCompletionBlock;
	NSArray* _resultDeletedRecordZoneIDs;

}

@property (nonatomic,retain) NSArray * resultDeletedRecordZoneIDs;              //@synthesize resultDeletedRecordZoneIDs=_resultDeletedRecordZoneIDs - In the implementation block
@property (nonatomic,copy) NSArray * recordZoneIDsToDelete;                     //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL secureDatabaseOnly;                           //@synthesize secureDatabaseOnly=_secureDatabaseOnly - In the implementation block
@property (nonatomic,copy) id deleteRecordZonesCompletionBlock;                 //@synthesize deleteRecordZonesCompletionBlock=_deleteRecordZonesCompletionBlock - In the implementation block
-(NSArray *)recordZoneIDsToDelete;
-(BOOL)validateOperation;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(BOOL)secureDatabaseOnly;
-(void)setResultDeletedRecordZoneIDs:(NSArray *)arg1 ;
-(id)deleteRecordZonesCompletionBlock;
-(NSArray *)resultDeletedRecordZoneIDs;
-(void)setSecureDatabaseOnly:(BOOL)arg1 ;
-(void)setDeleteRecordZonesCompletionBlock:(id)arg1 ;
@end

