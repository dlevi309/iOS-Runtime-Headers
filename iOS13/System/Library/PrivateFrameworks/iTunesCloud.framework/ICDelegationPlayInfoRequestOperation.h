/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICAsyncOperation.h>

@class ICDelegationPlayInfoRequest, ICStoreRequestContext;

@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation {

	ICDelegationPlayInfoRequestOperation* _strongSelf;
	ICDelegationPlayInfoRequest* _playInfoRequest;
	ICStoreRequestContext* _storeRequestContext;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICDelegationPlayInfoRequest * playInfoRequest;              //@synthesize playInfoRequest=_playInfoRequest - In the implementation block
@property (nonatomic,retain) ICStoreRequestContext * storeRequestContext;              //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
@property (nonatomic,copy) id responseHandler;                                         //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)_finishWithResult:(BOOL)arg1 tokens:(id)arg2 error:(id)arg3 ;
-(void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3 ;
-(ICDelegationPlayInfoRequest *)playInfoRequest;
-(void)setPlayInfoRequest:(ICDelegationPlayInfoRequest *)arg1 ;
@end

