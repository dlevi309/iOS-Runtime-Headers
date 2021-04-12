/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABPredicate.h>

@class NSString;

@interface ABGroupMembershipPredicate : ABPredicate {

	void* _group;
	void* _store;
	NSString* _accountIdentifier;

}

@property (assign,nonatomic) void* group; 
@property (assign,nonatomic) void* store; 
@property (nonatomic,copy) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
-(void)dealloc;
-(id)description;
-(BOOL)isValid;
-(void)setGroup:(void*)arg1 ;
-(void*)store;
-(void*)group;
-(void)setStore:(void*)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
@end

