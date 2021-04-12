/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMAccountController.h>

@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {

	NSMutableDictionary* _simulatedAccountsPerService;

}
-(id)init;
-(id)activeAccounts;
-(id)activeIMessageAccount;
-(void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2 ;
-(id)activeSMSAccount;
@end
