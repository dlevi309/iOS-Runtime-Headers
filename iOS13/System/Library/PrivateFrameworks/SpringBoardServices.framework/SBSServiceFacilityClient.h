/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSServiceFacilityClient : FBSServiceFacilityClient {

	long long _numberOfCheckOuts;

}
+(id)serviceFacilityIdentifier;
+(id)checkOutClientWithClass:(Class)arg1 ;
+(void)checkInClient:(id)arg1 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)_incrementCheckout;
-(BOOL)_decrementCheckout;
@end

