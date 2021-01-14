/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

