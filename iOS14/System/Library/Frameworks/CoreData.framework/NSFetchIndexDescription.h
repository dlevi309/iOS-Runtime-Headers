/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSEntityDescription, NSPredicate;

@interface NSFetchIndexDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {

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
-(void)setElements:(NSArray *)arg1 ;
-(NSArray *)elements;
-(BOOL)_isEditable;
-(NSEntityDescription *)entity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPartialIndexPredicate:(NSPredicate *)arg1 ;
-(id)initWithName:(id)arg1 predicate:(id)arg2 elements:(id)arg3 entity:(id)arg4 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 elements:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSPredicate *)partialIndexPredicate;
-(void)setName:(NSString *)arg1 ;
-(void)_throwIfNotEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

