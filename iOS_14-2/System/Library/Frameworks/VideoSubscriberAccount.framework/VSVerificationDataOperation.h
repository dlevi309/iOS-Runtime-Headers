/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)_finishWithError:(id)arg1 ;
-(AKAnisetteProvisioningController *)provisioningController;
-(void)_finishWithData:(id)arg1 ;
-(VSOptional *)result;
-(void)setProvisioningController:(AKAnisetteProvisioningController *)arg1 ;
-(void)_finishWithResult:(int)arg1 bytes:(char*)arg2 length:(unsigned)arg3 ;
@end

