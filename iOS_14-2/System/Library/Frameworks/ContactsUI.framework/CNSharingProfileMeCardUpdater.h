/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNSharingProfileMeCardUpdaterDelegate;
@class CNMutableContact, CNContactStore, CNContact, CNSharingProfileLogger;

@interface CNSharingProfileMeCardUpdater : NSObject {

	id<CNSharingProfileMeCardUpdaterDelegate> _delegate;
	CNMutableContact* _meContact;
	CNContactStore* _contactStore;
	CNContact* _imageContact;
	CNSharingProfileLogger* _logger;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                          //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContact * imageContact;                                               //@synthesize imageContact=_imageContact - In the implementation block
@property (nonatomic,retain) CNSharingProfileLogger * logger;                                        //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) id<CNSharingProfileMeCardUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNMutableContact * meContact;                                         //@synthesize meContact=_meContact - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(CNMutableContact *)meContact;
-(id<CNSharingProfileMeCardUpdaterDelegate>)delegate;
-(void)setDelegate:(id<CNSharingProfileMeCardUpdaterDelegate>)arg1 ;
-(CNContact *)imageContact;
-(void)setLogger:(CNSharingProfileLogger *)arg1 ;
-(id)initWithMeContact:(id)arg1 contactStore:(id)arg2 ;
-(void)setImageContact:(CNContact *)arg1 ;
-(id)alertControllerForMeCardUpdateWithImageContact:(id)arg1 ;
-(void)updateContact:(id)arg1 withImagePropertiesFromContact:(id)arg2 ;
-(CNSharingProfileLogger *)logger;
-(void)performSave;
@end

