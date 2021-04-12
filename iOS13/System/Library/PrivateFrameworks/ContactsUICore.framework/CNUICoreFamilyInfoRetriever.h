/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyInfoFetching.h>

@protocol CNUICoreContactStoreFacade, CNSchedulerProvider;
@class FAFetchFamilyCircleRequest, CNFuture, NSString;

@interface CNUICoreFamilyInfoRetriever : NSObject <CNUICoreFamilyInfoFetching> {

	BOOL _matchFamilyMembersWithContacts;
	id<CNUICoreContactStoreFacade> _mainContactStore;
	FAFetchFamilyCircleRequest* _fetchFamilyCircleRequest;
	id<CNSchedulerProvider> _schedulerProvider;
	CNFuture* _familyFuture;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> mainContactStore;                    //@synthesize mainContactStore=_mainContactStore - In the implementation block
@property (nonatomic,readonly) FAFetchFamilyCircleRequest * fetchFamilyCircleRequest;              //@synthesize fetchFamilyCircleRequest=_fetchFamilyCircleRequest - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                          //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) BOOL matchFamilyMembersWithContacts;                                //@synthesize matchFamilyMembersWithContacts=_matchFamilyMembersWithContacts - In the implementation block
@property (nonatomic,retain) CNFuture * familyFuture;                                              //@synthesize familyFuture=_familyFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keysToFetch;
+(id)meContactFromStore:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)familyCircleFromRequest:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2 matchedWithContactsInContactStore:(id)arg3 ;
+(id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2 ;
+(id)contactsMatchingFamilyMember:(id)arg1 inContactStore:(id)arg2 ;
-(id)init;
-(id)familyInfo;
-(id<CNUICoreContactStoreFacade>)mainContactStore;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithMainContactStoreFacade:(id)arg1 matchFamilyMembersWithContacts:(BOOL)arg2 schedulerProvider:(id)arg3 ;
-(id)initWithMainContactStoreFacade:(id)arg1 fetchFamilyCircleRequest:(id)arg2 matchFamilyMembersWithContacts:(BOOL)arg3 schedulerProvider:(id)arg4 ;
-(id)createFamilyFuture;
-(BOOL)matchFamilyMembersWithContacts;
-(FAFetchFamilyCircleRequest *)fetchFamilyCircleRequest;
-(CNFuture *)familyFuture;
-(void)setFamilyFuture:(CNFuture *)arg1 ;
@end

