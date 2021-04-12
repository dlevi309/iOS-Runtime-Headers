/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class SKUIClientContext, NSOperationQueue, SSVLoadURLOperation, NSURL;

@interface SKUIGiftValidator : NSObject {

	SKUIClientContext* _clientContext;
	NSOperationQueue* _operationQueue;
	long long _validationCount;
	SSVLoadURLOperation* _validationOperation;
	NSURL* _validationURL;

}

@property (getter=isValidating,nonatomic,readonly) BOOL validating; 
@property (nonatomic,retain) NSOperationQueue * operationQueue;                  //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)isValidating;
-(void)cancelValidation;
-(id)initWithValidationURL:(id)arg1 clientContext:(id)arg2 ;
-(void)validateGift:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_validateWithBodyDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 attemptNumber:(long long)arg3 block:(/*^block*/id)arg4 ;
-(void)validateDonation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

