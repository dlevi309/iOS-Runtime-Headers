/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ICStoreRequestContext *)storeRequestContext;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)_finishWithResult:(BOOL)arg1 tokens:(id)arg2 error:(id)arg3 ;
-(void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3 ;
-(ICDelegationPlayInfoRequest *)playInfoRequest;
-(void)setPlayInfoRequest:(ICDelegationPlayInfoRequest *)arg1 ;
@end

