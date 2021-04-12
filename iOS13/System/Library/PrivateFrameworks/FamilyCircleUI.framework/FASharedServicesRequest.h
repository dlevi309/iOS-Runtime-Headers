/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AARequest.h>

@class FARequestConfigurator, ACAccount;

@interface FASharedServicesRequest : AARequest {

	FARequestConfigurator* _requestConfigurator;
	ACAccount* _appleAccount;

}
+(Class)responseClass;
-(id)urlRequest;
-(id)initWithAppleAccount:(id)arg1 urlString:(id)arg2 ;
@end

