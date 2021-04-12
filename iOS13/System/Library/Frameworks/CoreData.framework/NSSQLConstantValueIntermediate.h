/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {

	unsigned char _type;
	id _constantValue;

}
-(void)dealloc;
-(id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithConstantValue:(id)arg1 ofType:(unsigned char)arg2 inScope:(id)arg3 context:(id)arg4 ;
-(id)propertyAtEndOfKeyPathExpression:(id)arg1 ;
-(unsigned char)sqlTypeForProperty:(id)arg1 ;
-(BOOL)_addBindVarForConstId:(id)arg1 ofType:(unsigned char)arg2 inContext:(id)arg3 ;
-(BOOL)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2 ;
@end

