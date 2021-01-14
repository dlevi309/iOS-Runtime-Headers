/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSString *)localizedName;
-(NSArray *)contacts;
-(void)setCompanyName:(NSString *)arg1 ;
-(id)description;
-(void)setContactLabel:(NSString *)arg1 ;
-(int)legacyAddressBookIdentifier;
-(void)setLegacyAddressBookIdentifier:(int)arg1 ;
-(NSString *)companyName;
-(NSString *)contactLabel;
@end

