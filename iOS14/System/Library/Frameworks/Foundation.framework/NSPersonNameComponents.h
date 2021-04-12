/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {

	id _private;

}

@property (copy) NSString * namePrefix; 
@property (copy) NSString * givenName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * familyName; 
@property (copy) NSString * nameSuffix; 
@property (copy) NSString * nickname; 
@property (copy) NSPersonNameComponents * phoneticRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)arg1 ;
+(id)_allProperties;
+(id)_allComponents;
-(BOOL)_isEmpty;
-(NSString *)familyName;
-(id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)arg1 ;
-(NSString *)namePrefix;
-(void)setFamilyName:(NSString *)arg1 ;
-(id)init;
-(NSString *)nameSuffix;
-(NSString *)givenName;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)nickname;
-(void)setGivenName:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(BOOL)isEqualToComponents:(id)arg1 ;
-(id)description;
-(NSString *)middleName;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNickname:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setNameSuffix:(NSString *)arg1 ;
@end

