/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSError *)operationError;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setOperationError:(NSError *)arg1 ;
-(NSProgress *)progress;
-(BOOL)_isCancelled;
-(id)requestCompletionBlock;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)_cancelProgress;
-(id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3 ;
-(void)cancel;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(void)dealloc;
@end

