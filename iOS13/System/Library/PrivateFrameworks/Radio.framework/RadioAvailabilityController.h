/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSString;

@interface RadioAvailabilityController : NSObject <ICEnvironmentMonitorObserver, MCProfileConnectionObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutSerialQueue;
	NSObject*<OS_dispatch_queue> _restrictionLoadQueue;
	BOOL _hasSuccessfullyLoadedURLBag;
	BOOL _isRadioAvailable;
	NSNumber* _isRadioAvailableFromBag;
	BOOL _isRadioRestricted;
	NSNumber* _lastActiveAccountUniqueIdentifier;

}

@property (nonatomic,readonly) BOOL hasLoadedRadioAvailability; 
@property (getter=isRadioAvailable,nonatomic,readonly) BOOL radioAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)isRadioAvailable;
-(void)getRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)hasLoadedRadioAvailability;
-(id)_currentStoreFrontIdentifier;
-(id)_userDefaultsDomain;
-(BOOL)_calculateRadioRestricted;
-(void)_updateRadioAvailabilityAllowingNotifications:(BOOL)arg1 ;
-(void)_reloadRadioBagAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reloadRadioRestriction;
-(void)_currentStoreFrontIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

