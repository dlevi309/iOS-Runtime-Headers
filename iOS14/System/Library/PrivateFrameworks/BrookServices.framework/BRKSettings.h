/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookServices.framework/BrookServices
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NPSManager, NPSDomainAccessor, NSSet, NRDevice, NSDate, NSString;

@interface BRKSettings : NSObject <MCProfileConnectionObserver> {

	NPSManager* _npsManager;
	BOOL _shouldObserveDefaultChanges;
	int _notifyToken;
	BOOL _currentMCDataCollectionValue;
	NPSDomainAccessor* _domainAccessor;
	NSSet* _observedKeys;
	NSSet* _dataCollectionKeys;
	NRDevice* _device;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,getter=areRemindersEnabled,nonatomic) BOOL remindersEnabled; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (getter=isBrookTentpoleEnabled,nonatomic,readonly) BOOL brookTentpoleEnabled; 
@property (assign,getter=isDataCollectionEnabled,nonatomic) BOOL dataCollectionEnabled; 
@property (getter=isDataCollectionOnboardingComplete,nonatomic,readonly) BOOL dataCollectionOnboardingComplete; 
@property (assign,getter=isOnboardingComplete,nonatomic) BOOL onboardingComplete; 
@property (getter=isStealthUIEnabled,nonatomic,readonly) BOOL stealthUIEnabled; 
@property (assign,nonatomic) double brookCoolDownInterval; 
@property (nonatomic,retain) NSDate * lastDataCollectionUploadDate; 
@property (assign,nonatomic) unsigned long long overrideDataCollectionAuthorization; 
@property (assign,getter=isDataCollectionUploadDisabled,nonatomic) BOOL dataCollectionUploadDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settingsForActiveDevice;
+(id)remindersSettingFooter;
+(id)remindersFooterExplanationSignificantLocationsUnavailable;
+(id)remindersFooterExplanationNoLocationOrMeCard;
+(id)remindersFooterLinkTitleContacts;
+(id)remindersFooterExplanationNoLocation;
+(id)remindersFooterExplanationInavlidLocationAuth;
+(id)remindersFooterLinkTitleLocation;
+(id)remindersFooterExplanationFormat;
+(id)settingsForDevice:(id)arg1 ;
+(id)_stringForConfigurationWithKey:(id)arg1 ;
+(id)settingsTitle;
+(id)timerSettingTitle;
+(id)timerSettingFooter;
+(id)remindersSettingTitle;
-(BOOL)isAvailable;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_valueForKey:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isDataCollectionEnabled;
-(void)setDataCollectionEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(unsigned long long)overrideDataCollectionAuthorization;
-(BOOL)isDataCollectionOnboardingComplete;
-(void)setRemindersEnabled:(BOOL)arg1 ;
-(void)_handleNPSNotification;
-(id)_initWithDevice:(id)arg1 ;
-(void)_BRKRegisterForBRKSettingsChange;
-(BOOL)_isManagedConfigurationDataCollectionEnabled;
-(void)_observeDefaultChanges:(BOOL)arg1 ;
-(void)_BRKCancelForBRKSettingsChange;
-(BOOL)isBrookTentpoleEnabled;
-(BOOL)areRemindersEnabled;
-(void)setOnboardingComplete:(BOOL)arg1 ;
-(BOOL)isOnboardingComplete;
-(BOOL)isStealthUIEnabled;
-(void)setBrookCoolDownInterval:(double)arg1 ;
-(double)brookCoolDownInterval;
-(NSDate *)lastDataCollectionUploadDate;
-(void)setLastDataCollectionUploadDate:(NSDate *)arg1 ;
-(void)setOverrideDataCollectionAuthorization:(unsigned long long)arg1 ;
-(BOOL)isDataCollectionUploadDisabled;
-(void)setDataCollectionUploadDisabled:(BOOL)arg1 ;
@end

