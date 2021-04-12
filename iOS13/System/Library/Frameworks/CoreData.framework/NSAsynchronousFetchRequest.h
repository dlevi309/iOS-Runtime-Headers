/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSPersistentStoreRequest.h>

@class NSFetchRequest;

@interface NSAsynchronousFetchRequest : NSPersistentStoreRequest {

	NSFetchRequest* _fetchRequest;
	id _requestCompletionBlock;
	long long _estimatedResultCount;

}

@property (readonly) NSFetchRequest * fetchRequest;                       //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (readonly) id completionBlock;                                  //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (assign,nonatomic) long long estimatedResultCount;              //@synthesize estimatedResultCount=_estimatedResultCount - In the implementation block
-(void)dealloc;
-(id)description;
-(id)completionBlock;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)requestType;
-(id)initWithFetchRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)estimatedResultCount;
-(void)setEstimatedResultCount:(long long)arg1 ;
@end

