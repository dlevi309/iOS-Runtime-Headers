/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol _CDContext;
@class _CDContextualChangeRegistration;

@interface SUCSScheduler : NSObject {

	id<_CDContext> _context;
	_CDContextualChangeRegistration* _registration;

}
+(int)_batteryLevel;
+(id)batteryLevelPredicate:(id)arg1 ;
+(id)phoneCallPredicate:(BOOL)arg1 ;
+(id)networkPredicate:(BOOL)arg1 ;
+(id)carplayPredicate:(BOOL)arg1 ;
+(int)_getIntForKeyPath:(id)arg1 ;
+(BOOL)_getBoolForKeyPath:(id)arg1 ;
+(BOOL)_callInProgress;
+(BOOL)_hasNetworkConnection;
-(id)init;
-(void)dealloc;
-(void)unregisterInstallationAlertAction;
-(void)registerInstallAlertConditionsWithHandler:(/*^block*/id)arg1 ;
@end

