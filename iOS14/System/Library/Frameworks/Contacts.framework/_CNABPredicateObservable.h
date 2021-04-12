/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>

@protocol CNObserver;
@class ABPredicate, CNContactsEnvironment, CNCancelationToken, NSString;

@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate> {

	void* _addressBook;
	unsigned _sortOrdering;
	ABPredicate* _predicate;
	unsigned long long _options;
	CNContactsEnvironment* _environment;
	CNCancelationToken* _cancelationToken;
	id<CNObserver> _observer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(id)subscribe:(id)arg1 ;
-(void)dealloc;
@end

