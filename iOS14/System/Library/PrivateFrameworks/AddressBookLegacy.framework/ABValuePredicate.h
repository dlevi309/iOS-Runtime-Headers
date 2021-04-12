/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)predicateFormat;
-(int)property;
-(long long)comparison;
-(id)init;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)querySelectPropertiesForPredicateIdentifier:(int)arg1 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(BOOL)_supportsFTSSearch;
-(BOOL)_shouldConsultIndexForKey:(id)arg1 ;
-(BOOL)_allowsLaxCheckingForFTS;
-(id)stringForComparison:(id)arg1 ;
-(void)setProperty:(int)arg1 ;
-(id)_ftsTermStringForString:(id)arg1 ;
-(id)_ftsAllQueryStrings;
-(id)_ftsTokenizedTermStringForString:(id)arg1 ;
-(void)setValue:(NSObject *)arg1 ;
-(BOOL)isValid;
-(NSObject *)value;
-(void)setComparison:(long long)arg1 ;
-(void)dealloc;
@end

