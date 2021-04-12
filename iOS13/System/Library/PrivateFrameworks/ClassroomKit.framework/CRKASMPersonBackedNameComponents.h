/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKASMNameComponents.h>

@class NSString;

@interface CRKASMPersonBackedNameComponents : NSObject <CRKASMNameComponents> {

	NSString* _givenName;
	NSString* _familyName;
	NSString* _fullName;
	NSString* _monogram;
	NSString* _phoneticGivenName;
	NSString* _phoneticFamilyName;

}

@property (nonatomic,copy,readonly) NSString * givenName;                       //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticGivenName;               //@synthesize phoneticGivenName=_phoneticGivenName - In the implementation block
@property (nonatomic,copy,readonly) NSString * familyName;                      //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticFamilyName;              //@synthesize phoneticFamilyName=_phoneticFamilyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;                        //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * monogram;                        //@synthesize monogram=_monogram - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)givenName;
-(NSString *)familyName;
-(NSString *)fullName;
-(NSString *)phoneticGivenName;
-(NSString *)phoneticFamilyName;
-(id)initWithPerson:(id)arg1 ;
-(NSString *)monogram;
-(id)monogramForGivenName:(id)arg1 familyName:(id)arg2 ;
-(id)initWithGivenName:(id)arg1 phoneticGivenName:(id)arg2 familyName:(id)arg3 phoneticFamilyName:(id)arg4 fullName:(id)arg5 monogram:(id)arg6 ;
@end

