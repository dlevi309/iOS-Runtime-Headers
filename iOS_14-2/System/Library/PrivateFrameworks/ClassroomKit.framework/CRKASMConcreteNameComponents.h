/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMNameComponents.h>

@class NSString;

@interface CRKASMConcreteNameComponents : NSObject <CRKASMNameComponents> {

	NSString* _givenName;
	NSString* _phoneticGivenName;
	NSString* _familyName;
	NSString* _phoneticFamilyName;
	NSString* _fullName;
	NSString* _phoneticFullName;
	NSString* _monogram;

}

@property (nonatomic,copy,readonly) NSString * givenName;                       //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticGivenName;               //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * familyName;                      //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFamilyName;              //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;                        //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFullName;                //@synthesize phoneticFullName=_phoneticFullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * monogram;                        //@synthesize monogram=_monogram - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeNameComponentsForPerson:(id)arg1 ;
+(id)makeFullNameWithComponents:(id)arg1 ;
+(id)makePhoneticFullNameWithComponents:(id)arg1 ;
+(id)makeMonogramWithComponents:(id)arg1 ;
-(NSString *)familyName;
-(NSString *)fullName;
-(NSString *)phoneticFullName;
-(NSString *)givenName;
-(NSString *)phoneticFamilyName;
-(NSString *)description;
-(NSString *)phoneticGivenName;
-(NSString *)monogram;
-(unsigned long long)hash;
-(id)initWithPerson:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

