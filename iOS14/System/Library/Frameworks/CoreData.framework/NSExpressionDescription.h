/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)_propertyType;
-(id)valueTransformerName;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(id)attributeValueClassName;
-(id)init;
-(void)setUnderlyingAttribute:(id)arg1 ;
-(void)setExpressionResultType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExpression:(NSExpression *)arg1 ;
-(id)description;
-(NSExpression *)expression;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)expressionResultType;
-(id)underlyingAttribute;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

