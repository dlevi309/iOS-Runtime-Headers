/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsModelFetching.h>

@protocol CNUICoreContactStoreFacade, CNUICoreFamilyInfoFetching;
@class CNSchedulerProvider, NSString;

@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject <CNUICoreFamilyMemberContactsModelFetching> {

	id<CNUICoreContactStoreFacade> _contactStore;
	id<CNUICoreFamilyInfoFetching> _familyInfoFetcher;
	CNSchedulerProvider* _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> contactStore;                   //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyInfoFetching> familyInfoFetcher;              //@synthesize familyInfoFetcher=_familyInfoFetcher - In the implementation block
@property (nonatomic,readonly) CNSchedulerProvider * schedulerProvider;                       //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> backgroundOrImmediateScheduler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keysToFetch;
+(long long)contactFormatterStyle;
-(id)init;
-(id<CNUICoreContactStoreFacade>)contactStore;
-(CNSchedulerProvider *)schedulerProvider;
-(id)allContacts;
-(id)initWithSchedulerProvider:(id)arg1 ;
-(id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithContactStoreFacade:(id)arg1 familyInfoFetcher:(id)arg2 schedulerProvider:(id)arg3 ;
-(id<CNUICoreFamilyInfoFetching>)familyInfoFetcher;
-(id<CNScheduler>)backgroundOrImmediateScheduler;
-(id)allContactsModel;
-(id)whitelistedContactsModel;
@end

