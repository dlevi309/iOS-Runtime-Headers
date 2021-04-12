/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isTransient;
-(unsigned long long)_propertyType;
-(BOOL)isReadOnly;
-(NSExpression *)derivationExpression;
-(id)filteringPredicate;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(void)setRenamingIdentifier:(id)arg1 ;
-(void)setTransient:(BOOL)arg1 ;
-(void)_validateKeypaths:(id)arg1 ;
-(void)setDerivationExpression:(NSExpression *)arg1 ;
-(void)setFilteringPredicate:(id)arg1 ;
@end

