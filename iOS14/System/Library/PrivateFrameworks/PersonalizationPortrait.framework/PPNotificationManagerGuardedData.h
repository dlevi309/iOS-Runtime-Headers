/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol NSObject, SGSuggestionsServiceContactsProtocol;
@class PPNotificationHandler, CNContactStore, EKEventStore;

@interface PPNotificationManagerGuardedData : NSObject {

	PPNotificationHandler* _contactsHandler;
	id<NSObject> _contactsToken;
	CNContactStore* _cnStore;
	PPNotificationHandler* _meCardHandler;
	id<NSObject> _meCardToken;
	id<NSObject> _meCardDonationToken;
	PPNotificationHandler* _portraitChangeHandler;
	int _portraitChangeToken;
	PPNotificationHandler* _portraitInvalidationHandler;
	int _portraitInvalidationToken;
	PPNotificationHandler* _eventKitHandler;
	id<NSObject> _eventKitToken;
	EKEventStore* _ekStore;
	long long _eventKitChangeTrackingToken;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	PPNotificationHandler* _suggestionsHandler;
	id _suggestionsToken;

}
-(id)description;
@end

