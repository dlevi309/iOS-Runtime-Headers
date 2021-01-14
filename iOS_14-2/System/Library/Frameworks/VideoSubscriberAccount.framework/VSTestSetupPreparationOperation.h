/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSArray, NSOperationQueue;

@interface VSTestSetupPreparationOperation : VSAsyncOperation {

	NSArray* _errors;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) NSArray * errors;                             //@synthesize errors=_errors - In the implementation block
-(void)executionDidBegin;
-(id)init;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(NSArray *)errors;
-(void)setErrors:(NSArray *)arg1 ;
-(void)addError:(id)arg1 ;
@end

