/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSSceneAction.h>
#import <libobjc.A.dylib/FBSSceneSnapshotRequestDelegate.h>

@class NSMutableArray, FBSSceneSnapshotRequestHandle, BSSettings, NSString;

@interface FBSSceneSnapshotAction : FBSSceneAction <FBSSceneSnapshotRequestDelegate> {

	NSMutableArray* _requests;
	/*^block*/id _requestHandler;
	/*^block*/id _completionHandler;
	FBSSceneSnapshotRequestHandle* _outgoingRequestHandle;
	int _expired;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy) id requestHandler;                            //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (getter=isExpired,readonly) BOOL expired; 
@property (nonatomic,readonly) double expirationInterval; 
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_remainsActionable;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_executeNextRequest;
-(id)requestHandler;
-(id)initWithRequests:(id)arg1 expirationInterval:(double)arg2 responseHandler:(/*^block*/id)arg3 ;
-(double)expirationInterval;
-(void)setRequestHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setExpired:(BOOL)arg1 ;
-(void)_finishAllRequests;
-(BSSettings *)clientExtendedData;
-(void)executeRequestsWithHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 expirationHandler:(/*^block*/id)arg3 ;
-(BOOL)snapshotRequestAllowSnapshot:(id)arg1 ;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(BOOL)snapshotRequest:(id)arg1 performWithContext:(id)arg2 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)isExpired;
-(Class)fallbackXPCEncodableClass;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
@end

