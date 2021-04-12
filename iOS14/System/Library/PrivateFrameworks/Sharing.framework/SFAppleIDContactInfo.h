/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFAppleIDContactInfo : NSObject <NSSecureCoding> {

	NSString* _firstName;
	NSString* _lastName;
	NSArray* _validatedEmailAddresses;
	NSArray* _validatedPhoneNumbers;

}

@property (nonatomic,retain) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSArray * validatedEmailAddresses;              //@synthesize validatedEmailAddresses=_validatedEmailAddresses - In the implementation block
@property (nonatomic,retain) NSArray * validatedPhoneNumbers;                //@synthesize validatedPhoneNumbers=_validatedPhoneNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToContactInfo:(id)arg1 ;
-(NSArray *)validatedEmailAddresses;
-(NSArray *)validatedPhoneNumbers;
-(void)setValidatedEmailAddresses:(NSArray *)arg1 ;
-(void)setValidatedPhoneNumbers:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

