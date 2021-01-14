/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSExpression, NSDictionary;

@interface NSPropertyMapping : NSObject <NSSecureCoding> {

	void* _reserved;
	NSArray* _transformValidations;
	NSArray* _propertyTransforms;
	NSString* _name;
	NSExpression* _valueExpression;
	NSDictionary* _userInfo;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedPropertyMapping : 31;
	}  _propertyMappingFlags;

}

@property (copy) NSString * name; 
@property (retain) NSExpression * valueExpression; 
@property (retain) NSDictionary * userInfo; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(BOOL)isEditable;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)_createCachesAndOptimizeState;
-(id)_transformValidations;
-(id)initWithName:(id)arg1 valueExpression:(id)arg2 ;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setValueExpression:(NSExpression *)arg1 ;
-(void)_setPropertyTransforms:(id)arg1 ;
-(void)_setTransformValidations:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSExpression *)valueExpression;
-(void)_throwIfNotEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2 ;
-(id)_propertyTransforms;
@end

