/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem {

	PKDisbursementApplicationInformation* _applicationInformation;

}

@property (nonatomic,retain) PKDisbursementApplicationInformation * applicationInformation;              //@synthesize applicationInformation=_applicationInformation - In the implementation block
+(long long)dataType;
-(id)initWithModel:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
-(PKDisbursementApplicationInformation *)applicationInformation;
-(void)setApplicationInformation:(PKDisbursementApplicationInformation *)arg1 ;
@end

