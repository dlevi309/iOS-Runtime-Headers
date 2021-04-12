/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, AKAnisetteProvisioningController;

@interface VSVerificationDataOperation : VSAsyncOperation {

	VSOptional* _result;
	AKAnisetteProvisioningController* _provisioningController;

}

@property (retain) VSOptional * result;                                                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) AKAnisetteProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
-(id)init;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)_finishWithData:(id)arg1 ;
-(AKAnisetteProvisioningController *)provisioningController;
-(void)setProvisioningController:(AKAnisetteProvisioningController *)arg1 ;
-(void)executionDidBegin;
-(void)_finishWithResult:(int)arg1 bytes:(char*)arg2 length:(unsigned)arg3 ;
@end

