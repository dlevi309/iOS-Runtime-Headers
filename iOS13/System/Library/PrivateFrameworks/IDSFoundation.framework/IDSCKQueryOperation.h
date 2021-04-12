/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKQueryOperation : IDSCKDatabaseOperation {

	/*^block*/id _recordFetchedBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id recordFetchedBlock;              //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
@property (copy) id completionBlock;                           //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)alloc;
+(Class)__class;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(id)recordFetchedBlock;
@end

