/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString;

@interface EFSQLLikeEscapedExpression : NSObject <EFSQLValueExpressable> {

	unsigned short _escapeCharacter;
	NSString* _value;
	unsigned long long _pattern;

}

@property (nonatomic,readonly) NSString * value;                              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) unsigned short escapeCharacter;                //@synthesize escapeCharacter=_escapeCharacter - In the implementation block
@property (nonatomic,readonly) unsigned long long pattern;                    //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ef_SQLIsolatedExpression;
-(id)initWithValue:(id)arg1 ;
-(unsigned short)escapeCharacter;
-(NSString *)ef_SQLExpression;
-(id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 ;
-(id)initWithValue:(id)arg1 pattern:(unsigned long long)arg2 escapeCharacter:(unsigned short)arg3 ;
-(unsigned long long)pattern;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
-(NSString *)value;
@end

