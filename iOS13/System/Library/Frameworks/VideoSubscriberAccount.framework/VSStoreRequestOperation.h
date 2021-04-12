/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSStoreRequest, VSOptional, SSRequest;

@interface VSStoreRequestOperation : VSAsyncOperation {

	int _requestCompletionFlag;
	VSStoreRequest* _request;
	VSOptional* _result;
	SSRequest* _storeServicesRequest;

}

@property (nonatomic,retain) VSOptional * result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) SSRequest * storeServicesRequest;              //@synthesize storeServicesRequest=_storeServicesRequest - In the implementation block
@property (nonatomic,copy) VSStoreRequest * request;                        //@synthesize request=_request - In the implementation block
-(id)init;
-(void)cancel;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setRequest:(VSStoreRequest *)arg1 ;
-(VSStoreRequest *)request;
-(void)executionDidBegin;
-(BOOL)_isFirstToFinish;
-(void)setStoreServicesRequest:(SSRequest *)arg1 ;
-(SSRequest *)storeServicesRequest;
@end

