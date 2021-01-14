/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <AdPlatformsCommon/APXPCActionRequester.h>
#import <libobjc.A.dylib/APPCControllerClientInterface.h>

@class NSMutableDictionary, APUnfairRecursiveLock;

@interface APControllerRequesterCoordinator : APXPCActionRequester <APPCControllerClientInterface> {

	NSMutableDictionary* _requestDelegates;
	APUnfairRecursiveLock* _lock;

}

@property (nonatomic,retain) NSMutableDictionary * requestDelegates;              //@synthesize requestDelegates=_requestDelegates - In the implementation block
@property (nonatomic,retain) APUnfairRecursiveLock * lock;                        //@synthesize lock=_lock - In the implementation block
+(id)machService;
+(BOOL)canShareConnection;
+(id)requestCoordinator;
-(void)connectionInvalidated;
-(id)init;
-(id)exportedObject;
-(id)remoteObjectInterface;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(APUnfairRecursiveLock *)lock;
-(void)setLock:(APUnfairRecursiveLock *)arg1 ;
-(id)proxyURL;
-(void)proxyURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)extendCollectionClassesForExportedInterface:(id)arg1 ;
-(void)_addDelegate:(id)arg1 withID:(id)arg2 ;
-(NSMutableDictionary *)requestDelegates;
-(void)contentResponses:(id)arg1 requester:(id)arg2 ;
-(void)requestPromotedContentOfTypes:(id)arg1 forRequester:(id)arg2 forContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)finishedWithRequestsForID:(id)arg1 ;
-(void)setRequestDelegates:(NSMutableDictionary *)arg1 ;
@end

