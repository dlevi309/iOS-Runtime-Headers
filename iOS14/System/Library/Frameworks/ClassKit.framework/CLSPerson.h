/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSContactsSearchable.h>

@class NSString, NSPersonNameComponents;

@interface CLSPerson : CLSObject <CLSContactsSearchable> {

	BOOL _progressTrackingAllowed;
	BOOL _federatedAccount;
	BOOL _isEditable;
	BOOL _isSearchable;
	NSString* _appleID;
	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSString* _phoneticGivenName;
	NSString* _phoneticMiddleName;
	NSString* _phoneticFamilyName;
	NSString* _iCloudUserID;
	NSString* _orgID;
	long long _passcodeType;
	long long _axmAccountStatus;
	NSString* _emailAddress;
	NSString* _grade;
	long long _sourceType;
	NSString* _searchText;

}

@property (nonatomic,copy) NSString * appleID;                                                           //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * iCloudUserID;                                                      //@synthesize iCloudUserID=_iCloudUserID - In the implementation block
@property (nonatomic,copy) NSString * orgID;                                                             //@synthesize orgID=_orgID - In the implementation block
@property (nonatomic,copy) NSString * givenName;                                                         //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy) NSString * middleName;                                                        //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,copy) NSString * familyName;                                                        //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy) NSString * phoneticGivenName;                                                 //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy) NSString * phoneticMiddleName;                                                //@synthesize phoneticMiddleName=_phoneticMiddleName - In the implementation block
@property (nonatomic,copy) NSString * phoneticFamilyName;                                                //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (assign,nonatomic) long long passcodeType;                                                     //@synthesize passcodeType=_passcodeType - In the implementation block
@property (assign,getter=isProgressTrackingAllowed,nonatomic) BOOL progressTrackingAllowed;              //@synthesize progressTrackingAllowed=_progressTrackingAllowed - In the implementation block
@property (assign,getter=isFederatedAccount,nonatomic) BOOL federatedAccount;                            //@synthesize federatedAccount=_federatedAccount - In the implementation block
@property (assign,nonatomic) long long axmAccountStatus;                                                 //@synthesize axmAccountStatus=_axmAccountStatus - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                                                      //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * grade;                                                             //@synthesize grade=_grade - In the implementation block
@property (assign,nonatomic) long long sourceType;                                                       //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL isEditable;                                          //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,getter=isSearchable,nonatomic) BOOL isSearchable;                                      //@synthesize isSearchable=_isSearchable - In the implementation block
@property (nonatomic,copy) NSString * searchText;                                                        //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSPersonNameComponents * nameComponents; 
@property (nonatomic,readonly) NSString * groupIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)stringForRole:(unsigned long long)arg1 ;
+(unsigned long long)roleFromString:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(BOOL)isEditable;
-(void)setIsEditable:(BOOL)arg1 ;
-(NSString *)phoneticMiddleName;
-(NSString *)familyName;
-(id)dictionaryRepresentation;
-(long long)sourceType;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)grade;
-(NSString *)emailAddress;
-(NSString *)orgID;
-(void)setGrade:(NSString *)arg1 ;
-(NSString *)givenName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setSourceType:(long long)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)setPasscodeType:(long long)arg1 ;
-(NSString *)middleName;
-(NSString *)searchText;
-(long long)passcodeType;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)phoneticGivenName;
-(id)initWithCoder:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(id)_init;
-(BOOL)isSearchable;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSPersonNameComponents *)nameComponents;
-(NSString *)iCloudUserID;
-(void)setICloudUserID:(NSString *)arg1 ;
-(void)setOrgID:(NSString *)arg1 ;
-(BOOL)isProgressTrackingAllowed;
-(void)setProgressTrackingAllowed:(BOOL)arg1 ;
-(BOOL)isFederatedAccount;
-(void)setFederatedAccount:(BOOL)arg1 ;
-(long long)axmAccountStatus;
-(void)setAxmAccountStatus:(long long)arg1 ;
-(void)setIsSearchable:(BOOL)arg1 ;
@end

