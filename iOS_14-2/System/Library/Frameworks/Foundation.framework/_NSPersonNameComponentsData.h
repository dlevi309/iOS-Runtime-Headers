/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)familyName;
-(NSString *)namePrefix;
-(void)setFamilyName:(NSString *)arg1 ;
-(id)init;
-(NSString *)nameSuffix;
-(NSString *)givenName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)nickname;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setNameSuffix:(NSString *)arg1 ;
@end

