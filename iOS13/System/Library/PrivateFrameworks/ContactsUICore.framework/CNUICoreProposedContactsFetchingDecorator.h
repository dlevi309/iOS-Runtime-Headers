/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUICoreFamilyMemberContactsModelFetching.h>

@protocol CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyInfoFetching, CNSchedulerProvider;
@class NSString;

@interface CNUICoreProposedContactsFetchingDecorator : NSObject <CNUICoreFamilyMemberContactsModelFetching> {

	id<CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
	id<CNUICoreFamilyInfoFetching> _familyInfoFetcher;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher;              //@synthesize modelFetcher=_modelFetcher - In the implementation block
@property (nonatomic,readonly) id<CNUICoreFamilyInfoFetching> familyInfoFetcher;                        //@synthesize familyInfoFetcher=_familyInfoFetcher - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                               //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)modelWithProposedContactsFromFamilyInfo:(id)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNUICoreFamilyInfoFetching>)familyInfoFetcher;
-(id)allContactsModel;
-(id)whitelistedContactsModel;
-(id)initWithModelFetcher:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3 ;
-(id<CNUICoreFamilyMemberContactsModelFetching>)modelFetcher;
-(id)initWithModelFetcher:(id)arg1 familyInfoFetcher:(id)arg2 schedulerProvider:(id)arg3 ;
@end

