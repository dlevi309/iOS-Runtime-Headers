/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class NSMutableDictionary, NSString;

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate> {

	BOOL _isListeningToIDSServiceAvailability;
	BOOL _isListeningToIDSQueryController;
	NSMutableDictionary* _destinationStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCapabilitiesManager;
+(void)_setDefaultCapabilitiesManager:(id)arg1 ;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(BOOL)isSensitiveUIAllowed;
-(BOOL)hasCellularTelephonyCapability;
-(BOOL)hasCellularTelephonyHardwareCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)hasSMSCapability;
-(BOOL)hasForceTouchCapability;
-(BOOL)hasSiriCapability;
-(BOOL)hasCameraCapability;
-(BOOL)isEmailConfigured;
-(BOOL)isMMSConfigured;
-(BOOL)isMadridConfigured;
-(BOOL)isConferencingAvailable;
-(BOOL)isConferencingEverGonnaBeAvailable;
-(BOOL)hasPreviouslyConferencedWithID:(id)arg1 ;
-(id)conferenceURLForPhoneNumber:(id)arg1 ;
-(BOOL)isPhoneAppAvailable;
-(id)conferenceURLForDestinationID:(id)arg1 ;
-(void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2 ;
-(void)removeIDSServiceAvailabilityListener:(id)arg1 ;
-(BOOL)isMailAppAvailable;
-(BOOL)isMessagesAppAvailable;
-(void)_startListeningToIDSServiceAvailabilityIfNecessary;
-(BOOL)hasAdditionalTextTones;
-(void)_startListeningToIDSIDQueryControllerIfNecessary;
-(BOOL)isWeiboServiceAvailable;
-(BOOL)isFaceTimeAppAvailable;
-(BOOL)_isAppAvailable:(id)arg1 ;
-(BOOL)areFavoritesAvailable;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasVibratorCapability;
-(BOOL)isFaceTimeAudioAvailable;
-(void)dealloc;
@end

