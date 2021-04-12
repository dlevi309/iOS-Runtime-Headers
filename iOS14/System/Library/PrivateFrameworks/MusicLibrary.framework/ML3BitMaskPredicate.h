/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)mask;
-(void)setMask:(long long)arg1 ;
-(id)databaseStatementParameters;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setValue:(long long)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(long long)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3 ;
@end

