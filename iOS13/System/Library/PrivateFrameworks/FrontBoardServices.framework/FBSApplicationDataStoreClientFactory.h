/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol OS_dispatch_queue, FBSApplicationDataStoreRepositoryClient;
@class NSObject, NSArray;

@interface FBSApplicationDataStoreClientFactory : NSObject {

	unsigned long long _count;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBSApplicationDataStoreRepositoryClient> _sharedClient;
	NSArray* _prefetchedKeys;

}

@property (nonatomic,retain) NSArray * prefetchedKeys;              //@synthesize prefetchedKeys=_prefetchedKeys - In the implementation block
+(id)sharedInstance;
+(BOOL)isServerProcess;
-(id)init;
-(id)checkout;
-(void)checkin;
-(NSArray *)prefetchedKeys;
-(void)setPrefetchedKeys:(NSArray *)arg1 ;
@end

