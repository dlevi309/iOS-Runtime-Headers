/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSString *)givenName;
-(NSString *)familyName;
-(NSString *)middleName;
-(NSArray *)postalAddresses;
-(id)initWithIdentifier:(id)arg1 givenName:(id)arg2 middleName:(id)arg3 familyName:(id)arg4 postalAddresses:(id)arg5 ;
@end

