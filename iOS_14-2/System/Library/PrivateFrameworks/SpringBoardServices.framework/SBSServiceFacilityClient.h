/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSServiceFacilityClient : FBSServiceFacilityClient {

	long long _numberOfCheckOuts;

}
+(void)checkInClient:(id)arg1 ;
+(id)checkOutClientWithClass:(Class)arg1 ;
+(id)serviceFacilityIdentifier;
-(id)initWithCalloutQueue:(id)arg1 ;
-(BOOL)_decrementCheckout;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)_incrementCheckout;
@end

