/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABPredicate.h>

@protocol NSObject;
@class NSArray, NSObject;

@interface ABValuePredicate : ABPredicate {

	int _property;
	long long _comparison;
	id<NSObject> _value;
	NSArray* _orderedKeys;
	BOOL _dictionaryValue;

}

@property (assign,nonatomic) int property;                      //@synthesize property=_property - In the implementation block
@property (assign,nonatomic) long long comparison;              //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,copy) NSObject * value;                    //@synthesize value=_value - In the implementation block
+(id)stringForComparison:(id)arg1 withComparision:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isValid;
-(NSObject *)value;
-(void)setValue:(NSObject *)arg1 ;
-(id)predicateFormat;
-(int)property;
-(void)setProperty:(int)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(void)setComparison:(long long)arg1 ;
-(BOOL)_shouldConsultIndexForKey:(id)arg1 ;
-(BOOL)_supportsFTSSearch;
-(BOOL)_allowsLaxCheckingForFTS;
-(long long)comparison;
-(id)_ftsTermStringForString:(id)arg1 ;
-(id)_ftsTokenizedTermStringForString:(id)arg1 ;
-(id)stringForComparison:(id)arg1 ;
-(id)_ftsAllQueryStrings;
@end

