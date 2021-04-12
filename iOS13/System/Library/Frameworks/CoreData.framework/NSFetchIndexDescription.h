/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSEntityDescription, NSPredicate;

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding> {

	NSString* _name;
	NSArray* _elements;
	NSEntityDescription* _entity;
	NSPredicate* _partialIndexPredicate;

}

@property (copy) NSString * name; 
@property (copy) NSArray * elements; 
@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (copy) NSPredicate * partialIndexPredicate; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)elements;
-(NSEntityDescription *)entity;
-(long long)_compare:(id)arg1 ;
-(void)setElements:(NSArray *)arg1 ;
-(BOOL)_isEditable;
-(BOOL)_expressionIsCompoundIndexCompatible:(id)arg1 ;
-(void)_throwIfNotEditable;
-(id)initWithName:(id)arg1 elements:(id)arg2 ;
-(void)_setEntity:(id)arg1 ;
-(BOOL)_isMappedSinglePropertyIndex;
-(void)_setIsUnique:(BOOL)arg1 ;
-(id)_compoundIndexRepresentation;
-(BOOL)_isIndexForProperty:(id)arg1 ;
-(id)initWithName:(id)arg1 predicate:(id)arg2 elements:(id)arg3 entity:(id)arg4 ;
-(NSPredicate *)partialIndexPredicate;
-(void)_checkElements:(id)arg1 ;
-(BOOL)_isBinary;
-(BOOL)_isCompoundIndexCompatible;
-(BOOL)_isUnique;
-(void)setPartialIndexPredicate:(NSPredicate *)arg1 ;
-(void)_validateCollationTypeChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
-(BOOL)_isPurelyModeledIndex;
@end

