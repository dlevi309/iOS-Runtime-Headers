/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSAttributeDescription, NSExpression;

@interface NSExpressionDescription : NSPropertyDescription {

	id _reservedtype1_1;
	id _reservedtype1_2;
	unsigned long long _reservedtype1_3;
	id _reservedtype1_4;
	unsigned long long _reservedtype1_5;
	id _reservedtype1_6;
	void* _reservedtype2_1;
	void* _reservedtype2_2;
	NSAttributeDescription* _underlyingAttribute;
	NSExpression* _expression;
	unsigned long long _expressionResultType;

}

@property (retain) NSExpression * expression; 
@property (assign) unsigned long long expressionResultType; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setExpression:(NSExpression *)arg1 ;
-(void)setExpressionResultType:(unsigned long long)arg1 ;
-(id)attributeValueClassName;
-(unsigned long long)_propertyType;
-(unsigned long long)expressionResultType;
-(NSExpression *)expression;
-(id)valueTransformerName;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(id)underlyingAttribute;
-(void)setUnderlyingAttribute:(id)arg1 ;
@end

