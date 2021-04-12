/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) ABPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) unsigned sortOrdering;                              //@synthesize sortOrdering=_sortOrdering - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                         //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) void* addressBook;                                  //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,readonly) CNContactsEnvironment * environment;                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) CNCancelationToken * cancelationToken;              //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (nonatomic,retain) id<CNObserver> observer;                              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observableWithPredicates:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 environment:(id)arg5 ;
+(id)schedulerForIdentifier:(id)arg1 provider:(id)arg2 ;
+(id)makeSerialFetchSchedulerUsingSchedulerProvider:(id)arg1 ;
-(void)dealloc;
-(id<CNObserver>)observer;
-(unsigned long long)options;
-(ABPredicate *)predicate;
-(CNContactsEnvironment *)environment;
-(void)setObserver:(id<CNObserver>)arg1 ;
-(void*)addressBook;
-(id)subscribe:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 environment:(id)arg5 ;
-(unsigned)sortOrdering;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3 ;
-(CNCancelationToken *)cancelationToken;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
@end

