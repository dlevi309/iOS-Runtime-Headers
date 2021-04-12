/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABPredicate.h>

@class NSString;

@interface ABPhonePredicate : ABPredicate {

	NSString* _homeCountryCode;
	NSString* _phoneNumber;
	NSString* _country;

}

@property (nonatomic,copy) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * country;                  //@synthesize country=_country - In the implementation block
-(id)predicateFormat;
-(NSString *)country;
-(BOOL)hasCallback;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(void)evaluateCallbackWithSqliteContext:(sqlite3_contextRef)arg1 predicateContext:(id)arg2 values:(sqlite3_value*)arg3 count:(int)arg4 ;
-(NSString *)phoneNumber;
-(void)setCountry:(NSString *)arg1 ;
-(BOOL)isValid;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(id)homeCountryCode;
-(void)dealloc;
@end

