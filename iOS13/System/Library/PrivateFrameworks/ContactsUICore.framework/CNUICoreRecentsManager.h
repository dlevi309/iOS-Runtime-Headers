/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNScheduler;
@class CRRecentContactsLibrary;

@interface CNUICoreRecentsManager : NSObject {

	CRRecentContactsLibrary* _recentsLibrary;
	id<CNScheduler> _workQueue;

}

@property (nonatomic,readonly) CRRecentContactsLibrary * recentsLibrary;              //@synthesize recentsLibrary=_recentsLibrary - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workQueue;                             //@synthesize workQueue=_workQueue - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)supportedPropertyDescriptions;
+(id)allHandlesToSearchForFromContact:(id)arg1 ;
+(/*^block*/id)transformForPropertyDescription:(id)arg1 ;
+(id)handlesForContactProperties:(id)arg1 ;
+(id)queryForHandles:(id)arg1 ;
+(id)predicateForSearchingHandlesForAllSupportedKinds:(id)arg1 ;
+(id)supportedRecentsDomains;
+(id)supportedRecentsKinds;
-(id<CNScheduler>)workQueue;
-(void)removeRecentsWithIdentifiers:(id)arg1 domain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeRecents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)recentContactsMatchingAllPropertiesOfContact:(id)arg1 ;
-(id)recentContactsMatchingContactProperties:(id)arg1 ;
-(id)initWithRecentsLibrary:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)recentsContactsMatchingHandles:(id)arg1 ;
-(CRRecentContactsLibrary *)recentsLibrary;
@end

