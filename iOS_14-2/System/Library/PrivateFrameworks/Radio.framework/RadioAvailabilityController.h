/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)hasLoadedRadioAvailability;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)init;
-(id)_userDefaultsDomain;
-(void)_currentStoreFrontIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_calculateRadioRestricted;
-(void)getRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isRadioAvailable;
-(void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg1 error:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_reloadRadioBagAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_reloadRadioRestriction;
-(void)_updateRadioAvailabilityAllowingNotifications:(BOOL)arg1 ;
-(id)_currentStoreFrontIdentifier;
-(void)dealloc;
@end

