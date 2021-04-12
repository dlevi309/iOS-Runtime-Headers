/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression;

@interface NSFetchRequestExpression : NSExpression {

	void* _reserved1;
	void* _reserved2;
	void* _reserved3;
	void* _reserved4;
	NSExpression* _fetchRequest;
	NSExpression* _managedObjectContext;
	struct {
		unsigned isCountOnly : 1;
		unsigned _RESERVED : 31;
	}  _flags;

}

@property (readonly) NSExpression * requestExpression; 
@property (readonly) NSExpression * contextExpression; 
@property (getter=isCountOnlyRequest,readonly) BOOL countOnlyRequest; 
+(BOOL)supportsSecureCoding;
+(id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)expressionType;
-(id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCountOnlyRequest;
-(NSExpression *)requestExpression;
-(NSExpression *)contextExpression;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

