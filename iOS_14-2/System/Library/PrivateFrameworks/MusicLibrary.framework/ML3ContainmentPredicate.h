/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate {

	NSSet* _values;

}

@property (nonatomic,retain) NSSet * values;              //@synthesize values=_values - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
-(NSSet *)values;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(void)setValues:(NSSet *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_orderedValues;
-(id)initWithProperty:(id)arg1 values:(id)arg2 ;
@end

