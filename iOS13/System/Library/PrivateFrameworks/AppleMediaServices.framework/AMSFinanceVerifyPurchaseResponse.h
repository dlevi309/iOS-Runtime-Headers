/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSFinanceDialogResponse.h>

@class NSDictionary, AMSURLTaskInfo;

@interface AMSFinanceVerifyPurchaseResponse : AMSFinanceDialogResponse {

	NSDictionary* _responseDictionary;
	AMSURLTaskInfo* _taskInfo;
	long long _verifyType;

}

@property (nonatomic,retain) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) AMSURLTaskInfo * taskInfo;                      //@synthesize taskInfo=_taskInfo - In the implementation block
@property (assign,nonatomic) long long verifyType;                           //@synthesize verifyType=_verifyType - In the implementation block
+(BOOL)isVerifyPurchasePayload:(id)arg1 ;
+(long long)_verifyTypeFromPayload:(id)arg1 ;
+(id)_dialogRequestForCVVFromPayload:(id)arg1 verifyType:(long long)arg2 ;
+(id)_dialogRequestForCarrierFromPayload:(id)arg1 verifyType:(long long)arg2 ;
-(NSDictionary *)responseDictionary;
-(AMSURLTaskInfo *)taskInfo;
-(id)performWithTaskInfo:(id)arg1 ;
-(void)setTaskInfo:(AMSURLTaskInfo *)arg1 ;
-(id)initWithPayload:(id)arg1 taskInfo:(id)arg2 ;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(long long)verifyType;
-(id)_handleCVVDialogResult:(id)arg1 shouldReattempt:(BOOL*)arg2 ;
-(id)_handleCarrierDialogResult:(id)arg1 shouldReattempt:(BOOL*)arg2 ;
-(id)_runCarrierNewCodeWithError:(id*)arg1 ;
-(id)_runCarrierVerifyCode:(id)arg1 error:(id*)arg2 ;
-(id)_runCVVRequestForCode:(id)arg1 error:(id*)arg2 ;
-(void)setVerifyType:(long long)arg1 ;
@end

