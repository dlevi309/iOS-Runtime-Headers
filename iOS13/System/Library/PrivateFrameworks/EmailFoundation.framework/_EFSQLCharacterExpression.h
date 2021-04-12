/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLExpressable.h>

@class NSString;

@interface _EFSQLCharacterExpression : NSObject <EFSQLExpressable> {

	unsigned short _character;

}

@property (nonatomic,readonly) unsigned short character;                      //@synthesize character=_character - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_SQLExpression; 
-(NSString *)ef_SQLExpression;
-(unsigned short)character;
-(id)initWithCharacter:(unsigned short)arg1 ;
@end

