/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHInsertChangeRequest <PHUpdateChangeRequest>
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@required
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(BOOL)shouldPerformConcurrentWork;
-(void)setShouldPerformConcurrentWork:(BOOL)arg1;
-(BOOL)isNewRequest;
-(void)performConcurrentWork;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
-(id)initForNewObject;

@end

