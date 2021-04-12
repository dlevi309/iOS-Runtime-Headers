/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSAttributeDescription.h>

@class NSExpression, NSPredicate;

@interface NSDerivedAttributeDescription : NSAttributeDescription {

	NSExpression* _derivationExpression;
	NSPredicate* _filteringPredicate;

}

@property (retain) NSExpression * derivationExpression; 
+(BOOL)supportsSecureCoding;
-(void)_createCachesAndOptimizeState;
-(void)setTransient:(BOOL)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(unsigned long long)_propertyType;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isTransient;
-(BOOL)isReadOnly;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSExpression *)derivationExpression;
-(void)setFilteringPredicate:(id)arg1 ;
-(id)description;
-(void)setDerivationExpression:(NSExpression *)arg1 ;
-(id)filteringPredicate;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRenamingIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

