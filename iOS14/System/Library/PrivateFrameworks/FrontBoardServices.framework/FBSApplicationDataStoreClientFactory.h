/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)checkin;
-(id)init;
-(id)checkout;
-(void)setPrefetchedKeys:(NSArray *)arg1 ;
-(NSArray *)prefetchedKeys;
@end

