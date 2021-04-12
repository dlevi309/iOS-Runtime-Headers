/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)activeSMSAccount;
-(void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2 ;
@end

