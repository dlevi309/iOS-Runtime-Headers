/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse {

	PKPaymentPassAction* _updatedAction;

}

@property (nonatomic,retain) PKPaymentPassAction * updatedAction;              //@synthesize updatedAction=_updatedAction - In the implementation block
-(id)initWithExistingAction:(id)arg1 data:(id)arg2 ;
-(PKPaymentPassAction *)updatedAction;
-(void)setUpdatedAction:(PKPaymentPassAction *)arg1 ;
@end

