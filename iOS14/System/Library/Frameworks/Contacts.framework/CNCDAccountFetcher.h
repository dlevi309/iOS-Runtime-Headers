/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSPredicate *)predicate;
-(id)init;
-(CNCDPersistenceContext *)persistenceContext;
-(id)fetchAccounts:(id*)arg1 ;
-(id)initWithPredicate:(id)arg1 persistenceContext:(id)arg2 ;
@end

