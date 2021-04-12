/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@class NSPredicate, CNCDPersistenceContext;

@interface CNCDAccountFetcher : NSObject {

	NSPredicate* _predicate;
	CNCDPersistenceContext* _persistenceContext;

}

@property (nonatomic,readonly) NSPredicate * predicate;                                  //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,readonly) CNCDPersistenceContext * persistenceContext;              //@synthesize persistenceContext=_persistenceContext - In the implementation block
+(id)accountsForPredicate:(id)arg1 inPersistenceStack:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(NSPredicate *)predicate;
-(id)initWithPredicate:(id)arg1 persistenceContext:(id)arg2 ;
-(id)fetchAccounts:(id*)arg1 ;
-(CNCDPersistenceContext *)persistenceContext;
@end

