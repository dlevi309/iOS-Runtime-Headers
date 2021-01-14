/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setRequest:(VSStoreRequest *)arg1 ;
-(VSStoreRequest *)request;
-(VSOptional *)result;
-(void)cancel;
-(BOOL)_isFirstToFinish;
-(void)setStoreServicesRequest:(SSRequest *)arg1 ;
-(SSRequest *)storeServicesRequest;
@end

