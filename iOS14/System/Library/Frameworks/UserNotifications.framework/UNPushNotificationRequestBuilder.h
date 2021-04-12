/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
*/


@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject {

	NSDictionary* _payload;
	NSString* _bundleIdentifier;
	NSString* _identifier;

}
-(id)initWithIdentifier:(id)arg1 payload:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)buildNotificationRequest;
-(id)buildSafePayload;
-(id)_sanitizeStringArray:(id)arg1 ;
-(id)_sanitizeAPSDictionary:(id)arg1 ;
-(id)_sanitizeAlert:(id)arg1 ;
-(id)_sanitizeSound:(id)arg1 ;
-(id)_sanitizeFlag:(id)arg1 ;
-(id)_sanitizeTopicIdentifier:(id)arg1 ;
-(id)_sanitizeLocalizationArgumentsArray:(id)arg1 ;
-(id)_sanitizeUnsignedInteger:(id)arg1 ;
-(id)_sanitizeVolume:(id)arg1 ;
@end

