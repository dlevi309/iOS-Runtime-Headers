/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/


@protocol NSObject, SGSuggestionsServiceContactsProtocol;
@class PPNotificationHandler, CNContactStore, PPEventKitNotificationHandler, EKEventStore;

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
	PPEventKitNotificationHandler* _eventKitHandler;
	id<NSObject> _eventKitToken;
	EKEventStore* _ekStore;
	long long _eventKitChangeTrackingToken;
	id<SGSuggestionsServiceContactsProtocol> _suggestionsService;
	PPNotificationHandler* _suggestionsHandler;
	id _suggestionsToken;

}
-(id)description;
@end

