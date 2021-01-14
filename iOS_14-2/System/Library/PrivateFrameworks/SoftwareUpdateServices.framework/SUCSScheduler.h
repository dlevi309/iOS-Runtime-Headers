/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol _CDContext;
@class _CDContextualChangeRegistration;

@interface SUCSScheduler : NSObject {

	id<_CDContext> _context;
	_CDContextualChangeRegistration* _registration;

}
+(int)_batteryLevel;
+(BOOL)_callInProgress;
+(id)networkPredicate:(BOOL)arg1 ;
+(id)phoneCallPredicate:(BOOL)arg1 ;
+(id)carplayPredicate:(BOOL)arg1 ;
+(id)batteryLevelPredicate:(id)arg1 ;
+(int)_getIntForKeyPath:(id)arg1 ;
+(BOOL)_getBoolForKeyPath:(id)arg1 ;
+(BOOL)_hasNetworkConnection;
-(id)init;
-(void)dealloc;
-(void)unregisterInstallationAlertAction;
-(void)registerInstallAlertConditionsWithHandler:(/*^block*/id)arg1 ;
@end

