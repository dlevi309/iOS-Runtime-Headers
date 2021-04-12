/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPersonNameComponents;

@interface _NSPersonNameComponentsData : NSObject <NSCopying, NSSecureCoding> {

	NSString* _givenName;
	NSString* _familyName;
	NSString* _middleName;
	NSString* _namePrefix;
	NSString* _nameSuffix;
	NSString* _nickname;
	NSPersonNameComponents* _phoneticRepresentation;

}

@property (copy) NSString * givenName;                                         //@synthesize givenName=_givenName - In the implementation block
@property (copy) NSString * familyName;                                        //@synthesize familyName=_familyName - In the implementation block
@property (copy) NSString * middleName;                                        //@synthesize middleName=_middleName - In the implementation block
@property (copy) NSString * namePrefix;                                        //@synthesize namePrefix=_namePrefix - In the implementation block
@property (copy) NSString * nameSuffix;                                        //@synthesize nameSuffix=_nameSuffix - In the implementation block
@property (copy) NSString * nickname;                                          //@synthesize nickname=_nickname - In the implementation block
@property (copy) NSPersonNameComponents * phoneticRepresentation;              //@synthesize phoneticRepresentation=_phoneticRepresentation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)givenName;
-(void)setGivenName:(NSString *)arg1 ;
-(void)_freeIvars;
-(NSString *)familyName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(void)setNamePrefix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
@end

