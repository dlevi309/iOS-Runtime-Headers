/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreResult.h>

@class NSProgress, NSError, NSManagedObjectContext;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {

	NSProgress* _requestProgress;
	NSError* _requestError;
	NSManagedObjectContext* _requestContext;
	id _requestCompletionBlock;
	int _flags;

}

@property (retain) NSProgress * progress;                                        //@synthesize requestProgress=_requestProgress - In the implementation block
@property (retain) NSError * operationError;                                     //@synthesize requestError=_requestError - In the implementation block
@property (copy) id requestCompletionBlock;                                      //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(void)dealloc;
-(void)cancel;
-(NSProgress *)progress;
-(id)requestCompletionBlock;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(BOOL)_isCancelled;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setProgress:(NSProgress *)arg1 ;
-(id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3 ;
-(void)_cancelProgress;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
@end

