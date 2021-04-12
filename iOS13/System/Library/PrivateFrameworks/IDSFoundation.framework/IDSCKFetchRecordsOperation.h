/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@class NSArray;

@interface IDSCKFetchRecordsOperation : IDSCKDatabaseOperation {

	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	/*^block*/id _perRecordProgressBlock;
	/*^block*/id _perRecordCompletionBlock;
	/*^block*/id _fetchRecordsCompletionBlock;

}

@property (nonatomic,copy) NSArray * recordIDs;                         //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                       //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,copy) id perRecordProgressBlock;                   //@synthesize perRecordProgressBlock=_perRecordProgressBlock - In the implementation block
@property (nonatomic,copy) id perRecordCompletionBlock;                 //@synthesize perRecordCompletionBlock=_perRecordCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchRecordsCompletionBlock;              //@synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock - In the implementation block
+(id)alloc;
+(Class)__class;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(id)perRecordProgressBlock;
-(id)perRecordCompletionBlock;
-(id)fetchRecordsCompletionBlock;
@end

