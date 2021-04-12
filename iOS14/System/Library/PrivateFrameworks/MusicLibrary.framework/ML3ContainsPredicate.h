/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3ContainsPredicate : ML3PropertyPredicate {

	id _values;

}

@property (nonatomic,copy) id values;              //@synthesize values=_values - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 values:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 valueSet:(id)arg2 ;
-(id)values;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(void)setValues:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProperty:(id)arg1 values:(id)arg2 ;
@end

