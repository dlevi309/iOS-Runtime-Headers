/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHInsertChangeRequest <PHChangeRequest>
@property (readonly) BOOL isNewRequest; 
@property (nonatomic,readonly) id concurrentWorkBlock; 
@required
+(BOOL)canGenerateUUIDWithoutEntitlements;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
-(void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
-(void)finalizeRequestWithBatchSuccess:(BOOL)arg1;
-(BOOL)isNewRequest;
-(id)concurrentWorkBlock;

@end

