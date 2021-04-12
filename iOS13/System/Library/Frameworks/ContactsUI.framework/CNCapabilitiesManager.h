/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2 ;
-(BOOL)isSensitiveUIAllowed;
-(BOOL)hasTelephonyCapability;
-(BOOL)hasCellularTelephonyCapability;
-(BOOL)hasCellularTelephonyHardwareCapability;
-(BOOL)hasCellularDataCapability;
-(BOOL)hasSMSCapability;
-(BOOL)hasVibratorCapability;
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
-(id)conferenceURLForDestinationID:(id)arg1 ;
-(void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2 ;
-(void)removeIDSServiceAvailabilityListener:(id)arg1 ;
-(void)_startListeningToIDSServiceAvailabilityIfNecessary;
-(void)_startListeningToIDSIDQueryControllerIfNecessary;
-(BOOL)hasAdditionalTextTones;
-(BOOL)isWeiboServiceAvailable;
-(BOOL)isFaceTimeAudioAvailable;
-(BOOL)isPhoneAppAvailable;
-(BOOL)isMailAppAvailable;
-(BOOL)isMessagesAppAvailable;
-(BOOL)isFaceTimeAppAvailable;
-(BOOL)_isAppAvailable:(id)arg1 ;
-(BOOL)areFavoritesAvailable;
@end

