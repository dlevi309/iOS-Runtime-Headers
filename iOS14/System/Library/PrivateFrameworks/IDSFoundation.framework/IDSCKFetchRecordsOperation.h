/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPerRecordProgressBlock:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(id)perRecordProgressBlock;
-(NSArray *)recordIDs;
-(NSArray *)desiredKeys;
-(void)setPerRecordCompletionBlock:(id)arg1 ;
-(void)setFetchRecordsCompletionBlock:(id)arg1 ;
-(id)fetchRecordsCompletionBlock;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)perRecordCompletionBlock;
@end

