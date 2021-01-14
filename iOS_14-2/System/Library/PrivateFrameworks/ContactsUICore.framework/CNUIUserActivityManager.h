/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/


@protocol CNLSApplicationWorkspace, CNUIInteractionDonor;
@class CNContactStore;

@interface CNUIUserActivityManager : NSObject {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNUIInteractionDonor> _interactionDonor;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,readonly) id<CNUIInteractionDonor> interactionDonor;                      //@synthesize interactionDonor=_interactionDonor - In the implementation block
+(id)descriptorForRequiredKeys;
+(id)log;
-(CNContactStore *)contactStore;
-(id)makeActivityAdvertisingViewingList;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(id)makeActivityAdvertisingViewingOfContact:(id)arg1 ;
-(void)updateUserActivityState:(id)arg1 withContentsOfContact:(id)arg2 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 interactionDonor:(id)arg3 ;
-(id<CNUIInteractionDonor>)interactionDonor;
-(id)initWithContactStore:(id)arg1 ;
-(void)publishRequestToEditContact:(id)arg1 ;
-(void)publishRequestToCreateContact:(id)arg1 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
@end

