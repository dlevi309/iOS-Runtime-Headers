/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebserviceInstallmentBindResponse : PKAccountWebServiceResponse {

	NSString* _bindToken;

}

@property (nonatomic,copy,readonly) NSString * bindToken;              //@synthesize bindToken=_bindToken - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)bindToken;
@end

