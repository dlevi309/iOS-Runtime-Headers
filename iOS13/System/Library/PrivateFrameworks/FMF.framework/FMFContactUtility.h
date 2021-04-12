/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/


@class CNContactStore, CNContactFormatter;

@interface FMFContactUtility : NSObject {

	CNContactStore* _contactStore;
	CNContactFormatter* _contactFormatter;

}

@property (nonatomic,retain) CNContactStore * contactStore;                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
+(id)sharedInstance;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)contactKeys;
-(id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2 ;
-(id)findOptimalContactInContacts:(id)arg1 ;
-(id)displayNameForContact:(id)arg1 andHandle:(id)arg2 ;
-(id)getContactForHandle:(id)arg1 ;
@end

