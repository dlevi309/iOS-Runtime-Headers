/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSArray;

@interface DAContactSearchResultElement : NSObject <NSSecureCoding> {

	NSString* _displayName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _emailAddress;
	NSString* _workPhone;
	NSString* _mobilePhone;
	NSString* _company;
	NSString* _title;
	NSString* _homePhone;
	NSString* _alias;
	NSString* _office;
	NSString* _serverSource;
	NSString* _recordName;
	NSString* _faxPhone;
	NSString* _department;
	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _zip;
	NSString* _country;
	NSData* _jpegPhoto;
	NSString* _imService;
	NSString* _imUsername;
	NSString* _uri;
	NSString* _buildingName;
	NSString* _appleFloor;
	NSString* _pagerNumber;
	NSString* _postalAddress;
	NSString* _homePostalAddress;
	NSString* _principalPath;
	NSString* _preferredUserAddress;
	NSArray* _cuAddresses;
	NSString* _iPhone;
	NSString* _mainPhone;
	NSString* _workFaxPhone;
	NSString* _identifierOnServer;

}

@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * firstName;                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                          //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * workPhone;                         //@synthesize workPhone=_workPhone - In the implementation block
@property (nonatomic,copy) NSString * mobilePhone;                       //@synthesize mobilePhone=_mobilePhone - In the implementation block
@property (nonatomic,copy) NSString * company;                           //@synthesize company=_company - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * homePhone;                         //@synthesize homePhone=_homePhone - In the implementation block
@property (nonatomic,copy) NSString * alias;                             //@synthesize alias=_alias - In the implementation block
@property (nonatomic,copy) NSString * office;                            //@synthesize office=_office - In the implementation block
@property (nonatomic,copy) NSString * serverSource;                      //@synthesize serverSource=_serverSource - In the implementation block
@property (nonatomic,copy) NSString * recordName;                        //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,copy) NSString * faxPhone;                          //@synthesize faxPhone=_faxPhone - In the implementation block
@property (nonatomic,copy) NSString * department;                        //@synthesize department=_department - In the implementation block
@property (nonatomic,copy) NSString * street;                            //@synthesize street=_street - In the implementation block
@property (nonatomic,copy) NSString * city;                              //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * zip;                               //@synthesize zip=_zip - In the implementation block
@property (nonatomic,copy) NSString * country;                           //@synthesize country=_country - In the implementation block
@property (nonatomic,copy) NSData * jpegPhoto;                           //@synthesize jpegPhoto=_jpegPhoto - In the implementation block
@property (nonatomic,copy) NSString * imService;                         //@synthesize imService=_imService - In the implementation block
@property (nonatomic,copy) NSString * imUsername;                        //@synthesize imUsername=_imUsername - In the implementation block
@property (nonatomic,copy) NSString * uri;                               //@synthesize uri=_uri - In the implementation block
@property (nonatomic,copy) NSString * buildingName;                      //@synthesize buildingName=_buildingName - In the implementation block
@property (nonatomic,copy) NSString * appleFloor;                        //@synthesize appleFloor=_appleFloor - In the implementation block
@property (nonatomic,copy) NSString * pagerNumber;                       //@synthesize pagerNumber=_pagerNumber - In the implementation block
@property (nonatomic,copy) NSString * postalAddress;                     //@synthesize postalAddress=_postalAddress - In the implementation block
@property (nonatomic,copy) NSString * homePostalAddress;                 //@synthesize homePostalAddress=_homePostalAddress - In the implementation block
@property (nonatomic,copy) NSString * principalPath;                     //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,copy) NSString * preferredUserAddress;              //@synthesize preferredUserAddress=_preferredUserAddress - In the implementation block
@property (nonatomic,copy) NSArray * cuAddresses;                        //@synthesize cuAddresses=_cuAddresses - In the implementation block
@property (nonatomic,copy) NSString * iPhone;                            //@synthesize iPhone=_iPhone - In the implementation block
@property (nonatomic,copy) NSString * mainPhone;                         //@synthesize mainPhone=_mainPhone - In the implementation block
@property (nonatomic,copy) NSString * workFaxPhone;                      //@synthesize workFaxPhone=_workFaxPhone - In the implementation block
@property (nonatomic,retain) NSString * identifierOnServer;              //@synthesize identifierOnServer=_identifierOnServer - In the implementation block
+(BOOL)supportsSecureCoding;
-(void*)newAddressBookRecordWithSource:(void*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setState:(NSString *)arg1 ;
-(NSString *)city;
-(NSString *)country;
-(NSString *)recordName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)street;
-(NSString *)postalAddress;
-(void)setRecordName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setCountry:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
-(void)setAlias:(NSString *)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(NSString *)alias;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)uri;
-(NSString *)department;
-(void)setPostalAddress:(NSString *)arg1 ;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)workPhone;
-(NSString *)mobilePhone;
-(NSString *)homePhone;
-(NSString *)faxPhone;
-(NSString *)pagerNumber;
-(NSString *)iPhone;
-(NSString *)mainPhone;
-(NSString *)workFaxPhone;
-(NSString *)company;
-(NSString *)zip;
-(NSString *)homePostalAddress;
-(NSData *)jpegPhoto;
-(NSString *)imUsername;
-(NSString *)imService;
-(NSString *)buildingName;
-(NSString *)appleFloor;
-(NSString *)identifierOnServer;
-(void)setZip:(NSString *)arg1 ;
-(NSString *)preferredUserAddress;
-(void)setPreferredUserAddress:(NSString *)arg1 ;
-(NSString *)office;
-(NSString *)serverSource;
-(NSArray *)cuAddresses;
-(BOOL)isEqualToDAContactSearchResultElement:(id)arg1 ;
-(void)setWorkPhone:(NSString *)arg1 ;
-(void)setMobilePhone:(NSString *)arg1 ;
-(void)setCompany:(NSString *)arg1 ;
-(void)setHomePhone:(NSString *)arg1 ;
-(void)setOffice:(NSString *)arg1 ;
-(void)setServerSource:(NSString *)arg1 ;
-(void)setFaxPhone:(NSString *)arg1 ;
-(void)setDepartment:(NSString *)arg1 ;
-(void)setJpegPhoto:(NSData *)arg1 ;
-(void)setImService:(NSString *)arg1 ;
-(void)setImUsername:(NSString *)arg1 ;
-(void)setBuildingName:(NSString *)arg1 ;
-(void)setAppleFloor:(NSString *)arg1 ;
-(void)setPagerNumber:(NSString *)arg1 ;
-(void)setHomePostalAddress:(NSString *)arg1 ;
-(void)setCuAddresses:(NSArray *)arg1 ;
-(void)setIPhone:(NSString *)arg1 ;
-(void)setMainPhone:(NSString *)arg1 ;
-(void)setWorkFaxPhone:(NSString *)arg1 ;
-(void)setIdentifierOnServer:(NSString *)arg1 ;
@end

