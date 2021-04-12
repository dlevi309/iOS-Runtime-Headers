/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/


@class ASReachabilityStatusCache, NSOperationQueue, NSString;

@interface ASReachabilityManager : NSObject {

	ASReachabilityStatusCache* _statusCache;
	NSOperationQueue* _queryOperationQueue;
	NSString* _serviceIdentifier;

}

@property (nonatomic,readonly) NSString * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
+(id)sharedInstanceForServiceIdentifier:(id)arg1 ;
-(id)init;
-(NSString *)serviceIdentifier;
-(id)_initWithServiceIdentifer:(id)arg1 ;
-(void)_addDestinationsToQuery:(id)arg1 updateHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)queryDestinations:(id)arg1 updateHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)numberOfScheduledQueries;
@end

