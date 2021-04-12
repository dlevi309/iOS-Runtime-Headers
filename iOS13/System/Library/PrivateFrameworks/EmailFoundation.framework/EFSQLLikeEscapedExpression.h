/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <EFSQLExpressable> {

	unsigned short _escapeCharacter;
	NSString* _value;
	unsigned long long _pattern;

}

@property (nonatomic,readonly) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned short escapeCharacter;                //@synthesize escapeCharacter=_escapeCharacter - In the implementation block
@property (nonatomic,readonly) unsigned long long pattern;                    //@synthesize pattern=_pattern - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(NSString *)value;
-(unsigned long long)pattern;
-(id)initWithValue:(id)arg1 ;
-(NSString *)ef_SQLExpression;
-(id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 ;
-(id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 escapeCharacter:(unsigned short)arg3 ;
-(id)_stringForPattern:(unsigned long long)arg1 literal:(id)arg2 ;
-(unsigned short)escapeCharacter;
@end

