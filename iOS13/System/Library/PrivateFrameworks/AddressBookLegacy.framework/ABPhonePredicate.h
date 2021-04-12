/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isValid;
-(id)predicateFormat;
-(NSString *)phoneNumber;
-(NSString *)country;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(BOOL)hasCallback;
-(void)evaluateCallbackWithSqliteContext:(sqlite3_contextRef)arg1 predicateContext:(id)arg2 values:(sqlite3_value*)arg3 count:(int)arg4 ;
-(id)homeCountryCode;
@end

