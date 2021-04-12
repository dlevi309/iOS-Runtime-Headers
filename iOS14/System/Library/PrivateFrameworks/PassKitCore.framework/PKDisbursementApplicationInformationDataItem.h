/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem {

	PKDisbursementApplicationInformation* _applicationInformation;

}

@property (nonatomic,retain) PKDisbursementApplicationInformation * applicationInformation;              //@synthesize applicationInformation=_applicationInformation - In the implementation block
+(long long)dataType;
-(BOOL)isValidWithError:(id*)arg1 ;
-(PKDisbursementApplicationInformation *)applicationInformation;
-(void)setApplicationInformation:(PKDisbursementApplicationInformation *)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end

