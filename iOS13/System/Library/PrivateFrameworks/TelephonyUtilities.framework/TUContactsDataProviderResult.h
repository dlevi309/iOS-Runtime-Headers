/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSString, NSArray;

@interface TUContactsDataProviderResult : NSObject {

	int _legacyAddressBookIdentifier;
	NSString* _localizedName;
	NSString* _companyName;
	NSString* _contactLabel;
	NSArray* _contacts;

}

@property (nonatomic,copy) NSArray * contacts;                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                       //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy) NSString * companyName;                         //@synthesize companyName=_companyName - In the implementation block
@property (nonatomic,copy) NSString * contactLabel;                        //@synthesize contactLabel=_contactLabel - In the implementation block
@property (assign,nonatomic) int legacyAddressBookIdentifier;              //@synthesize legacyAddressBookIdentifier=_legacyAddressBookIdentifier - In the implementation block
-(id)description;
-(NSString *)localizedName;
-(NSArray *)contacts;
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)companyName;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSString *)contactLabel;
-(int)legacyAddressBookIdentifier;
-(void)setContactLabel:(NSString *)arg1 ;
-(void)setLegacyAddressBookIdentifier:(int)arg1 ;
@end

