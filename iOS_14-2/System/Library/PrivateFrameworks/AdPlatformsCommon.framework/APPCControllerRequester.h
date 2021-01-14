/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/APControllerReqestCoordinatorDelegate.h>

@class NSError, NSMutableDictionary, APUnfairLock, NSUUID, APControllerRequesterCoordinator, NSString;

@interface APPCControllerRequester : NSObject <APControllerReqestCoordinatorDelegate> {

	BOOL _invalid;
	/*^block*/id _newPromotedContentsDeliveryBlock;
	NSError* _lastError;
	NSMutableDictionary* _requestCompletionBlockByRequestID;
	APUnfairLock* _lock;
	NSUUID* _requesterID;
	APControllerRequesterCoordinator* _requestCoordinator;

}

@property (assign,nonatomic) BOOL invalid;                                                         //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                                  //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestCompletionBlockByRequestID;              //@synthesize requestCompletionBlockByRequestID=_requestCompletionBlockByRequestID - In the implementation block
@property (nonatomic,retain) APUnfairLock * lock;                                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) id newPromotedContentsDeliveryBlock;                                    //@synthesize newPromotedContentsDeliveryBlock=_newPromotedContentsDeliveryBlock - In the implementation block
@property (nonatomic,retain) NSUUID * requesterID;                                                 //@synthesize requesterID=_requesterID - In the implementation block
@property (nonatomic,retain) APControllerRequesterCoordinator * requestCoordinator;                //@synthesize requestCoordinator=_requestCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyURL;
+(void)proxyURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSError *)lastError;
-(BOOL)invalid;
-(APUnfairLock *)lock;
-(void)setLock:(APUnfairLock *)arg1 ;
-(void)setInvalid:(BOOL)arg1 ;
-(NSUUID *)requesterID;
-(void)setLastError:(NSError *)arg1 ;
-(void)contentResponses:(id)arg1 ;
-(void)connectionSevered;
-(APControllerRequesterCoordinator *)requestCoordinator;
-(NSMutableDictionary *)requestCompletionBlockByRequestID;
-(void)handleCompletionOfRequest:(id)arg1 ;
-(void)_invalidateAndfulfillAllRequestsWithError:(id)arg1 ;
-(id)newPromotedContentsDeliveryBlock;
-(id)initWithDeliveryBlock:(/*^block*/id)arg1 ;
-(void)requestPromotedContentOfTypes:(id)arg1 forContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)endRequests;
-(void)setNewPromotedContentsDeliveryBlock:(id)arg1 ;
-(void)setRequestCompletionBlockByRequestID:(NSMutableDictionary *)arg1 ;
-(void)setRequesterID:(NSUUID *)arg1 ;
-(void)setRequestCoordinator:(APControllerRequesterCoordinator *)arg1 ;
@end

