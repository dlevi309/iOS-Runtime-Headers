/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContactStore:(CNContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(id)contactKeys;
-(id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2 ;
-(id)getContactForHandle:(id)arg1 ;
-(id)findOptimalContactInContacts:(id)arg1 ;
-(id)shortDisplayNameForContact:(id)arg1 andHandle:(id)arg2 ;
-(id)displayNameForContact:(id)arg1 andHandle:(id)arg2 ;
@end

