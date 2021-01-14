/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLValueExpressable.h>

@class NSString;

@interface _EFSQLCharacterExpression : NSObject <EFSQLValueExpressable> {

	unsigned short _character;

}

@property (nonatomic,readonly) unsigned short character;                      //@synthesize character=_character - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ef_SQLIsolatedExpression;
-(NSString *)ef_SQLExpression;
-(id)initWithCharacter:(unsigned short)arg1 ;
-(unsigned short)character;
-(void)ef_renderSQLExpressionInto:(id)arg1 ;
@end

