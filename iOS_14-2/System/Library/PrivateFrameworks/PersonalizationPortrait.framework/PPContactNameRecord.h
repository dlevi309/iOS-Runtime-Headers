/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PPContactNameRecord : NSObject <NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
+(id)describeChangeType:(unsigned char)arg1 ;
+(id)describeSource:(unsigned char)arg1 ;
-(id)phoneticMiddleName;
-(id)cityNames;
-(id)streetNames;
-(id)firstName;
-(id)lastName;
-(id)phoneticLastName;
-(id)phoneticFirstName;
-(long long)compare:(id)arg1 ;
-(unsigned char)changeType;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17 ;
-(id)organizationName;
-(double)score;
-(void)encodeWithCoder:(id)arg1 ;
-(id)nickname;
-(id)relatedNames;
-(id)jobTitle;
-(id)description;
-(id)middleName;
-(id)init_;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToContactNameRecord:(id)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned char)source;
-(id)sourceIdentifier;
@end

