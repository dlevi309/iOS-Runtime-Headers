/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSString, NSArray;

@interface RTContact : NSObject {

	NSString* _identifier;
	NSString* _givenName;
	NSString* _middleName;
	NSString* _familyName;
	NSArray* _postalAddresses;

}

@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * givenName;                   //@synthesize givenName=_givenName - In the implementation block
@property (nonatomic,readonly) NSString * middleName;                  //@synthesize middleName=_middleName - In the implementation block
@property (nonatomic,readonly) NSString * familyName;                  //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
-(NSString *)familyName;
-(id)init;
-(NSString *)givenName;
-(NSArray *)postalAddresses;
-(id)description;
-(NSString *)middleName;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 givenName:(id)arg2 middleName:(id)arg3 familyName:(id)arg4 postalAddresses:(id)arg5 ;
@end

