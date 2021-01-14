/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNContactChangesObserver;
@class NSArray, CNContact;

@interface CNContactChangesObserverProxy : NSObject {

	BOOL _unify;
	id<CNContactChangesObserver> _observer;
	NSArray* _keysToFetch;
	CNContact* _contactSnapshot;

}
@end

