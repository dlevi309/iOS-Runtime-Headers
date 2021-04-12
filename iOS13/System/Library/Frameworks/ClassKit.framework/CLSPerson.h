/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSString *)appleID;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(long long)passcodeType;
-(void)setPasscodeType:(long long)arg1 ;
-(NSString *)searchText;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(BOOL)isEditable;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setIsEditable:(BOOL)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)phoneticGivenName;
-(void)setPhoneticGivenName:(NSString *)arg1 ;
-(NSString *)phoneticMiddleName;
-(void)setPhoneticMiddleName:(NSString *)arg1 ;
-(NSString *)phoneticFamilyName;
-(void)setPhoneticFamilyName:(NSString *)arg1 ;
-(NSString *)grade;
-(void)setGrade:(NSString *)arg1 ;
-(BOOL)isSearchable;
-(NSString *)iCloudUserID;
-(void)setICloudUserID:(NSString *)arg1 ;
-(NSString *)orgID;
-(void)setOrgID:(NSString *)arg1 ;
-(BOOL)isProgressTrackingAllowed;
-(void)setProgressTrackingAllowed:(BOOL)arg1 ;
-(BOOL)isFederatedAccount;
-(void)setFederatedAccount:(BOOL)arg1 ;
-(void)setIsSearchable:(BOOL)arg1 ;
@end

