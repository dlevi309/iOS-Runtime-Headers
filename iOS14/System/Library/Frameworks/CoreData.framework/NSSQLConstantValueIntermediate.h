/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/NSSQLIntermediate.h>

@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {

	unsigned char _type;
	id _constantValue;

}
-(unsigned char)sqlTypeForProperty:(id)arg1 ;
-(BOOL)_addBindVarForConstId:(id)arg1 ofType:(unsigned char)arg2 inContext:(id)arg3 ;
-(id)initWithConstantValue:(id)arg1 inScope:(id)arg2 context:(id)arg3 ;
-(id)propertyAtEndOfKeyPathExpression:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithConstantValue:(id)arg1 ofType:(unsigned char)arg2 inScope:(id)arg3 context:(id)arg4 ;
-(BOOL)_addBindVarForConstVal1:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end

