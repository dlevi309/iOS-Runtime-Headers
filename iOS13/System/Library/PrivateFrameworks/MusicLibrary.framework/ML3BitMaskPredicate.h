/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3BitMaskPredicate : ML3PropertyPredicate {

	long long _mask;
	long long _value;

}

@property (assign,nonatomic) long long mask;               //@synthesize mask=_mask - In the implementation block
@property (assign,nonatomic) long long value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(long long)mask;
-(void)setMask:(long long)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3 ;
@end

