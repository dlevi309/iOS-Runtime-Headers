/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)completionBlock;
-(NSFetchRequest *)fetchRequest;
-(unsigned long long)requestType;
-(void)setEstimatedResultCount:(long long)arg1 ;
-(id)description;
-(long long)estimatedResultCount;
-(id)initWithFetchRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

